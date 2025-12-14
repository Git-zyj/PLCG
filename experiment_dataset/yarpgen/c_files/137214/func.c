/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137214
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
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = max((arr_1 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)14])) ? (((/* implicit */unsigned int) var_8)) : (arr_13 [16U] [i_4 + 1] [i_4] [i_4] [i_4 + 1] [16U])))) ? (max((((var_0) ^ (arr_10 [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2] [12U]))), (((/* implicit */unsigned int) (+(var_10)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [18] [i_2])) ? (var_16) : (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) arr_6 [i_4 + 1] [10U])) : (((/* implicit */int) ((signed char) var_5))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_4 - 1])))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_7 [i_4 + 1] [i_2 - 1] [i_1] [i_0])))))));
                            var_22 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */int) arr_4 [i_0] [(signed char)12])), (max((((/* implicit */int) (signed char)14)), (arr_9 [i_0] [i_1] [i_2] [i_3] [i_2]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((((/* implicit */_Bool) var_13)) ? (max((max((841730876U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((arr_8 [i_0]) <= (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)30))))));
            var_24 += ((/* implicit */signed char) var_3);
            arr_14 [i_0] [(signed char)0] |= ((/* implicit */signed char) (+(arr_2 [i_1] [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2554091703U)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (arr_9 [i_0] [i_5] [i_0] [i_0] [i_5]))))));
            var_26 = ((signed char) var_3);
            var_27 = arr_17 [i_0] [i_0];
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((arr_17 [(signed char)2] [(signed char)2]) - (156737159U))))))));
        }
        arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 268369920U)) ? (((/* implicit */int) (signed char)127)) : (-255369154)));
    }
}
