/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119563
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
    var_12 &= ((/* implicit */unsigned long long int) ((unsigned int) var_6));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned short) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                            var_14 = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_2] [i_3] [i_3] [i_3 - 1] [i_4] [i_4]))));
                            arr_13 [i_0] [i_1] [i_2] [i_4] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_3])) & (((/* implicit */int) var_4))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_2);
                            arr_18 [i_5] [i_1] [i_2] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        }
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            var_15 *= ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0]);
                            var_16 += 10390486418786429084ULL;
                        }
                        arr_22 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) || (((/* implicit */_Bool) var_6)))))) : (((var_5) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_3] [i_1] [i_3 - 1])))))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((((/* implicit */int) arr_10 [i_0] [i_3] [i_2] [i_3] [i_2] [i_3] [i_1])) / (((/* implicit */int) var_8))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_7] [i_0] [i_0] |= ((/* implicit */unsigned int) ((arr_26 [i_7] [i_1] [i_1] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7 - 2] [i_7 + 2] [i_7] [i_7 - 2] [i_7])))));
                            var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_1));
                        }
                    }
                    arr_28 [i_0] [i_1] [22ULL] [i_1] |= ((/* implicit */long long int) (~((((-(((/* implicit */int) var_3)))) & (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_18 = ((unsigned int) var_1);
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(min((var_0), (((/* implicit */long long int) var_4))))))), (min((((/* implicit */unsigned long long int) var_11)), (var_2)))));
}
