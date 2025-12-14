/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123927
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_2] = var_2;
                            arr_12 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [7ULL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (arr_5 [i_0] [i_1] [i_3]))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) /* same iter space */
                            {
                                arr_15 [i_0] [i_3] |= ((/* implicit */unsigned long long int) var_8);
                                arr_16 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((var_2) < (((/* implicit */int) var_9))))), ((+(arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]))))) - (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) max((arr_9 [i_3] [i_2] [i_2] [i_4] [i_4] [i_1]), (((/* implicit */signed char) var_5))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_0))))))))));
                                arr_17 [i_0 + 1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (+(min((((/* implicit */int) (_Bool)1)), (469762048)))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_5 - 1] &= ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_8)), (arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2]))), (((/* implicit */int) arr_4 [i_5 - 1] [i_3] [i_2] [i_1]))));
                                arr_21 [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((-469762049), (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (arr_13 [i_0] [i_5] [i_2] [i_2] [i_2] [i_3] [i_3]) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_1)), (-469762049))))))));
                                var_13 = arr_0 [i_1];
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_14 += ((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_1] [i_1]));
                                arr_24 [i_6] [i_3] [i_3] [i_0] &= ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_3 [i_0 + 1] [i_2] [i_2])), (var_11))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_6)))))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (max((((/* implicit */unsigned int) (unsigned short)26332)), (arr_18 [i_6] [i_1] [i_1] [i_0 + 1])))));
                                var_16 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */int) var_7)), (((-231190040) ^ (((/* implicit */int) (unsigned short)26332)))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)238), (((/* implicit */unsigned char) var_1)))))))) < (((long long int) ((469762070) & (((/* implicit */int) arr_19 [i_0] [i_2] [i_2 - 2] [5ULL] [i_2])))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                arr_28 [i_0 + 1] [i_1] [i_2 - 1] [i_3] [i_2] = ((/* implicit */short) max((((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1] [i_2 - 1] [i_7]))), (arr_8 [i_0] [i_0 + 1] [i_2] [i_3] [i_7] [i_2])));
                                var_18 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned char)18)), (var_3))), (((/* implicit */unsigned long long int) ((signed char) var_8)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_7] [i_2] [i_0])) / (var_2))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                                arr_29 [i_0] [i_2] [i_3] [i_3] [i_7] = ((/* implicit */short) var_3);
                            }
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0])))) ? (var_3) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 - 1] [i_0 + 1]))))) ? (max((((/* implicit */int) (short)-17620)), (469762066))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned char)1] [i_3] [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_0 [i_0 + 1])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                            var_20 = min((((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_1))))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)204)))))), (((((/* implicit */_Bool) 4653483034582949618ULL)) ? (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0])) || (((/* implicit */_Bool) var_11))))), (var_3))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_12);
    var_23 = ((/* implicit */_Bool) min(((~((~(((/* implicit */int) var_9)))))), (((((/* implicit */int) ((unsigned short) var_2))) << (((/* implicit */int) var_1))))));
    var_24 = max((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) >> (((max((var_2), (((/* implicit */int) var_4)))) - (146))))), (((/* implicit */int) var_1)));
}
