/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159050
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
    var_13 = var_12;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) var_6);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), (arr_0 [i_0] [i_1])));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(signed char)12])))) != ((((~(((/* implicit */int) var_6)))) | (((/* implicit */int) arr_1 [(signed char)14]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_3 = 4; i_3 < 24; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_15 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                        arr_18 [i_2] [i_1] = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
                        arr_19 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [i_3] |= ((/* implicit */signed char) ((arr_12 [i_3 + 1] [i_3 - 2] [i_3 - 4] [i_3 - 4]) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_5))));
                        var_16 = var_6;
                        var_17 += ((/* implicit */signed char) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_7))));
                    }
                    var_18 ^= ((/* implicit */signed char) (+(((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) (_Bool)0))))));
                    arr_20 [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 2])) ? (((/* implicit */int) arr_9 [i_2] [i_3 + 1] [i_3])) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [(_Bool)1])))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((((((/* implicit */_Bool) var_2)) || ((_Bool)1))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_6))));
                    var_20 = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0])), (var_4)))))));
                }
                arr_25 [i_2] = ((/* implicit */_Bool) (+(((arr_24 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2]))))));
            }
            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                var_21 = min(((_Bool)1), ((_Bool)1));
                var_22 = ((/* implicit */_Bool) max((var_22), (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) <= (((/* implicit */int) arr_1 [i_0]))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_0])) > (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) - ((-(((((/* implicit */int) arr_23 [i_0] [(signed char)13] [(signed char)13] [i_0] [i_0])) + (((/* implicit */int) var_3))))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0]))))));
                arr_31 [i_0] [i_0] = ((((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8)))))) < (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])));
                var_25 = max((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_7] [i_0])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [(_Bool)1]))))))));
            }
            arr_32 [i_0] = arr_14 [(_Bool)1] [i_0] [i_0] [i_0];
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_22 [i_0] [i_0] [i_0] [i_0] [(signed char)20] [i_0]), (((/* implicit */signed char) var_6))))) == (((/* implicit */int) ((signed char) var_6)))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_36 [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_8] [i_8] [i_8] [i_8])) - (((/* implicit */int) arr_13 [i_0] [i_8] [(_Bool)1] [(_Bool)1] [i_8]))));
            var_27 -= ((/* implicit */signed char) arr_10 [i_8] [i_8] [i_0] [i_8]);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_28 -= var_9;
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_30 [i_0] [i_9] [i_9])) : (((((/* implicit */int) arr_2 [i_9] [i_9])) | (((/* implicit */int) max((var_4), (arr_37 [i_9] [(signed char)15])))))))))));
            var_30 -= ((/* implicit */_Bool) ((((/* implicit */int) max((arr_27 [i_0] [i_0]), (var_2)))) & (((((/* implicit */_Bool) arr_27 [i_0] [i_0])) ? (((/* implicit */int) arr_27 [i_0] [i_9])) : (((/* implicit */int) arr_27 [i_9] [i_9]))))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_31 = arr_28 [i_0] [i_9] [i_10];
                arr_42 [i_9] [i_9] = ((/* implicit */_Bool) var_4);
            }
        }
        arr_43 [i_0] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_8)))))), (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
        var_33 &= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (_Bool)0)))));
    }
    var_34 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))));
}
