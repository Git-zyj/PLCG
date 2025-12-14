/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177796
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
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((var_5), (var_0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_0), (var_11)))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((signed char) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_1 [(signed char)3])))));
                    var_14 = arr_4 [i_0];
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (!(((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_2))))) <= (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) <= (((/* implicit */int) var_1)))))))));
                                var_16 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_0 [i_0])))) <= ((-(((/* implicit */int) arr_8 [i_0]))))));
                                var_17 += max((var_7), (var_11));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_3] [i_2 - 2] [i_2 + 1] [i_0]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_0])) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_15 [i_3] [(signed char)6] [i_3] [i_3] [i_2 - 2] [i_2 + 1] [i_2 + 1])) << (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) var_8))) : ((~(((/* implicit */int) var_6))))))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_26 [i_5] [i_5] [i_6] [i_7 - 2] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_7 + 2] [i_6] [i_5])))) : ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) arr_4 [(signed char)3])) ? (((/* implicit */int) arr_4 [i_7 - 2])) : (((/* implicit */int) arr_18 [i_7 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5] [i_6] [(signed char)4] [(signed char)13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_25 [i_8] [(signed char)8] [i_5] [i_5]))))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((signed char) var_7))) <= (((/* implicit */int) var_2))))) >= (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_5])))) | (((/* implicit */int) var_1))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (min(((signed char)(-127 - 1)), ((signed char)91)))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_7 + 1] [i_7] [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1])) != ((~(((/* implicit */int) var_10))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] [i_9] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_14 [i_9] [i_9] [(signed char)8] [i_9] [i_9]), (var_1)))), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) << (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) max((min((var_3), (var_9))), (max((var_5), (var_2)))))) - (((/* implicit */int) max((max((arr_4 [i_9]), (var_8))), (var_7)))))))));
    }
    var_24 = var_2;
    var_25 |= var_2;
}
