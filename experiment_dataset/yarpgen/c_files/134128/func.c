/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134128
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_1 + 2]);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (~(max(((-(-6121455234787686238LL))), (((/* implicit */long long int) (short)32344))))));
                                arr_12 [i_2] [19LL] [(short)1] [(short)1] [(short)1] [(short)1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((max((493080802), (((/* implicit */int) arr_2 [i_0 - 3] [i_2])))) <= ((+(var_0))))))));
                                var_17 -= ((/* implicit */short) ((((int) max((((/* implicit */unsigned int) 0)), (var_1)))) >= ((-(((/* implicit */int) ((-3233327011626985112LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))))))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((long long int) arr_10 [i_0 - 2] [i_1 + 2] [i_2] [i_2] [i_4]))))) ? (var_7) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) arr_6 [i_0 - 1] [i_0]))))), (max((-3233327011626985117LL), (((/* implicit */long long int) arr_6 [i_3] [i_4 - 2]))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 ^= ((/* implicit */long long int) ((((4U) - (((/* implicit */unsigned int) (-2147483647 - 1))))) >> (((max((((((/* implicit */_Bool) -3271100885083768176LL)) ? (var_10) : (((/* implicit */unsigned long long int) -652278292)))), (((/* implicit */unsigned long long int) (~(var_14)))))) - (16131180078300918676ULL)))));
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1266806673)))) - (var_7)));
    var_21 += ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (var_2)))) ^ (((unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (((((/* implicit */long long int) ((/* implicit */int) var_15))) - (var_14))))))));
    var_22 = ((/* implicit */unsigned int) var_11);
}
