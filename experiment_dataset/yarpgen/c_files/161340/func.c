/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161340
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
    var_12 = max((((/* implicit */long long int) ((min((((/* implicit */int) var_5)), (var_4))) / (((/* implicit */int) var_5))))), ((~(max((((/* implicit */long long int) var_9)), (var_3))))));
    var_13 = var_6;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) max((max((var_9), (var_9))), (var_5)))) < (max(((-(var_2))), (var_4)))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_5))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) | (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (~(max((var_2), (((/* implicit */int) var_5)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */long long int) var_5);
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((var_10) + (9223372036854775807LL))) << (((((var_11) + (8309281734672759LL))) - (40LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                arr_11 [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_5))));
                arr_12 [i_1] [i_1 - 1] [i_1 - 1] [3LL] = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) var_4)) < (var_11)))));
                arr_13 [i_0] [i_0] [i_0] = (+((-(var_7))));
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
            {
                var_17 = var_2;
                arr_18 [i_0] [1] [i_0] = ((/* implicit */long long int) (~(var_7)));
                var_18 = ((((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((2225734862466592962LL) / (-2225734862466592962LL))))) * (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_7)))))));
                var_19 &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                arr_19 [i_1 + 1] [i_3] = max((((/* implicit */long long int) ((max((((/* implicit */long long int) var_4)), (var_3))) == (((2864802409915637462LL) ^ (2225734862466592962LL)))))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11))))));
            }
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
            {
                arr_22 [i_0] [i_0] [6] [8U] = ((/* implicit */unsigned int) var_4);
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((-(max((((/* implicit */long long int) var_2)), (var_11))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (var_6)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_26 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((+(var_1)))));
                    arr_27 [i_0] [i_1 - 1] [0] [11] = ((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                }
                var_20 = (-(max((((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_6))), (((((/* implicit */long long int) var_7)) / (var_3))))));
            }
            /* vectorizable */
            for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                arr_31 [i_6] [i_6] [5LL] [1LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(var_0))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((~(var_4))) ^ ((~(((/* implicit */int) var_9)))))))));
                var_22 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (var_6));
            }
        }
        var_23 = ((/* implicit */long long int) max((var_23), (min((((/* implicit */long long int) var_5)), (max((max((((/* implicit */long long int) var_0)), (var_1))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_0)), (var_5))))))))));
    }
    var_24 |= min(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10))))), ((~(max((var_1), (((/* implicit */long long int) var_5)))))));
}
