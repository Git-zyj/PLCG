/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112
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
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2263086586U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) 2263086567U)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((var_11) >= (var_11))) ? (((/* implicit */int) arr_5 [7U] [i_1])) : (((/* implicit */int) var_9))))));
                var_14 = ((/* implicit */int) var_12);
                arr_7 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))))) ? (((arr_4 [19]) % (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) var_12)));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_14 [i_3] = ((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3 - 2] [i_0]))))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1))));
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10)))))) : ((((!(arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                            var_15 *= ((((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_1] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 3] [i_2 - 1])))) & (((((/* implicit */_Bool) arr_8 [i_3 - 3] [i_3 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 2] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_3 - 3] [i_3 - 2] [i_2 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) : (var_5))) : (var_8)));
}
