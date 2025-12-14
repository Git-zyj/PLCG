/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140562
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = max((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 33550336U))) < (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_2))))))), ((-(((((/* implicit */_Bool) arr_8 [i_2])) ? (4261416978U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    var_10 = ((/* implicit */unsigned short) ((((4070418338U) * (1122241156U))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_13 [i_3] [i_0] [i_3] [i_1] [i_0] = ((((arr_0 [i_0] [i_0]) >> (((((unsigned int) arr_6 [i_3] [i_0])) - (633903448U))))) | (arr_0 [i_0] [i_1 + 1]));
                        var_11 = ((((var_0) + (arr_3 [i_2 - 1] [i_1 - 3]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))));
                        var_12 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) arr_3 [(signed char)7] [i_1])));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [(unsigned short)6] [i_3]);
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_4);
    var_14 = ((unsigned int) var_2);
}
