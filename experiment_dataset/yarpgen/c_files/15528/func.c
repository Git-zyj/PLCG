/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15528
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((unsigned char) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) - (35476)))))), (((/* implicit */unsigned char) (signed char)-18))));
                    arr_9 [i_0] [i_1] = ((signed char) max((((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2 + 1])), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [(signed char)6]))))));
                    arr_10 [(signed char)4] [(unsigned short)2] [i_1] [(signed char)6] = ((/* implicit */signed char) max((((/* implicit */int) var_5)), ((-(((((/* implicit */_Bool) arr_7 [i_2] [(unsigned short)8] [(signed char)12])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_5 [i_1]))))))));
                    arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((~(((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_2 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 2] [i_2 + 1])))))));
                }
            } 
        } 
        var_16 = min((((signed char) arr_5 [(unsigned short)12])), (arr_5 [(signed char)0]));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [(signed char)6] [i_0] [(unsigned char)2])) / (((/* implicit */int) (signed char)80))))) ? (((/* implicit */int) ((unsigned short) ((signed char) var_6)))) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)1)))))))));
    }
    var_19 = ((/* implicit */signed char) max((max((((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_7)))), (((/* implicit */int) var_9))));
    var_20 = ((/* implicit */unsigned char) (!((_Bool)1)));
}
