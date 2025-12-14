/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168110
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
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((var_4) >> (((var_6) - (3194011610005133661LL))))))));
    var_14 = ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_11))))) ? ((-(var_4))) : (((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_0))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    var_17 ^= ((/* implicit */unsigned long long int) 4294967295U);
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned long long int) -2052192171)) : (arr_9 [(unsigned char)12] [i_1] [i_2] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((unsigned int) var_10)))))) ? ((~(((((/* implicit */int) var_9)) + (((/* implicit */int) arr_5 [i_4])))))) : (((/* implicit */int) ((_Bool) ((_Bool) var_7))))));
                            var_19 = ((/* implicit */unsigned short) (-(arr_10 [i_0] [i_1] [i_4] [i_0] [i_4])));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 4019377313U))))))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 2) 
                        {
                            arr_15 [i_0] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_3)))))), (var_12)));
                            var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned char) (unsigned short)32))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14280))))) || ((!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [(unsigned short)0] [i_2] [(unsigned char)7] [i_1] [i_0]))) / (var_7)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_18 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) ((arr_9 [i_0] [(short)0] [i_0] [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((arr_17 [i_2] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))));
                            arr_19 [i_6] [i_0] [i_0] [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */_Bool) ((long long int) ((unsigned short) arr_0 [i_0] [i_0])));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [13LL] [13LL])))))) ? (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) | (arr_11 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1] [i_0])), (var_0))))) : ((~(var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_0 - 1] [i_1] [i_0] [0LL])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 30720)) ? (((/* implicit */int) var_11)) : (arr_3 [i_2])))) : (((unsigned int) var_1)))))));
                    }
                    var_22 = ((/* implicit */unsigned int) arr_3 [i_0]);
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_12))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_7] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_9)))));
                    var_24 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [(short)12])) || (((/* implicit */_Bool) var_6)))))));
                    arr_24 [i_0] [i_0] [i_7] = ((/* implicit */short) arr_1 [i_1] [i_0]);
                    var_25 = ((/* implicit */unsigned short) arr_6 [i_0]);
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    arr_27 [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0] [(unsigned short)0] [(unsigned short)0] [i_8] [i_0 - 1]) : (((/* implicit */long long int) 4294967290U))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_8]))))) : (((unsigned int) var_0))));
                    arr_28 [i_8] [i_8] [i_1] [i_8] &= ((/* implicit */short) var_12);
                    var_26 = ((/* implicit */short) 16777215);
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) arr_9 [i_0 - 1] [4LL] [i_8] [i_9] [i_0]);
                                arr_33 [i_9] [i_1] [i_9] [i_10] [i_0] = ((/* implicit */unsigned int) arr_25 [i_0] [i_0] [2LL]);
                                var_28 *= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                                var_29 = ((/* implicit */unsigned long long int) 0U);
                            }
                        } 
                    } 
                    arr_34 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12)))) ? (arr_32 [i_8] [(unsigned short)5] [i_8] [(unsigned short)5] [(short)13] [(short)13] [i_0 + 1]) : (((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1])))))));
                }
            }
        } 
    } 
}
