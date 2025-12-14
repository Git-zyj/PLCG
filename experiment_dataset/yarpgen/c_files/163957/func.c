/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163957
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned long long int) arr_3 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_13 [3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_0] [i_2] [(unsigned char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_3])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0] [i_3] [i_0]))))), (((unsigned int) ((unsigned int) 15406091181525803784ULL)))));
                                var_12 = ((/* implicit */short) var_8);
                                arr_14 [i_4] [10] [i_2] [i_0] [i_0] &= ((/* implicit */signed char) ((short) (+(max((arr_1 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
