/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182235
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_1])) ? (arr_3 [i_0] [i_1] [i_3 - 1]) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))));
                            var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) - ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), ((-(((((/* implicit */int) var_4)) & (((/* implicit */int) var_2))))))));
                                arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? ((~(((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1])))) : (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) var_3))))))))));
                                arr_12 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_4] [i_4] [i_2] [i_4])) << ((((+(((/* implicit */int) var_6)))) - (145))))) / (((((/* implicit */_Bool) min((((/* implicit */short) var_0)), ((short)11663)))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) var_3))))));
                            }
                            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                            {
                                var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) var_6)))) << ((((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_5])))) + (47)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_5])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((unsigned long long int) arr_2 [i_5]))))));
                                var_13 -= ((/* implicit */int) var_2);
                                arr_15 [i_0] [i_5] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) > (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0]))))) : (((unsigned int) var_2))))));
                            }
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_3 - 1] [i_3 - 1] [i_3])) ? (611720963) : (((/* implicit */int) ((arr_5 [i_0] [i_1]) == (((/* implicit */unsigned long long int) var_7)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((((+(arr_4 [i_1] [i_1] [i_0]))) << (((min((var_1), (((/* implicit */unsigned int) (unsigned char)82)))) - (55U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_5))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    arr_19 [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (5454320233830243348ULL)))));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                }
                var_16 = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
    var_17 -= min(((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7))))) : (((int) var_4)))), (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_8)) : (-377844893))));
}
