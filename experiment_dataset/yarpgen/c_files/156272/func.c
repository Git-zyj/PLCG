/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156272
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    arr_11 [i_2] [i_1] [(signed char)7] [i_2] = (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])));
                    arr_12 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0 + 1]) : (var_3))), ((~(((/* implicit */int) arr_5 [i_0 + 1] [i_2 - 1] [i_2 + 1]))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2 + 2] [i_1] [i_0 + 1]))))) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) var_12))))));
                    arr_13 [i_0 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_0 + 1] [i_2] [i_2 - 3] [i_2 + 1]), (arr_7 [i_0 - 1] [i_2] [i_2 - 3] [i_2 + 1])))) && (((/* implicit */_Bool) max((648213150), (arr_7 [i_0 - 1] [i_2] [i_2 - 3] [i_2 + 2]))))));
                }
                var_15 = min((((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 1])) ? (arr_9 [i_0] [i_0 + 1] [i_0 - 1]) : (arr_9 [(_Bool)1] [i_0 + 1] [i_0 + 1]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_1] [i_0 - 1])))));
                arr_14 [i_1] [i_0 - 1] [(unsigned char)1] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 - 1]);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_0);
    var_17 &= ((/* implicit */int) ((min((((((/* implicit */_Bool) 331707656)) ? (-648213151) : (((/* implicit */int) (unsigned char)246)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (648213173))))) < (((((/* implicit */int) var_12)) << (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_13)))))))));
    var_18 = ((int) var_3);
    var_19 ^= ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11))))), (var_8))) : (var_8));
}
