/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125030
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
    var_20 += ((/* implicit */_Bool) (~((~(max((var_15), (var_9)))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_17)) / (((/* implicit */int) var_5)))), (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) max((var_12), (var_7))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) | (((/* implicit */int) min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))) : ((~(((/* implicit */int) arr_2 [i_0]))))))));
        arr_3 [i_0] = ((((/* implicit */int) arr_1 [i_0])) > (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
        var_23 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [i_0])), (max((((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (6202))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))) : (((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [i_0])), (max((((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((((/* implicit */int) arr_1 [i_0])) - (6202))) - (43725))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [(_Bool)1] [i_1]) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((arr_10 [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 4])) : (((/* implicit */int) arr_10 [i_1])))) : ((+(((/* implicit */int) arr_7 [i_2] [i_1]))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_2]) ? (((/* implicit */int) arr_5 [8U] [8U])) : (((/* implicit */int) arr_9 [i_1]))))) ? (((arr_10 [i_1]) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_10 [i_1])))) : (((/* implicit */int) arr_7 [i_2] [i_1]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 23; i_3 += 1) 
        {
            var_26 = ((/* implicit */_Bool) (+(((arr_11 [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_1] [i_3])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))));
            var_27 = ((/* implicit */unsigned short) arr_7 [i_1 + 3] [i_3 - 1]);
            var_28 *= arr_7 [i_1] [i_1];
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_17 [i_4] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_4]))) : ((~(arr_16 [i_1])))));
            arr_18 [i_1] [i_1] [i_4] = (!(((/* implicit */_Bool) arr_16 [i_1])));
            var_29 *= arr_7 [i_4] [i_1];
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) max(((!((!(((/* implicit */_Bool) arr_12 [(_Bool)1] [i_5] [i_5])))))), ((!(min((arr_14 [i_5] [(unsigned short)20]), (arr_20 [i_5] [i_5 - 1])))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_19 [i_5]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [(_Bool)1]))) : (arr_16 [14U])));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) arr_19 [i_7]);
                        var_33 = ((/* implicit */_Bool) (~(min((max((arr_24 [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) arr_22 [i_7] [i_5 - 1])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_7] [i_5])))))))));
                        arr_30 [i_5] [i_5] [i_7] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) (~(max((((/* implicit */int) min((((/* implicit */unsigned short) arr_23 [i_6] [(_Bool)1] [i_6])), (arr_26 [i_8] [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_22 [i_8] [i_6])) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) arr_19 [i_5]))))))));
                        var_34 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((arr_23 [i_5] [i_5] [14U]) ? (((/* implicit */int) arr_26 [i_7] [i_5] [i_6] [i_5])) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_5]))))))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_5]))) * (arr_24 [i_5] [i_7] [6U])))))));
                        arr_31 [(_Bool)1] [i_6] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_5 [i_5 - 1] [i_7]), (arr_10 [(_Bool)1])))), ((+(((/* implicit */int) arr_10 [(_Bool)1]))))))) ? (((min((arr_23 [i_5] [i_5] [(unsigned short)14]), (arr_20 [(_Bool)1] [i_6]))) ? (((arr_19 [i_6]) ? (((/* implicit */int) arr_25 [(_Bool)0] [(_Bool)0] [i_7] [i_8])) : (((/* implicit */int) arr_8 [i_5] [i_8])))) : (((/* implicit */int) min((arr_8 [i_7] [i_5]), (arr_15 [i_5 - 1] [18U])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) min((arr_11 [(unsigned short)14] [i_6]), (arr_10 [(_Bool)1])))), (max((arr_22 [i_8] [i_8]), (((/* implicit */unsigned short) arr_5 [i_5] [i_5])))))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? ((~((-(((/* implicit */int) arr_8 [i_5 - 1] [i_6])))))) : (((((/* implicit */_Bool) min((arr_21 [i_6] [i_6] [i_5]), (((/* implicit */unsigned int) arr_9 [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5] [i_6]))))) : (((/* implicit */int) min((arr_13 [i_6] [i_6]), (((/* implicit */unsigned short) arr_8 [i_6] [i_6])))))))));
            arr_32 [i_6] [i_6] = ((/* implicit */_Bool) min((((((/* implicit */int) (!(arr_15 [i_5] [i_6])))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5 - 1] [i_6] [i_6] [i_6] [i_6] [i_5]))) < (arr_24 [i_6] [i_5] [i_6])))))), (min((((arr_11 [i_6] [i_6]) ? (((/* implicit */int) arr_7 [i_5] [i_6])) : (((/* implicit */int) arr_12 [(unsigned short)18] [i_6] [(unsigned short)18])))), (((((/* implicit */int) arr_9 [i_6])) + (((/* implicit */int) arr_23 [i_6] [i_5] [i_6]))))))));
            var_36 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_5]))))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_37 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_19 [i_5]), (arr_20 [i_5] [i_9]))))) & (((((/* implicit */_Bool) arr_29 [(unsigned short)12] [(unsigned short)12] [(_Bool)1] [(_Bool)1] [(unsigned short)12] [i_9])) ? (arr_21 [i_5] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5 - 1] [i_9] [(unsigned short)15])))))))));
            var_38 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_15 [i_5] [(_Bool)1]) ? (((/* implicit */int) arr_35 [i_9])) : (((/* implicit */int) arr_7 [i_5] [i_9])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_5] [i_9])), (arr_12 [i_5] [i_5] [i_5]))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_20 [i_5] [i_9])) - (((/* implicit */int) arr_28 [(_Bool)1] [i_9] [i_9])))), (((/* implicit */int) arr_20 [i_9] [i_9]))))) : (min((min((((/* implicit */unsigned int) arr_27 [i_5] [i_5] [i_5] [i_5])), (arr_21 [i_5] [i_5] [i_5]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])))))))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            var_39 += ((/* implicit */_Bool) ((((((/* implicit */int) min((arr_23 [i_12] [i_9] [i_12]), (arr_8 [i_12] [i_5])))) ^ (((/* implicit */int) arr_22 [i_11] [i_12])))) ^ ((~((~(((/* implicit */int) arr_11 [i_12] [i_12]))))))));
                            arr_44 [(_Bool)1] [(_Bool)1] [13U] [(unsigned short)3] [i_10] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_27 [i_5] [i_5] [(_Bool)1] [i_5])) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_12] [6U] [i_10] [i_11])))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_12]))))), ((+(((/* implicit */int) arr_5 [i_5] [(_Bool)0]))))))));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) min(((+((~(((/* implicit */int) arr_36 [(unsigned short)0] [(unsigned short)0] [i_10])))))), ((+((~(((/* implicit */int) arr_28 [i_5] [i_5] [i_10])))))))))));
                            var_41 = ((/* implicit */unsigned int) arr_14 [i_5] [i_10]);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_42 += ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_37 [i_5 - 1] [9U] [i_5]))))));
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_13] [i_10] [i_9])) ? (((/* implicit */int) arr_33 [i_13])) : (((/* implicit */int) arr_7 [i_9] [i_13 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_11] [i_10] [i_5 - 1])) >> (((/* implicit */int) arr_20 [(unsigned short)7] [i_9])))))));
                            var_44 = ((((/* implicit */_Bool) ((arr_10 [i_10]) ? (((/* implicit */int) arr_14 [i_5] [i_10])) : (((/* implicit */int) arr_11 [i_10] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))) : (((arr_34 [i_5]) >> (((/* implicit */int) arr_15 [i_5] [i_10])))));
                            var_45 -= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1])) - (((/* implicit */int) arr_13 [10U] [10U])))) | ((-(((/* implicit */int) arr_8 [i_9] [(unsigned short)19]))))));
                            var_46 = ((/* implicit */_Bool) arr_22 [i_10] [i_9]);
                        }
                        arr_48 [i_5 - 1] [i_10] [i_5 - 1] [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10])))))));
                        var_47 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) arr_38 [i_10] [i_10] [i_5 - 1]))))))));
                        var_48 = ((/* implicit */_Bool) (~(min((((/* implicit */int) max((arr_42 [i_10]), (arr_43 [i_10] [i_9] [i_9] [5U] [i_10] [i_9])))), (((arr_9 [i_10]) ? (((/* implicit */int) arr_38 [i_5] [i_10] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_10]))))))));
                    }
                } 
            } 
        }
    }
}
