/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184173
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
    var_13 = var_8;
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_11), (min((var_8), (var_10)))))) * (((/* implicit */int) (unsigned char)224))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            var_15 -= max(((unsigned char)108), ((unsigned char)32));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)138)), ((-((-(((/* implicit */int) (unsigned char)221))))))));
                            arr_11 [i_4] [i_1] [i_2] [i_3] = max((max((arr_3 [i_1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0]))))))), (max((arr_6 [i_0] [i_3] [i_2] [i_3] [i_1]), (arr_6 [i_0] [i_1] [i_2] [(unsigned char)16] [i_1]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (((/* implicit */int) max((var_6), (arr_9 [i_1] [i_1] [i_2] [i_1 + 1] [i_0])))) : (((((/* implicit */int) arr_8 [i_2] [i_1])) * (((/* implicit */int) (unsigned char)169))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1 + 1] [i_0]))))) ? (((/* implicit */int) max((arr_7 [i_1] [(unsigned char)14] [i_2]), ((unsigned char)153)))) : (((/* implicit */int) var_4)))))));
                var_19 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned char)153)))) : ((+(((/* implicit */int) var_6))))))));
            }
            var_20 = min((min((arr_8 [i_0] [i_1]), (arr_8 [i_0] [i_1]))), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)7)) >> (((((/* implicit */int) (unsigned char)193)) - (168))))) < (((/* implicit */int) var_5))))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_7 [i_0] [(unsigned char)2] [i_0])) >> (((((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned char)4] [(unsigned char)12] [i_0])) - (153))))) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 1] [(unsigned char)4] [i_0])) < (((/* implicit */int) var_3)))))))) >> (((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) var_9)))))) - (101))))))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [(unsigned char)2]))), (max((arr_10 [i_0] [i_0] [(unsigned char)2] [i_0] [i_0]), (var_10)))))) - (155)))));
    }
    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
    {
        var_23 -= var_6;
        arr_14 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_5 + 2]), (arr_12 [i_5 - 1])))) ? (((/* implicit */int) ((unsigned char) var_12))) : (min((((((/* implicit */int) (unsigned char)196)) >> (((((/* implicit */int) var_9)) - (173))))), (((((/* implicit */int) arr_13 [i_5 - 2])) >> (((((/* implicit */int) arr_12 [(unsigned char)11])) - (121)))))))));
        arr_15 [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)128)))) < (((/* implicit */int) var_6)))))));
    }
    var_24 = var_12;
    var_25 -= var_3;
}
