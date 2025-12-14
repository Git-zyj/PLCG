/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123578
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
    var_17 = ((/* implicit */unsigned short) 4294967295U);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) var_3))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)55)) - (((/* implicit */int) (unsigned short)65535))))))) > (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (36028797018963712ULL)))));
                    arr_11 [i_0] [(unsigned short)24] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41717)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (0LL)))) >= ((+(var_8))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    arr_15 [i_0] [(unsigned short)3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 2] [i_3 + 1])) <= (((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 2] [i_3 - 1]))));
                    arr_16 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((arr_5 [i_3 - 1]) + (var_6)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                arr_21 [i_3 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) ^ (4294967295U)));
                                arr_22 [10ULL] [10ULL] [i_0] [(unsigned char)20] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) / (18410715276690587901ULL)));
                                arr_23 [i_0] [i_1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_1] [i_3]) & (0ULL)))) && (((/* implicit */_Bool) 36028797018963712ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_3] [i_0] = ((18446744073709551611ULL) & (((/* implicit */unsigned long long int) arr_17 [i_0] [i_3 - 1] [i_0] [i_6] [i_7] [i_1])));
                                arr_32 [i_0] [i_3 - 2] [i_7] [i_6] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (18446744073709551615ULL)));
                                arr_33 [i_3] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-9223372036854775807LL - 1LL))))) > (18446744073709551615ULL)));
                            }
                        } 
                    } 
                    arr_34 [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1]))));
                }
                arr_35 [(unsigned short)21] [i_0] = ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) max((var_6), (var_14)))))));
}
