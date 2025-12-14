/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166088
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_15))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) var_9);
                        arr_8 [i_3] [i_2] [i_2] [10LL] [i_2] [10LL] = ((/* implicit */unsigned char) ((min((arr_4 [i_2] [(unsigned char)19]), (arr_4 [i_2] [i_1]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2] [(unsigned char)11]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 23; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 3; i_5 < 23; i_5 += 1) 
            {
                arr_13 [i_4] |= arr_10 [i_5 - 2] [i_4 + 1] [i_4 + 1];
                var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_4] [i_5 - 2] [i_4] [i_5])))))) ? (((/* implicit */int) arr_10 [i_5 + 1] [i_5 - 3] [i_5 - 3])) : ((~(((/* implicit */int) (short)28261))))))));
                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) arr_6 [i_4] [i_0] [(unsigned char)12] [i_0] [i_0])))), ((+(((/* implicit */int) (short)28261))))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_4 - 2] [i_4 - 2] [i_5 + 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (arr_0 [i_5 - 2] [i_5 + 1])))));
            }
            /* LoopSeq 3 */
            for (short i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_6] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_6 - 1] [(unsigned char)20])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (min((((/* implicit */long long int) (unsigned char)9)), (arr_4 [i_0] [i_4 - 2])))));
                var_23 = ((/* implicit */signed char) arr_14 [i_0] [i_4 + 1] [(signed char)9]);
            }
            for (short i_7 = 2; i_7 < 23; i_7 += 4) /* same iter space */
            {
                var_24 = var_9;
                arr_18 [i_0] [i_4] [(signed char)18] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))));
                var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) -5913881987751241862LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (281406257233920LL)))));
            }
            for (unsigned char i_8 = 4; i_8 < 21; i_8 += 4) 
            {
                var_26 = var_8;
                var_27 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_17 [i_8 + 3])) ? (((/* implicit */int) arr_17 [i_8 + 3])) : (((/* implicit */int) var_16)))), (((/* implicit */int) min((arr_17 [i_8 + 1]), (arr_17 [i_8 + 3]))))));
            }
            arr_21 [i_0] [i_4 + 1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 2]))))) ? (((/* implicit */int) min((var_10), (((/* implicit */short) var_14))))) : ((~(((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2]))))));
        }
    }
    var_28 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (var_6))), (((/* implicit */long long int) var_8))));
    var_29 = ((/* implicit */long long int) min((var_29), ((~(min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (short)-28262)) : (((/* implicit */int) (signed char)127))))), (var_13)))))));
}
