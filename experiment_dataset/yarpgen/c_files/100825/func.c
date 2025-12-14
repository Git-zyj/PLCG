/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100825
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
    var_12 -= var_5;
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2739759957U))), (((/* implicit */unsigned int) ((arr_0 [i_0 + 1]) ^ (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (-2089275495) : (arr_0 [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
        var_15 = ((/* implicit */int) (~(((((/* implicit */unsigned int) (~(arr_1 [i_0 - 1])))) ^ (((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2450121862U)))))));
        var_16 = ((((/* implicit */int) (signed char)123)) % (arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3927378839U)) ? ((-2147483647 - 1)) : (arr_2 [i_1 + 1])));
        arr_5 [i_1 - 1] = arr_3 [i_1];
        var_18 = ((/* implicit */signed char) arr_2 [i_1]);
    }
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) (-2147483647 - 1));
        /* LoopSeq 2 */
        for (signed char i_3 = 4; i_3 < 8; i_3 += 1) 
        {
            arr_13 [i_3 - 1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3 - 3] [i_3 - 2])) || (((/* implicit */_Bool) var_9))))));
            arr_14 [i_2] [i_3 - 3] [i_2] = ((/* implicit */signed char) 2089275494);
            var_19 = arr_8 [i_3];
            var_20 = (((~(((/* implicit */int) arr_4 [i_3 - 3])))) + (((/* implicit */int) var_9)));
        }
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_23 [i_4] [2] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned int) var_9);
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_21 = (~(arr_1 [i_6]));
                        var_22 = ((/* implicit */signed char) (~(arr_15 [i_2] [i_4])));
                    }
                    var_23 += ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_2] [i_2] [i_4]) + (2147483641))))));
                }
                var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_5]))));
                var_25 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_0))))));
            }
            var_26 = ((/* implicit */int) arr_19 [i_2] [i_2] [4U]);
        }
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_1))));
    }
}
