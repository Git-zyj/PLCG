/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143888
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_1])))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0])))) : ((~(((/* implicit */int) var_11))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((((/* implicit */int) max((var_3), ((signed char)127)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)91)))))) / (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))), (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_3 [i_0] [i_0])))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)23)))) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [(signed char)2] [i_1])) | (((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_3 [(signed char)1] [i_1])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (signed char)-64)))))));
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
    {
        arr_9 [i_2] [(signed char)4] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_20 [i_4] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [(signed char)0] [(signed char)0])) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_12 [i_2 + 1])))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)53)) ? (((((/* implicit */_Bool) arr_17 [(signed char)11] [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_3] [i_3])))) : (((/* implicit */int) ((signed char) arr_18 [i_2 - 2] [i_2 - 3] [i_2 - 1]))))))));
                        var_16 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_11 [(signed char)11] [i_3] [i_3])) + (((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_2 + 1]))))));
                        arr_21 [i_4] [i_3] [i_3] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_2]))))) ? (((/* implicit */int) arr_15 [i_2 - 3] [i_5 + 1])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_8 [i_2] [(signed char)11]))))))) ? (((/* implicit */int) arr_15 [i_2] [i_3])) : (((((/* implicit */int) arr_7 [i_2 - 3])) % ((-(((/* implicit */int) (signed char)-22))))))));
                    }
                } 
            } 
            var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_4), (arr_11 [i_2 - 1] [i_2 + 1] [i_3]))))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((((/* implicit */int) var_5)) | (((/* implicit */int) arr_8 [i_2 + 1] [i_3])))))))));
            arr_22 [(signed char)1] [i_2] = var_6;
        }
        arr_23 [i_2] = var_8;
    }
    var_19 = ((/* implicit */signed char) min((var_19), (var_2)));
}
