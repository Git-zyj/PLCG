/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106089
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */_Bool) ((max((((arr_2 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_1])))) << (((((/* implicit */int) var_8)) - (99)))));
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */int) arr_3 [(_Bool)1])) % (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) var_13)))))));
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) << (((((((((/* implicit */int) var_1)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (unsigned char)247)) : (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)197)))))) - (221)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2])) / (((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)105))))))));
            arr_10 [(unsigned char)5] [(unsigned char)12] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])), (((arr_2 [i_2]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))))));
            arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_0 [i_2 - 1]))))) & (((/* implicit */int) (_Bool)1))));
        }
        arr_12 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_2 [(unsigned char)0])) : (((/* implicit */int) arr_1 [(_Bool)1]))))))));
        arr_13 [i_0] = ((/* implicit */_Bool) ((((_Bool) (unsigned char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(var_16))))));
        arr_14 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_2 [(unsigned char)6])))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_24 [i_3] [i_4] [i_3] = ((_Bool) arr_23 [(unsigned char)3] [(unsigned char)3] [i_5 + 1]);
                        arr_25 [(_Bool)1] [i_6] [i_3] [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_5 + 1]))));
                    }
                } 
            } 
            arr_26 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)0)))));
            arr_27 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_31 [i_3] [i_7] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_29 [i_7]))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                arr_34 [i_3] [i_7] [i_8] = ((/* implicit */unsigned char) arr_17 [i_3] [i_7]);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            arr_40 [i_10] [i_3] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)116)) : (((var_15) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_9] [(unsigned char)6] [i_7] [(unsigned char)4]))))));
                            arr_41 [i_10] [i_10] [i_8] [i_9] [i_10] [i_3] = ((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) arr_30 [i_7] [i_7] [i_3])) : (((/* implicit */int) arr_20 [(unsigned char)8] [i_8] [(unsigned char)8] [i_3]))))));
                        }
                    } 
                } 
            }
            arr_42 [i_3] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))));
        }
        arr_43 [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [(_Bool)1] [i_3] [(_Bool)1]))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_47 [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_16 [(unsigned char)2])))));
        arr_48 [i_11] = (!(((/* implicit */_Bool) var_14)));
    }
    var_18 = ((/* implicit */_Bool) (-(max((((/* implicit */int) var_17)), (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))));
}
