/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109521
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
    var_17 = 0;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_18 = (-(((/* implicit */int) (((-(((/* implicit */int) (unsigned char)213)))) == (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_12 [(unsigned char)16] [i_0] [(unsigned char)16] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_1)))), (max((arr_9 [i_0]), (arr_5 [0] [0] [i_3])))))) ? (((/* implicit */int) ((_Bool) var_11))) : (((((/* implicit */_Bool) ((int) (unsigned short)18815))) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_1 - 1])) : ((+(-1)))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-600909115), (((arr_8 [i_3] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_2] [i_0]))))))) ? ((+(((/* implicit */int) (unsigned short)13858)))) : ((~(((/* implicit */int) arr_3 [i_0] [i_1 - 1]))))));
                        var_20 -= (-(((/* implicit */int) (unsigned short)13858)));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = (+(((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)80)) / (2113908098)));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_5] [i_5]));
            var_22 = ((int) ((int) (unsigned short)51410));
        }
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                var_23 = ((arr_15 [i_7] [i_6 + 1]) ? (((/* implicit */int) arr_16 [(unsigned char)12] [i_6 - 2])) : (((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 1])));
                arr_26 [i_4] [i_6 - 2] [i_6 - 2] [i_6] = ((/* implicit */_Bool) ((arr_25 [i_6]) ? (arr_11 [i_4] [i_6]) : (2113908083)));
            }
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 15; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    {
                        var_24 = (+(((/* implicit */int) (unsigned short)32593)));
                        arr_32 [i_4] [i_6] = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_4] [i_6] [i_4]));
                        var_25 += ((/* implicit */unsigned short) ((arr_8 [i_4] [i_4] [i_4]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46720))))) : (((/* implicit */int) (unsigned short)14125))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_6])) - (((/* implicit */int) arr_24 [i_4] [i_6 + 2] [(unsigned char)4]))))) ? (((/* implicit */int) (unsigned short)23128)) : (((/* implicit */int) ((unsigned short) arr_29 [i_6])))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [(unsigned short)0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_6] [i_6 - 2] [i_6]))))) ? (((((/* implicit */_Bool) -1402927297)) ? (((/* implicit */int) arr_25 [i_4])) : (((/* implicit */int) arr_3 [i_4] [i_4])))) : (arr_18 [i_6 + 2] [i_8 + 3]))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_10 = 1; i_10 < 24; i_10 += 2) 
    {
        arr_36 [i_10] = var_9;
        var_28 -= ((int) (unsigned short)42407);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned short)32736)))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 9; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                {
                    var_30 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_15 [i_13 + 1] [i_13])) * (((/* implicit */int) arr_15 [i_13 + 1] [i_13 + 1]))))));
                    arr_45 [i_12] [i_12] [(unsigned char)2] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_12])) ? (((/* implicit */int) (unsigned char)224)) : (arr_27 [i_13 + 1] [i_13 + 1] [i_13 + 1])))) ? (((/* implicit */int) arr_28 [i_12])) : ((+(((/* implicit */int) arr_28 [i_12]))))));
                    var_31 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_10 [i_12 + 3] [i_12 + 3] [i_13 + 1] [i_12])))) * (((((/* implicit */_Bool) (-(arr_30 [i_11] [i_13] [i_11] [i_11] [i_11] [i_11])))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) -1)) ? (1584692245) : (arr_18 [(unsigned short)15] [(unsigned short)15])))))));
                    var_32 += ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_1))))))), ((~(((/* implicit */int) ((unsigned short) arr_43 [i_11] [i_11] [i_12] [(unsigned short)0])))))));
                }
            } 
        } 
    }
}
