/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123024
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned short) min((var_6), (var_10)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [(unsigned short)23] &= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_0]))))), (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((arr_1 [i_0] [i_0]), ((unsigned short)24762))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = arr_7 [i_2] [i_1] [i_0];
                    arr_11 [i_0] [i_1] [i_2] [(unsigned short)15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_7 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((unsigned short) (unsigned short)31);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] [i_3] = arr_13 [i_3];
        arr_16 [i_3] = arr_1 [i_3] [i_3];
        arr_17 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) * (((/* implicit */int) arr_4 [i_3] [(unsigned short)6] [i_3])))) <= (((/* implicit */int) ((unsigned short) arr_0 [i_3])))));
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    arr_26 [i_4] [i_5] [i_5] = min((((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65510)) >> (((((/* implicit */int) var_11)) - (48360))))) < (((/* implicit */int) ((unsigned short) var_9)))))), (arr_5 [i_6] [i_6] [i_6]));
                    arr_27 [i_6] [(unsigned short)17] = ((unsigned short) min((arr_1 [i_6] [(unsigned short)17]), ((unsigned short)0)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            arr_30 [i_7] = arr_18 [i_4];
            arr_31 [i_4] [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [(unsigned short)11])) ? (((/* implicit */int) arr_19 [i_7 + 1])) : (((/* implicit */int) min((var_3), (var_11))))));
            arr_32 [(unsigned short)0] [(unsigned short)21] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) max((arr_5 [i_4] [i_4] [(unsigned short)16]), (var_5)))) == (((/* implicit */int) arr_23 [i_7 - 1] [i_7 + 2] [i_7 + 2]))))), (((((/* implicit */int) arr_22 [i_7 + 1] [i_4])) & (((/* implicit */int) ((unsigned short) arr_2 [i_4])))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    {
                        arr_39 [i_7] [i_7] [i_7] = min((min(((unsigned short)17017), ((unsigned short)34306))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)62032)) ? (((/* implicit */int) arr_23 [i_7] [i_7] [i_7])) : (((/* implicit */int) (unsigned short)27985)))) > (((/* implicit */int) arr_38 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
                        arr_40 [i_4] [i_7] [i_4] [i_9] [i_9] = ((unsigned short) (~(((/* implicit */int) arr_14 [i_8]))));
                        arr_41 [i_4] [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) min((min((var_1), (var_0))), (max(((unsigned short)33), (var_9)))))) >> (((((/* implicit */int) arr_7 [i_7] [i_8] [i_9])) - (26833)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 1) 
                        {
                            arr_44 [(unsigned short)18] [(unsigned short)18] [(unsigned short)22] [i_9] [i_4] [i_4] [(unsigned short)18] = min((arr_7 [i_7 + 1] [(unsigned short)14] [i_7 + 2]), (min((var_3), (arr_29 [i_8] [i_9] [(unsigned short)4]))));
                            arr_45 [i_7] [i_10] = ((/* implicit */unsigned short) max((max(((+(((/* implicit */int) (unsigned short)2486)))), (((/* implicit */int) min((arr_20 [i_4]), (arr_19 [i_4])))))), (((/* implicit */int) (unsigned short)46749))));
                            arr_46 [(unsigned short)22] [i_7] [(unsigned short)22] [i_10] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)65510)) >> (((((/* implicit */int) (unsigned short)2764)) - (2760)))))));
                            arr_47 [i_4] [i_10] [i_10] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_4] [i_4])) / (((/* implicit */int) arr_38 [i_10 + 3] [i_8] [i_4]))))) ? (((((/* implicit */_Bool) arr_28 [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_24 [i_7 + 2] [i_7 + 2])) : (((/* implicit */int) arr_42 [i_10] [i_10])))) : (((/* implicit */int) min((arr_13 [i_9]), (var_10)))))), ((~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_7] [i_9] [i_10 - 2])) != (((/* implicit */int) arr_14 [i_7])))))))));
                        }
                    }
                } 
            } 
        }
    }
}
