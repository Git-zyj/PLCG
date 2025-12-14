/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154093
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_3 + 1] [i_1] [i_1] [i_1] [i_0] [(_Bool)1] [(_Bool)1] = var_8;
                            var_20 ^= arr_11 [i_0] [i_1] [i_0] [i_3 + 1];
                            arr_16 [i_1] = ((/* implicit */_Bool) (+(((((((/* implicit */int) arr_9 [i_0 + 1])) << (((/* implicit */int) var_6)))) ^ (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [(_Bool)1]))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_13 [(_Bool)1])))), ((-(((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_1] [i_1] [i_1] [i_0 + 1] [i_1]))))));
            var_22 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_1] [i_0 + 1])))), (((/* implicit */int) (_Bool)1))));
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) min((arr_10 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [(_Bool)1] [i_0]), (arr_4 [i_0 + 1] [i_0 + 1])))))))))));
    }
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
    var_25 = min((var_9), ((_Bool)0));
    var_26 = var_2;
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_27 = ((/* implicit */_Bool) min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_4))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_5] [(_Bool)1])) > (((/* implicit */int) var_12)))))))));
                arr_21 [i_5] [i_6] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_5])) > (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_5]))))))) * (((((/* implicit */int) ((((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1])) < (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))))) * (((/* implicit */int) ((((/* implicit */int) arr_7 [i_5] [i_5 + 1] [i_5])) == (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) min((((arr_22 [i_5 + 1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_22 [i_5 + 1])))), (((/* implicit */int) min((arr_4 [i_5 + 1] [i_6]), (arr_4 [i_5 + 1] [i_6])))))))));
                    arr_24 [i_5] [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))), (((var_6) ? (((/* implicit */int) arr_11 [(_Bool)1] [i_6] [i_6] [i_5 + 1])) : (((/* implicit */int) arr_13 [i_5 + 1]))))));
                                var_30 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                                arr_30 [i_7] [(_Bool)0] [i_7] [i_7] [i_7] &= ((/* implicit */_Bool) (-(((arr_25 [(_Bool)1] [i_9] [i_9] [(_Bool)1]) ? (((/* implicit */int) min((arr_4 [(_Bool)1] [i_9]), (arr_12 [i_6] [i_6] [i_6] [(_Bool)1] [(_Bool)1] [i_8] [i_7])))) : (((/* implicit */int) arr_11 [(_Bool)1] [i_5] [i_7] [i_8]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_31 -= var_16;
                                var_32 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), (arr_5 [i_5 + 1] [i_5] [i_5 + 1])))) == ((-(((/* implicit */int) var_19))))))), (((((/* implicit */int) (_Bool)1)) << ((((~(((/* implicit */int) arr_18 [i_10])))) + (16)))))));
                                arr_39 [(_Bool)1] [i_6] [i_6] [(_Bool)0] [i_7] [(_Bool)1] [i_11] |= ((_Bool) arr_37 [i_5]);
                                arr_40 [i_5] [(_Bool)1] [i_5] [i_11] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (!(var_15))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_44 [i_5] [i_6] [i_6] [i_6] = (!(arr_10 [i_12] [i_12] [i_5] [i_6] [i_5] [i_5]));
                    arr_45 [i_6] [(_Bool)1] [i_6] &= ((/* implicit */_Bool) ((arr_43 [i_5 + 1]) ? (((/* implicit */int) min((arr_6 [i_5 + 1] [i_5 + 1]), (arr_6 [i_5 + 1] [i_5 + 1])))) : (((/* implicit */int) min((arr_6 [i_6] [i_5 + 1]), (arr_26 [i_5 + 1] [(_Bool)1] [i_12] [i_5 + 1] [i_5] [i_5 + 1]))))));
                    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) var_18))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((min((((/* implicit */int) arr_37 [i_6])), (((((/* implicit */int) arr_0 [i_5 + 1] [i_5 + 1])) + (((/* implicit */int) arr_13 [i_5])))))), (((/* implicit */int) ((_Bool) arr_49 [i_5 + 1] [i_5 + 1] [i_13] [i_14] [i_14]))))))));
                                var_35 += ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) var_19)) - (((arr_26 [i_5] [i_6] [(_Bool)1] [i_16] [i_16] [(_Bool)1]) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_15] [i_15] [i_16])) : (((/* implicit */int) (_Bool)1))))));
                            arr_58 [i_6] [i_16] [i_16] [i_6] [i_5] = var_1;
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((arr_48 [i_16] [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))))) << (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
