/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126668
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
    var_19 = min(((unsigned char)3), (((unsigned char) (_Bool)1)));
    var_20 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) min((var_12), ((_Bool)1)))))), (((/* implicit */int) var_13))));
    var_21 += ((/* implicit */_Bool) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(var_0)));
                arr_6 [i_0] [i_0] [(_Bool)1] = ((_Bool) (((_Bool)1) ? (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_4))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    arr_10 [(_Bool)1] [i_0] |= min((((/* implicit */unsigned char) arr_2 [i_0] [(unsigned char)6])), ((unsigned char)128));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_7))) - (((/* implicit */int) ((unsigned char) arr_2 [i_1 - 1] [i_0])))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [(_Bool)1] [i_1 - 1] [(_Bool)1])), (arr_9 [i_1 - 1] [(_Bool)1] [(unsigned char)8] [i_1])))) : (((arr_2 [i_1 - 1] [(unsigned char)8]) ? (((/* implicit */int) arr_4 [(unsigned char)0] [i_1 - 1] [(unsigned char)0])) : (((/* implicit */int) arr_2 [i_1 - 1] [(unsigned char)4]))))));
                    var_24 = ((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)1))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
                }
                for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (max(((unsigned char)232), (((/* implicit */unsigned char) (_Bool)1))))))) ? (((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (arr_15 [i_1] [i_5 - 4])))) | (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_4)) & (((/* implicit */int) max((((/* implicit */unsigned char) var_18)), (arr_16 [i_0]))))))));
                                arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_16 [i_0])))) ? (((/* implicit */int) ((_Bool) arr_7 [i_0] [(unsigned char)22] [i_0]))) : (((/* implicit */int) (!(var_9))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
