/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17800
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (short)6016))) | ((-(((/* implicit */int) (unsigned short)2704))))))), (((long long int) 2147483647))));
    var_19 = ((/* implicit */short) var_10);
    var_20 = ((/* implicit */int) max(((~(var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                            {
                                var_21 += ((/* implicit */short) ((unsigned short) (_Bool)1));
                                var_22 = (i_4 % 2 == 0) ? (((/* implicit */unsigned short) ((((max((((var_4) | (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_3]) : (((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 4])))))) + (2147483647))) << (((((/* implicit */int) min((arr_13 [i_0 + 4] [i_1 + 1] [i_4] [i_4] [i_4 + 1] [i_0 + 4]), (arr_13 [i_0 + 3] [i_1 - 3] [i_4] [i_4] [i_4 + 1] [i_1 - 3])))) - (30401)))))) : (((/* implicit */unsigned short) ((((max((((var_4) | (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_3]) : (((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 4])))))) + (2147483647))) << (((((((/* implicit */int) min((arr_13 [i_0 + 4] [i_1 + 1] [i_4] [i_4] [i_4 + 1] [i_0 + 4]), (arr_13 [i_0 + 3] [i_1 - 3] [i_4] [i_4] [i_4 + 1] [i_1 - 3])))) - (30401))) - (4789))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned long long int) (!((!(var_12)))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (short)4082))));
                                var_25 = ((((/* implicit */_Bool) min((max((arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_5 + 1] [i_1]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2] [i_0])))), (((/* implicit */long long int) (~(-2147483632))))))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_5]))) ? (((/* implicit */int) arr_15 [i_0 + 3] [i_1 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])) : (((((/* implicit */_Bool) -1571594582)) ? (((/* implicit */int) arr_1 [i_0] [i_3])) : (var_4)))))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(16777367563319719396ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)2717)) : (((/* implicit */int) (short)-3159)))))))) ? (((/* implicit */unsigned int) ((arr_16 [i_1 + 1] [i_0] [i_2] [i_1 - 3] [i_0]) & (((/* implicit */int) arr_9 [(unsigned char)11] [i_1] [i_2] [i_1 - 1] [i_5 - 1]))))) : (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_0] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62888))) : (min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (var_2)))))));
                            }
                            for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
                            {
                                var_27 = ((/* implicit */_Bool) min((((int) arr_18 [i_0] [i_1] [i_0 + 1] [i_3])), (((/* implicit */int) (unsigned short)47501))));
                                var_28 = ((/* implicit */long long int) var_13);
                                var_29 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_6] [i_1] [i_2] [i_0 + 4])) ? (arr_11 [i_0 + 3] [i_1] [i_0 + 3] [i_0 + 1] [i_0 + 3]) : (arr_11 [i_0] [(unsigned char)3] [(unsigned char)3] [i_0 - 1] [i_6]))));
                                var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (var_1)));
                                var_31 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62819))) + (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_1 [i_3] [i_3]))))) ? (min((var_14), (((/* implicit */unsigned int) (signed char)48)))) : (((/* implicit */unsigned int) var_13))))));
                            }
                            var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_15))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)41649)))))))) ? ((((~(var_2))) << (((/* implicit */int) ((short) var_10))))) : (var_15)));
                        }
                    } 
                } 
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 3])) ? (((761364030) / (var_13))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0 + 3])))));
            }
        } 
    } 
}
