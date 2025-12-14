/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176860
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = min(((signed char)98), ((signed char)-99));
                /* LoopSeq 3 */
                for (int i_2 = 4; i_2 < 13; i_2 += 4) 
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_2 [i_0 + 1])))) ? (((/* implicit */int) min((min((var_0), (((/* implicit */signed char) var_8)))), ((signed char)-98)))) : (((arr_1 [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min((arr_5 [i_2] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_0]))))))));
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((((((/* implicit */_Bool) (signed char)98)) && ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) (signed char)127))))) : (((/* implicit */int) (_Bool)0))))));
                }
                for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) | (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-60)), (arr_5 [i_0] [i_1] [i_3]))))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_1])), (var_0)))) : (((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                arr_16 [i_5] [i_4] [i_0] [i_1] [i_0] = ((unsigned short) max((((/* implicit */int) var_4)), (var_7)));
                                arr_17 [i_0] [i_1] [i_0] [i_4 + 4] [i_5] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_3] [i_0] [i_5])) : (((int) arr_15 [i_0 + 1] [i_0]))));
                                arr_18 [i_0] = ((/* implicit */_Bool) min(((~(((((/* implicit */int) var_9)) * (((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0 + 2] [i_0] [i_4 - 1] [i_0])) > (((/* implicit */int) var_6)))))));
                                var_13 -= ((/* implicit */signed char) min((((/* implicit */int) min((arr_14 [i_0] [i_1] [i_3] [i_5] [i_5]), (var_8)))), (min((((/* implicit */int) (_Bool)1)), (arr_4 [i_4 + 2] [i_5] [i_4])))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1 + 1]));
                    var_14 = arr_7 [i_0];
                }
                for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    arr_24 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((arr_9 [i_0] [i_1 - 1] [i_0]) ? (var_7) : (((/* implicit */int) arr_8 [i_0] [i_6])))), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) var_4))))));
                    arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_1]))));
                }
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) var_1)) : (-418798974))) > (((/* implicit */int) (signed char)124))))), (-418798974))))));
                arr_26 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) var_7));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */_Bool) min(((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)36129)))))), (((/* implicit */int) var_3))));
}
