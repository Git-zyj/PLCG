/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123785
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((int) 536870911U));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */int) var_2)) - (arr_3 [i_0] [i_0])))))));
            var_13 -= ((/* implicit */unsigned long long int) min((((arr_3 [i_0 - 1] [i_1 + 1]) | (arr_2 [i_1 - 1] [i_1 + 1] [i_0 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [19U])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                arr_7 [19LL] [i_1] [i_1] = ((/* implicit */int) var_8);
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_14 = var_2;
                    var_15 = ((/* implicit */int) (signed char)35);
                    var_16 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)21))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_3] [(short)20] [20] [i_3])) > (((/* implicit */int) var_6))))) : (((/* implicit */int) (signed char)21)))));
                }
            }
            arr_11 [i_1] [i_1 - 1] = ((/* implicit */short) ((((((((/* implicit */int) (signed char)21)) > (((/* implicit */int) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((short) arr_3 [(signed char)16] [i_0]))) : (((/* implicit */int) var_2)))) > (arr_3 [i_0] [0LL])));
            arr_12 [i_1] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((arr_3 [i_1] [i_0]) * (((/* implicit */int) var_2)))))));
        }
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [10U] [i_0 + 2]))) : ((-(var_10)))))) ? (max((arr_0 [i_0 + 4]), (arr_0 [i_0 + 4]))) : (((/* implicit */unsigned int) var_4))));
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 860250672U))))) ^ (((/* implicit */int) ((_Bool) var_9)))))) ? ((((+(((/* implicit */int) var_9)))) & ((+(var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3117787062U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5)))) ? (((/* implicit */int) max((var_3), (var_3)))) : (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_5)))))))));
}
