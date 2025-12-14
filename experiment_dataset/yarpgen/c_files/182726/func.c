/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182726
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
    var_12 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((var_2) + (2147483647))) >> (((((/* implicit */int) (short)25437)) - (25436)))))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */long long int) var_3)) / (-8909310565649215359LL))))) > (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 += ((var_11) || (((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) / (((/* implicit */int) var_5))))))));
                var_14 = ((/* implicit */long long int) ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) >> (min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) <= (((/* implicit */int) (short)25422)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((3410041966176444274ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [4LL])))))) - (((/* implicit */int) arr_3 [i_0] [i_0]))));
                var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) var_5))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_12 [i_2])))) ? (arr_12 [i_0]) : (((((/* implicit */_Bool) (short)-25437)) ? (arr_12 [i_2]) : (arr_12 [i_0])))));
                            arr_13 [18LL] [i_2] [6LL] [i_0] = ((/* implicit */unsigned short) ((var_10) << (((((/* implicit */_Bool) (-(3343970521918116338LL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_1 [i_0] [i_1])))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                            var_17 &= ((/* implicit */short) arr_1 [i_0] [i_1]);
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (short)25453);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((unsigned int) (short)25449)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_3] [(signed char)20] [i_1] [i_0])))));
                                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_1] [i_4])) ? (((/* implicit */long long int) var_8)) : (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                                arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_11))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_4);
}
