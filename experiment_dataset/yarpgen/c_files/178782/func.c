/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178782
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
    var_11 = var_8;
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (1447121401U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)5] [i_0]);
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] = min((arr_13 [i_3] [i_2] [i_2] [i_3]), (((/* implicit */signed char) arr_11 [i_2] [i_2] [i_2] [i_2])));
                        arr_15 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_13 [i_3] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                    }
                    for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        var_13 *= ((/* implicit */signed char) ((arr_11 [i_0] [10U] [(short)15] [i_0]) ? ((+(((((/* implicit */_Bool) 1447121406U)) ? (((/* implicit */int) arr_17 [(unsigned char)13] [(unsigned char)13] [i_4 + 1] [(unsigned char)13] [i_4])) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_4])))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                        arr_19 [i_2] = arr_5 [i_2] [i_2] [(_Bool)1] [(_Bool)1];
                        arr_20 [i_0] [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_4 - 1] [i_2] [i_4 + 1]) ? (((/* implicit */int) arr_8 [i_4 + 1] [i_2] [i_4])) : (((/* implicit */int) arr_8 [i_4 + 1] [i_2] [i_4]))))) ? (((/* implicit */int) arr_8 [i_4 - 1] [i_2] [i_4])) : ((-(((/* implicit */int) arr_8 [i_4 - 1] [i_2] [i_4]))))));
                        var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_2])))))));
                        arr_21 [i_2] = ((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_5 [i_4] [i_2] [i_0] [i_0])))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6 + 3] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_23 [i_6] [i_6 + 1] [i_0] [i_6 + 1] [i_5])) : (((arr_16 [i_0] [i_1] [i_2] [i_5] [i_2] [i_1]) ? (((/* implicit */int) arr_22 [i_1] [(unsigned char)6] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_2])))))))));
                            arr_27 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) arr_10 [(unsigned char)1] [i_2]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_16 &= ((/* implicit */unsigned int) arr_10 [i_1] [i_1]);
                            arr_31 [i_0] [(signed char)18] [i_2] [i_2] [i_0] [i_5] = ((/* implicit */short) (~((+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_6 [i_1] [i_2] [(short)11])) : (((/* implicit */int) arr_8 [i_7] [i_2] [i_1]))))))));
                        }
                        var_17 = ((/* implicit */unsigned int) arr_8 [i_0] [i_2] [(signed char)12]);
                        arr_32 [i_2] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_35 [(unsigned char)15] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_5]))))) ? ((((~(((/* implicit */int) arr_17 [i_8] [(_Bool)0] [i_2] [i_0] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))))))) : (((/* implicit */int) min((arr_4 [i_0]), (((/* implicit */unsigned char) arr_5 [i_8] [i_5] [i_1] [i_0])))))));
                            arr_36 [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)115);
                            var_18 = (+((+(((arr_8 [i_2] [i_2] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0] [i_1] [i_5]))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 18; i_9 += 3) 
                        {
                            var_19 -= arr_34 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] [i_9];
                            arr_40 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (short)38);
                            arr_41 [i_1] [i_1] [i_1] [(signed char)0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [(short)10] [i_9]))));
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        arr_45 [i_2] [i_1] [i_2] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (short)38))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_10] [i_10]))) : (arr_3 [i_1] [i_2] [i_10]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_2] [i_2])))))))) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [2U] [i_10])) : (((/* implicit */int) max(((unsigned char)255), (arr_4 [i_0]))))));
                        arr_46 [i_2] [i_2] [i_2] [(short)12] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [(short)0] [(short)0] [i_2])) ? (((/* implicit */int) arr_16 [i_2] [i_0] [i_0] [i_0] [i_2] [6U])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (arr_34 [i_10] [i_2] [(signed char)16] [i_2] [i_0] [i_2] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_8 [i_0] [i_2] [(_Bool)1]))) % (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [2U] [i_0] [i_0] [2U])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_0])))))))));
                    }
                    var_21 |= arr_34 [i_2] [i_1] [i_2] [i_1] [i_2] [(signed char)8] [i_2];
                    arr_47 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)18]))));
                }
            } 
        } 
    } 
}
