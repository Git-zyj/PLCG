/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18241
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
    var_11 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) (short)-32753))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))) : (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
    var_12 = ((/* implicit */long long int) (short)-32753);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1786420255)), (((unsigned long long int) ((var_10) | (((/* implicit */long long int) arr_12 [i_3] [4] [i_1] [i_0])))))));
                                arr_18 [(signed char)7] [(signed char)4] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) (_Bool)0);
                                var_14 = ((/* implicit */unsigned int) arr_5 [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_0] [i_1]) : (arr_6 [i_0] [i_1] [i_1])))) ? (max((arr_2 [i_0]), (arr_2 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_8)))))));
                var_16 = ((/* implicit */unsigned short) (-(((max((10U), (((/* implicit */unsigned int) arr_10 [i_0])))) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            }
        } 
    } 
}
