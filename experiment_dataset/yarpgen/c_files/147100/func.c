/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147100
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
    var_12 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((268435455LL), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_7)))))), (max((((/* implicit */unsigned long long int) var_3)), (((var_6) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1LL))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                    var_15 = ((/* implicit */long long int) ((int) (+(min((((/* implicit */long long int) var_10)), (var_7))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(short)10] [i_3] = ((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [13LL] [i_1] [i_1]))));
                                var_16 = ((/* implicit */unsigned short) var_10);
                                var_17 = ((/* implicit */unsigned int) -1LL);
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) (short)-31620)) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53650))))))))) ? ((~(0LL))) : (var_5)));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2])), (0LL))))))));
                }
            } 
        } 
    } 
    var_20 = ((unsigned long long int) -29LL);
}
