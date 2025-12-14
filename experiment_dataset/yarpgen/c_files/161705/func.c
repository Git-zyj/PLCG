/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161705
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
    var_18 *= ((/* implicit */unsigned short) var_16);
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) (-((-(((int) var_4))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) (((-(arr_3 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1]))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -909261935)) ? (arr_3 [i_0]) : (arr_3 [i_0])));
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_3 - 1] = (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_0] [i_0] [i_0])) : (var_0))));
                        var_23 = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))) - (((((/* implicit */_Bool) 4294967295U)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))));
                    }
                } 
            } 
            arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) 4294967295U);
            var_24 *= ((/* implicit */signed char) ((27U) / (4294967290U)));
        }
        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) /* same iter space */
        {
            var_25 = min((((unsigned int) arr_15 [i_4 + 1] [i_4 - 1])), (((((/* implicit */_Bool) ((arr_3 [i_0]) * (((/* implicit */unsigned long long int) arr_6 [i_0]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_10))) : (((((/* implicit */_Bool) 2U)) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))))))));
            var_26 = ((/* implicit */signed char) var_2);
            arr_16 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4 + 1] [i_0])) | (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_4 - 1] [i_0]), (arr_4 [i_4 - 1] [i_0]))))) : (((long long int) var_5)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
            {
                var_27 = ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_5]);
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_15 [i_5 + 1] [i_4])));
                var_29 *= ((/* implicit */signed char) 9223372036854775807LL);
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((arr_20 [i_5 - 2] [i_4 + 1] [i_5] [i_4]) ^ (arr_20 [i_5 - 1] [i_4 + 1] [i_5] [i_4]))))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25))))) ? (arr_11 [i_5 + 1] [i_0] [i_5 + 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 + 1])))));
                            arr_29 [i_0] [i_6] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (4294967293U) : (6U))) << ((-(-2)))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */short) (-(((((long long int) arr_23 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~((+((+(4294967274U))))))))));
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [10LL] [8LL])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32748)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (var_10) : (((/* implicit */unsigned int) arr_22 [(unsigned char)6] [i_8] [i_8] [i_8])))) : (0U)));
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_8), (8682257608105036543LL)))) ? (((unsigned int) var_10)) : (((unsigned int) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8])))))))));
    }
}
