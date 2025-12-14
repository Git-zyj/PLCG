/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169593
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
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */long long int) ((min((var_8), (((/* implicit */unsigned int) var_14)))) >> (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) : (3U)))))) : (0LL)));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_14))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) var_12))));
                var_20 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0])) >> (((((/* implicit */int) arr_5 [(signed char)0] [i_1] [(unsigned short)0] [i_1])) - (21441)))))))) & (3U)));
                            var_22 *= ((((/* implicit */_Bool) (~(max((arr_2 [i_0]), (0U)))))) ? ((+(((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2315573393U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_13)), (12ULL))) + (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (((/* implicit */int) (short)28455))))) ? (max((arr_7 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */long long int) (signed char)0)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (min((arr_3 [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_7)))))))));
                            arr_8 [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_2])));
                            arr_9 [i_0] [(unsigned short)2] [(signed char)4] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_2] [i_2])))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 968995999644050089LL)) ? (((/* implicit */int) (unsigned short)65499)) : (299139630)))), (9223372036854775807LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
