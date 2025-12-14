/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15398
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
    var_18 = var_9;
    var_19 = ((/* implicit */int) (unsigned char)183);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_13 [19] [i_1] [i_2] [i_2] [i_3 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) ? (arr_4 [i_0] [i_0]) : (var_12)));
                            var_20 = ((/* implicit */unsigned char) (_Bool)0);
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2])) / (((((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)0))))) << (((((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_1] [i_2] [i_3]))) - (66)))))));
                                arr_17 [i_2] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) ((((_Bool) 2010973474U)) ? (((var_3) - (((/* implicit */int) max(((unsigned char)255), ((unsigned char)64)))))) : (-389095160)));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_2]) << (((((/* implicit */_Bool) ((unsigned char) (unsigned char)9))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((_Bool) 2010973469U)))))));
                                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)223)), (2146435072)))) | (((((/* implicit */_Bool) 4294967294U)) ? (2515041311U) : (var_12)))))) ? (2515041311U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (max((arr_15 [i_0] [i_1] [i_0]), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_3))))))));
                                var_22 += ((/* implicit */unsigned char) 1194777362U);
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                            {
                                var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2921057762U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (1194777343U) : (((/* implicit */unsigned int) 1719122877))));
                                var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_2])) * (((/* implicit */int) arr_11 [i_0] [i_3] [i_5]))));
                                arr_21 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_14 [i_2])) : (1719122877)));
                                var_25 = ((/* implicit */int) min((var_25), (((arr_20 [i_3 - 3] [i_5] [i_5] [i_5] [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_3 - 3] [i_5] [i_5] [i_5] [i_5]))))));
                                arr_22 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [10] [i_2] = var_8;
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_25 [i_2] [i_2] [10] [i_2] [i_6] [i_1] = ((/* implicit */unsigned char) arr_15 [i_3] [i_1] [i_2]);
                                var_26 = ((/* implicit */unsigned char) ((arr_19 [(unsigned char)3] [13] [i_2] [i_3 - 2] [i_6]) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (var_4)))) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) max(((unsigned char)254), (arr_2 [i_3])))))) : (max((((((/* implicit */_Bool) 3003666395U)) ? (arr_3 [i_0]) : (arr_1 [i_0]))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1))))))));
                                arr_26 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_12 [i_3] [i_1] [i_2] [i_3 - 2] [i_6] [i_2]), (arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_2] [i_2]))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                var_27 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)106))));
                                var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 2]))));
                                arr_29 [i_0] [i_2] [i_2] [i_3 - 2] [i_2] = (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_28 [6U] [6U] [i_2] [6U] [i_7])) : (((/* implicit */int) (_Bool)1)))));
                            }
                            arr_30 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */int) var_4);
                        }
                    } 
                } 
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((int) arr_2 [i_0]))));
            }
        } 
    } 
}
