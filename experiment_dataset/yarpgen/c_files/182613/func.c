/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182613
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((_Bool) var_18)) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_0 [i_0 + 4])) * (((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_3 [i_0 + 3] [i_0 + 3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? ((+(((/* implicit */int) var_13)))) : (min((var_8), (((/* implicit */int) (_Bool)1))))))));
        var_20 = ((/* implicit */int) arr_0 [i_0 - 1]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (-((((_Bool)1) ? ((-(((/* implicit */int) arr_6 [i_1] [i_1])))) : (((((/* implicit */int) arr_6 [i_1] [i_1])) / (((/* implicit */int) arr_6 [i_1] [i_1]))))))));
        var_21 = ((((/* implicit */int) max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1])))) - ((+(((/* implicit */int) arr_6 [i_1] [i_1])))));
        var_22 = ((/* implicit */int) arr_6 [i_1] [i_1]);
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_11 [i_2] = max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)7)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (var_11)))) ? (((/* implicit */int) arr_4 [i_2])) : (arr_8 [i_2]))));
        var_23 = ((/* implicit */_Bool) var_11);
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_4 [(short)4]) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (arr_8 [i_2])))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_10 [i_2])))))))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_6)), (arr_13 [i_3] [(_Bool)0]))), ((+(((/* implicit */int) var_2))))))) ? ((-(((var_12) / (arr_13 [i_3] [i_3]))))) : (((max(((_Bool)1), (arr_4 [i_3]))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_12 [i_3])))) : (((/* implicit */int) arr_4 [i_3]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            arr_18 [i_4] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_3] [i_4])) | ((~(1625361025)))));
            var_26 = ((((/* implicit */_Bool) ((arr_14 [i_3] [i_4] [i_3]) / (arr_14 [i_3] [i_4] [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((int) 1625361025)));
            arr_19 [i_4] [i_4] = ((/* implicit */_Bool) (-(-1625361026)));
            arr_20 [i_4] [i_4] [i_3] = ((((_Bool) (short)32749)) ? (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_16 [i_3] [i_4] [(_Bool)1])) : (1625361028))) : ((-(((/* implicit */int) arr_15 [7])))));
        }
        var_27 ^= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_17 [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_3]))))));
    }
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        arr_25 [i_5] = ((/* implicit */_Bool) var_16);
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((arr_24 [i_5]) >= (((((/* implicit */_Bool) ((arr_21 [(_Bool)1]) ? (((/* implicit */int) arr_23 [(short)10])) : (((/* implicit */int) arr_5 [i_5] [i_5]))))) ? (((/* implicit */int) arr_6 [i_5] [i_5])) : (max((((/* implicit */int) var_16)), (var_12))))))))));
    }
    for (int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        var_29 ^= ((/* implicit */int) var_18);
        arr_28 [i_6] = ((/* implicit */short) arr_21 [i_6]);
    }
    var_30 = ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_5), (var_6))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)));
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_31 = ((/* implicit */int) min((var_31), ((+(((/* implicit */int) (!(arr_21 [0]))))))));
                arr_37 [i_7] [i_8] [i_7] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)16384))))) ? (max((arr_36 [i_7] [i_8]), (arr_27 [i_7]))) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (arr_22 [i_8]))))) : (((arr_21 [18]) ? (((/* implicit */int) ((((/* implicit */int) arr_31 [i_8])) >= (((/* implicit */int) arr_4 [i_7]))))) : (((/* implicit */int) ((_Bool) arr_24 [2]))))));
                arr_38 [i_7] = arr_34 [i_7] [i_7] [i_8];
                var_32 = ((((/* implicit */_Bool) (+(max((arr_22 [i_7]), (var_8)))))) ? (((/* implicit */int) ((short) arr_26 [i_8] [i_7]))) : (max(((+(arr_22 [i_7]))), (min((arr_22 [i_8]), (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_33 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
}
