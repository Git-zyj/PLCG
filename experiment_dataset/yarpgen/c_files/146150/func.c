/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146150
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
    var_14 = ((/* implicit */_Bool) max((((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_3)) - (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]))))));
                        var_17 |= ((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (((((/* implicit */int) var_4)) >> ((((+(((/* implicit */int) arr_0 [i_1])))) + (137)))))));
                        var_18 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [i_2 + 2]))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) >= (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_1)))))));
                        var_20 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_2 [i_0 - 1] [i_0])))) >> ((+(((/* implicit */int) arr_2 [i_0 + 2] [i_0]))))));
                    }
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0] [i_0])), ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_8 [i_0 + 1] [i_2 + 2] [(signed char)3] [(signed char)3]), (arr_8 [i_0 + 2] [i_2 - 1] [i_2 + 2] [(signed char)5])))) * (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_8 [i_0 + 1] [i_2 - 1] [i_2] [i_2 + 1])))))));
                }
            } 
        } 
    } 
}
