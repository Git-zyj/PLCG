/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115398
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~((+(((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))) : (max((var_5), (var_5)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((max((var_3), (((/* implicit */unsigned long long int) min((-6553596563936150807LL), (((/* implicit */long long int) 4095))))))) > (((/* implicit */unsigned long long int) arr_0 [i_2 + 2])))))));
                        var_15 -= arr_2 [i_0 + 2];
                        arr_12 [i_0 + 2] [i_1 - 1] [i_2 - 2] [i_1 + 1] [i_2 + 2] = ((/* implicit */long long int) (short)3091);
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_15 [i_0 + 1] [i_1 + 2] [i_2 + 1] [i_4] = ((/* implicit */long long int) arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                        arr_16 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((-6553596563936150807LL), (var_5)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4]))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))) : (4564300311413845562ULL)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_21 [i_5] = ((/* implicit */unsigned short) ((var_2) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
                                arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) -8599415509020689698LL);
                            }
                        } 
                    } 
                    arr_23 [i_2 + 3] [i_1 + 1] = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((((_Bool) var_0)) ? (var_11) : ((~(var_4))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) != (((((/* implicit */_Bool) 6553596563936150806LL)) ? (var_3) : (((/* implicit */unsigned long long int) var_11))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)183))))))))));
    var_18 = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 6553596563936150806LL)) ? (((/* implicit */int) (unsigned short)58013)) : (((/* implicit */int) var_13))))))));
    var_19 -= ((/* implicit */unsigned int) var_10);
}
