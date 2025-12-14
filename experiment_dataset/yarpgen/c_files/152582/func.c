/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152582
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_10)) : (var_4))), (((/* implicit */unsigned int) (_Bool)1))))) && (((/* implicit */_Bool) (short)-1))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)32765)), (5532164152189264065LL)))) + (((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) : (33554431ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154)))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (((((~(2290413723343236626LL))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)46836))))))) | (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)106)) & (var_15))))))));
                            var_19 = ((/* implicit */unsigned long long int) (unsigned short)62715);
                            arr_14 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 8589934591LL))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (max((var_9), (var_1))));
                            arr_15 [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27691)) * (((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL)))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (max((((/* implicit */int) (_Bool)1)), (var_10)))))) - (min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (0ULL)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_1] [10ULL] [i_1] = ((/* implicit */short) (unsigned char)20);
                            arr_20 [i_0] [i_0] [16ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) - (5ULL)));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 21; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_10)) : (var_8)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_22 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)30126)));
                            arr_24 [12LL] [4U] [4U] [i_1] [i_6 + 1] [i_6 - 3] &= ((((/* implicit */int) var_3)) + (((/* implicit */int) var_12)));
                            arr_25 [i_1] [i_2] [i_2] [i_3] [i_0] [i_1] [i_6] = ((/* implicit */long long int) ((short) var_7));
                        }
                    }
                    arr_26 [i_0] [17LL] [i_0] [i_2] = ((/* implicit */unsigned short) max((max(((unsigned char)33), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_14))))))))));
                    arr_27 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_4) % (((/* implicit */unsigned int) var_16))))), (((var_8) + (((/* implicit */long long int) ((/* implicit */int) (short)-24329)))))));
                    var_23 = ((/* implicit */int) (!(var_13)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)10))));
}
