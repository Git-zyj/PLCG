/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105038
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
    var_18 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((-1513703293), (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) arr_0 [i_0])))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min(((-(((/* implicit */int) arr_5 [i_0 + 2] [(unsigned char)8])))), (((((/* implicit */_Bool) arr_4 [6LL])) ? (((/* implicit */int) arr_1 [4LL])) : (943281286))))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_1 [18LL]))));
            }
        } 
    } 
    var_21 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) / (var_16))))) >> (((max((((/* implicit */long long int) var_0)), (min((var_4), (((/* implicit */long long int) var_6)))))) - (5907LL))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned long long int) ((max((arr_9 [i_3 + 2] [i_3] [i_3 + 3]), (arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 3]))) > (((((arr_9 [i_3 - 1] [i_3] [i_3 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) var_14))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_1 [(unsigned char)16])))) < (var_17))))) > (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_12 [i_3] [0LL] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)6]))) : (4859158406702693862LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [18LL])) : (((/* implicit */int) var_0)))))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((~(max((1513703293), (((/* implicit */int) var_11)))))) ^ ((~(((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
