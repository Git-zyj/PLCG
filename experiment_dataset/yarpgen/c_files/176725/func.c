/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176725
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-66)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_1] [(signed char)16] [i_4] [i_4] = var_16;
                                var_19 = (signed char)107;
                                var_20 *= arr_12 [(signed char)6] [(signed char)6] [i_2] [i_1] [i_4] [(signed char)6];
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)88)) - (((/* implicit */int) arr_3 [i_2 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)4)) > (((/* implicit */int) (signed char)64))))) : (((/* implicit */int) ((signed char) var_7))))) == ((~(((/* implicit */int) min((arr_2 [i_1]), (arr_5 [i_4])))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((((((/* implicit */int) max((var_4), (arr_5 [i_2])))) + (((/* implicit */int) max(((signed char)7), ((signed char)-101)))))), (max((((((/* implicit */int) (signed char)-3)) - (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((signed char) var_14)))))));
                }
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_26 [i_7] [(signed char)14] [(signed char)16] [i_7] = ((signed char) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_6 [i_5] [i_1] [i_5] [i_6])) : (((/* implicit */int) (signed char)17))));
                                arr_27 [i_0] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) max(((signed char)38), ((signed char)-2))))));
                                arr_28 [i_0] [i_7] [i_0] [(signed char)11] = min(((signed char)-17), ((signed char)26));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (signed char)-27)))) && (((/* implicit */_Bool) (signed char)17)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)2))))))) : (max((((((/* implicit */int) (signed char)91)) >> (((((/* implicit */int) var_1)) + (81))))), (((/* implicit */int) var_11))))));
            }
        } 
    } 
}
