/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164904
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */long long int) ((arr_5 [i_1] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18237)) ? (((/* implicit */int) (short)-18253)) : (((/* implicit */int) arr_8 [i_1])))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 1; i_4 < 24; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [9] [i_1] [i_3] [i_4 + 1] = ((/* implicit */unsigned short) (short)-18255);
                            var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [(unsigned short)0] [(unsigned short)20] [i_4 + 1] [i_2] [(unsigned short)0])) ? (((/* implicit */int) var_6)) : (arr_11 [7ULL] [i_1] [i_4 + 1] [i_3] [i_4] [i_1])));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) (short)18249)) : (arr_11 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_4]))))));
                        }
                        for (short i_5 = 1; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_1] [(unsigned short)17] [i_2] [i_3] [i_5 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1] [i_5 + 1]))));
                            arr_20 [i_1] [i_1] = (short)18244;
                        }
                        for (short i_6 = 1; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 224LL)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_2] [i_3] [i_2]))) * (arr_3 [i_0] [i_1] [i_3]))))));
                            arr_23 [i_1] [i_1] [i_2] [i_2] [i_6 - 1] [i_1] = ((/* implicit */unsigned short) (~(arr_7 [i_0] [i_0] [i_6 - 1])));
                        }
                        for (short i_7 = 1; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_2] [i_1] [i_7 + 1] [i_0])) || (((/* implicit */_Bool) 17293822569102704640ULL))));
                            var_16 += ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_7 - 1] [i_7 + 1] [i_7] [(unsigned short)10] [i_7] [i_7 + 1] [i_7 + 1]))));
                            var_17 += ((3783075374U) + (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-18238))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        }
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-25285)) ? (((/* implicit */int) arr_2 [i_2])) : ((~(((/* implicit */int) (short)18237))))));
                }
                for (short i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-18228)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8] [i_8])) > (((/* implicit */int) (short)18227)))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_8] [i_1])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_8] [i_8])) : (((/* implicit */int) min(((unsigned short)34016), (((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_8] [i_8])))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 12266688385889989734ULL))));
                }
                for (short i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                {
                    arr_32 [i_1] [i_1] [i_9] = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_9] [i_9] [i_9] [i_9]);
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1351598626)) ? (((/* implicit */int) arr_27 [6ULL] [i_9] [i_1] [6ULL] [i_0] [i_9])) : ((-(((/* implicit */int) (short)22431))))))) ? ((-((~(((/* implicit */int) (unsigned char)98)))))) : (((/* implicit */int) arr_31 [i_9] [i_9] [i_9])))))));
                }
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [9LL] [i_1])) ? ((-(arr_7 [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1])), (arr_7 [i_0] [i_1] [i_1])))));
                var_25 = ((/* implicit */unsigned char) arr_24 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1]);
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22443))) / (var_0)));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) (short)25284)) & (((/* implicit */int) (unsigned short)34007)))))));
    var_28 *= ((/* implicit */unsigned long long int) var_1);
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-18245)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) & (((((/* implicit */int) min(((short)25284), ((short)-18236)))) + (((/* implicit */int) var_3)))))))));
}
