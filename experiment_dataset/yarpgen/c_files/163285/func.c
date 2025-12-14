/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163285
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) min((((_Bool) var_15)), ((!(var_15))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_2] = (((!((_Bool)0))) || ((!(var_19))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)0))))));
                        arr_13 [i_4 - 1] [i_2] [i_0] [i_2] [i_0] [i_0] [(_Bool)1] = (((((_Bool)0) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_4 - 1] [i_0])) : (((/* implicit */int) var_15)))) < (((/* implicit */int) ((_Bool) (_Bool)1))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_19 [i_0] = ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] [i_5] [i_0])) == (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_5])));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_23 [i_6 + 1] [i_0] [i_0] [i_0] = ((((/* implicit */int) var_7)) > (((((/* implicit */int) arr_11 [i_0] [i_1] [i_6 + 1] [i_6 + 1] [(_Bool)1] [i_1] [i_3])) >> (((/* implicit */int) (_Bool)0)))));
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                        var_21 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) ((_Bool) var_13))) : (((arr_1 [i_1] [i_6]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_3] [i_3] [i_7] = (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))));
                        var_22 = ((/* implicit */_Bool) ((((_Bool) var_16)) ? (((/* implicit */int) (!((_Bool)0)))) : (((var_11) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_1] [i_3] [i_0]))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] [i_8]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_0 [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [i_1])))) : (((arr_26 [i_8] [i_3] [(_Bool)1] [i_1] [i_0] [i_0]) ? (((/* implicit */int) arr_17 [i_0] [i_1] [(_Bool)1] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_4))))));
                        var_24 = ((((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)))) > ((~(((/* implicit */int) (_Bool)0)))));
                        arr_31 [i_0] [i_3] [i_0] [i_3] [i_8] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / ((+(((/* implicit */int) var_7))))));
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                    }
                    var_25 = arr_29 [i_0] [i_3] [i_2] [i_1] [i_0];
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0] = var_13;
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_6))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_6 [i_9 - 1] [i_0])) / (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)0))));
                        arr_40 [i_0] = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : ((-(((/* implicit */int) (_Bool)1))))));
                        arr_41 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_10] = (_Bool)1;
                        arr_42 [i_0] [i_0] [i_3] [i_10] = (_Bool)1;
                        var_28 = ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1]))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_47 [i_0] [i_0] [i_2] [i_0] [i_0] = ((_Bool) (_Bool)0);
                        arr_48 [i_0] [i_0] = ((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        arr_49 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_2] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_1))))));
                        arr_50 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] [i_11] = ((/* implicit */_Bool) ((arr_6 [i_0] [i_3]) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [(_Bool)1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_0])) == (((/* implicit */int) var_5))))) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_7))))));
                    }
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_29 -= ((/* implicit */_Bool) ((((_Bool) arr_33 [i_0] [i_1] [(_Bool)1] [i_12] [i_12] [i_12])) ? (((arr_14 [i_0] [i_1] [i_12] [i_1] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) var_16))));
            }
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
        }
        var_32 = var_19;
        arr_54 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_33 += ((/* implicit */_Bool) (~(((min((var_9), (var_1))) ? (((var_14) ? (((/* implicit */int) arr_22 [i_13] [i_13] [(_Bool)1] [i_13] [i_13] [i_13])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
        arr_59 [i_13] = ((/* implicit */_Bool) ((arr_45 [i_13] [i_13] [i_13] [i_13] [i_13]) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))) : (((var_7) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((_Bool) var_11)))))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_15), (arr_60 [i_14]))) ? (((/* implicit */int) arr_61 [i_14])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) ((arr_60 [(_Bool)1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((_Bool) arr_61 [i_14])))));
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((var_0), ((_Bool)1))))))) ? (((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((_Bool) arr_12 [i_15] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1] [i_15]))) : ((+(((/* implicit */int) var_5)))))) : (((/* implicit */int) min((var_12), (((_Bool) (_Bool)1)))))));
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (((((~(((/* implicit */int) var_0)))) >= (((/* implicit */int) (!(var_9)))))) ? ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_18)) - (((/* implicit */int) arr_60 [i_15])))))) : ((~(((/* implicit */int) (_Bool)1)))))))));
        arr_66 [i_15 - 1] = max((((arr_21 [(_Bool)1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]) || (arr_21 [i_15] [i_15 - 1] [i_15] [i_15] [i_15 - 1]))), (max((var_4), (arr_21 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_70 [i_16] = ((_Bool) ((_Bool) min((var_12), (arr_68 [i_16] [i_16]))));
        arr_71 [i_16] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
