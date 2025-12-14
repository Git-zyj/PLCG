/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15223
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
    var_16 = min(((unsigned short)16), ((unsigned short)8890));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = var_5;
                arr_6 [(unsigned short)12] |= ((unsigned short) (unsigned short)8890);
                arr_7 [i_0] [(unsigned short)10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_13), (arr_1 [(unsigned short)6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((-(((/* implicit */int) var_15))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_14 [i_3] [i_0] [(unsigned short)3] [i_0] [i_0] = var_15;
                            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
                            var_18 = (unsigned short)16;
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_2] [i_1 - 1] [i_0 - 1])) : (((/* implicit */int) max((arr_1 [i_0]), (var_11))))))));
                                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65523))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)63415)));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (max((((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)8878)))), (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_15)) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) var_1))))))));
                            arr_23 [i_5] &= ((/* implicit */unsigned short) min((((/* implicit */int) min((var_14), (max((var_5), (arr_17 [i_0 - 1] [i_1] [i_6 + 2] [i_0 - 1] [i_1])))))), ((+((+(((/* implicit */int) (unsigned short)8890))))))));
                            arr_24 [(unsigned short)8] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = var_3;
                            arr_25 [i_1] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) > (((/* implicit */int) ((unsigned short) (unsigned short)8890))))) ? (max(((-(((/* implicit */int) (unsigned short)19)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) max((var_1), (arr_17 [i_6 - 1] [(unsigned short)3] [i_1 + 2] [i_0 + 1] [(unsigned short)4]))))));
                            var_23 = (unsigned short)65504;
                        }
                    } 
                } 
            }
        } 
    } 
}
