/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134237
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
    var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_11)))))) : (var_6)))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((signed char) max((((((/* implicit */int) var_4)) - (((/* implicit */int) var_1)))), (((/* implicit */int) var_11))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(arr_1 [i_0] [i_0]))))));
        var_19 ^= arr_0 [i_0];
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_7 [i_1] [(signed char)3] = ((/* implicit */signed char) (!(((((/* implicit */int) var_13)) < (((/* implicit */int) var_15))))));
            var_20 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_9)))) >= (((/* implicit */int) ((unsigned char) var_8)))));
        }
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                arr_13 [i_0] [i_0] [(unsigned char)7] [i_2] = ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_12 [i_0] [i_0] [i_3 + 1]))));
                var_21 *= ((/* implicit */signed char) var_3);
                var_22 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_4 [i_0] [(signed char)4])) * (((/* implicit */int) var_15)))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (unsigned char)248))));
            }
            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                /* LoopSeq 4 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (unsigned char)250)))))));
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) && ((!(((/* implicit */_Bool) arr_11 [(short)12] [i_0]))))));
                }
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    var_26 &= ((/* implicit */signed char) ((short) arr_16 [i_6 + 2] [i_6 + 2] [(unsigned char)4] [i_6] [i_6] [i_6]));
                    var_27 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_6 - 1] [i_0] [i_0] [i_6 + 1]))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_0] [i_6 - 1] [i_4] [i_6 + 2] [(unsigned char)12]))) : (var_14))))));
                    var_29 = ((/* implicit */signed char) 1046921800132282285LL);
                    arr_20 [i_2] [i_2] = ((((/* implicit */_Bool) 8401410899556469593LL)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (signed char)-82)));
                }
                for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) (short)-12750);
                    arr_23 [i_0] [i_2] [i_4] [(unsigned char)10] [12] [(short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_2] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_14 [i_2] [i_7 + 2] [i_7 - 1])) : (((/* implicit */int) arr_14 [i_2] [i_7 - 1] [i_7 + 1]))));
                    var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [(unsigned char)7])) % (((/* implicit */int) (unsigned char)248)))));
                }
                for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    var_32 -= (((-(9223372036854775807LL))) % (((/* implicit */long long int) ((/* implicit */int) (short)-29214))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_0))))) ? (((((/* implicit */int) (signed char)119)) - (((/* implicit */int) (unsigned char)133)))) : (((/* implicit */int) var_10))));
                    var_34 = ((/* implicit */signed char) min((var_34), (((signed char) ((unsigned char) var_11)))));
                }
                var_35 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)117)) - (((/* implicit */int) (signed char)-104))));
                var_36 = ((/* implicit */signed char) var_6);
                arr_26 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)49))));
            }
            arr_27 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)57))));
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 11; i_9 += 2) 
    {
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_24 [i_9] [i_9] [(signed char)14] [(signed char)0]))));
        var_38 = ((/* implicit */unsigned char) ((signed char) arr_0 [i_9]));
    }
}
