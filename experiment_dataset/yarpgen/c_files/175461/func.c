/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175461
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_6)), (((var_4) / (var_4)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0 + 1]));
                    var_14 = ((/* implicit */short) ((signed char) arr_6 [i_0 + 1] [(short)18] [i_0 + 1] [i_1]));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 1897346709U))))));
                                var_15 = ((/* implicit */int) var_6);
                                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0] [4] [i_0] [i_0 - 1] [i_0]))))), (((((/* implicit */_Bool) (signed char)0)) ? (5603327689749293917ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
