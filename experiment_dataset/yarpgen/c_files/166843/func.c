/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166843
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
    var_10 += ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)14346)))) | (((/* implicit */int) max((var_8), (((((/* implicit */_Bool) var_9)) || ((_Bool)1))))))));
    var_11 = min(((~(max((var_2), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) max((-5727033018636546436LL), (-5082601083085358964LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] = var_6;
                            var_12 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 2] [i_1] [i_3 - 2] [i_3 - 1] [(_Bool)1])))), (arr_8 [i_1])));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) != (((((/* implicit */_Bool) (unsigned short)60779)) ? (((/* implicit */int) arr_2 [i_1] [i_3 - 2] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3 - 2] [i_2] [i_2]))))));
                                arr_13 [(unsigned short)2] [i_1] [i_2] [i_3] [i_0] |= ((/* implicit */signed char) ((((arr_8 [i_0]) + (2147483647))) >> (((var_9) - (4020454299U)))));
                                var_14 *= ((/* implicit */signed char) var_2);
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_2] [i_3 - 2] [i_5] [i_5])), (arr_2 [i_0] [17ULL] [i_1])))) : (((/* implicit */int) arr_14 [5U] [i_3 - 2] [i_2] [(unsigned char)0])))), (((((arr_8 [i_1]) | (((/* implicit */int) var_4)))) | (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                                arr_16 [i_0] [(unsigned char)20] [i_2] [i_3] [16U] [i_1] [i_5] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) 1619562072356823950LL)))), (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((arr_12 [i_5] [i_3] [i_3 + 2] [i_2] [i_1] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_1] [i_1] [i_0]))))))));
                                arr_17 [i_0] [(unsigned short)16] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))))), ((-(((/* implicit */int) var_1))))));
                                arr_18 [i_0] [13ULL] [i_1] [i_3 - 1] [i_1] = ((/* implicit */int) (~(var_9)));
                            }
                            arr_19 [i_1] = ((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_3] [i_3]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((((((/* implicit */int) var_8)) + (((/* implicit */int) var_8)))) < (((/* implicit */int) var_4)))), (min((((_Bool) arr_5 [i_0] [i_0] [12ULL])), ((!(((/* implicit */_Bool) 8482286034751518277ULL)))))))))));
            }
        } 
    } 
}
