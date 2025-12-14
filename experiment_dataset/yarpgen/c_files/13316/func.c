/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13316
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = arr_1 [i_0];
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [(unsigned short)2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((arr_1 [i_2 + 1]), (arr_1 [i_2 + 1])))) : (((/* implicit */int) max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))))));
                    var_14 = var_11;
                    arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2 - 1] [i_1]))))) ? ((~(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])))) : (((((/* implicit */int) arr_4 [i_2 - 1] [i_1])) | (((/* implicit */int) arr_4 [i_2 - 1] [i_1]))))));
                    arr_12 [(unsigned short)2] &= ((/* implicit */unsigned short) var_10);
                }
                for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
                {
                    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52045))))) : (((/* implicit */int) var_11))))));
                    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_14 [(signed char)6] [i_3 - 1] [i_3])))) ? (((/* implicit */int) max((arr_14 [i_0] [i_3 + 1] [i_3]), (arr_14 [i_1] [i_3 + 1] [i_3])))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_14 [i_0] [i_3 + 1] [(unsigned short)3])) : (((/* implicit */int) arr_14 [i_0] [i_3 - 1] [i_3]))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3 + 1] [i_1] [i_3 + 1]))))) ? ((-(((/* implicit */int) arr_5 [i_3 + 1] [i_1] [i_3])))) : (((/* implicit */int) ((unsigned short) var_3)))));
                    var_18 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)55447)) : (((/* implicit */int) (unsigned short)20531)))) & (((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [(unsigned short)0] [(unsigned short)1] [(unsigned short)1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_19 = (unsigned short)47606;
                    arr_17 [i_0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4])))))));
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)55463)) : (((/* implicit */int) arr_1 [i_0])))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)38978)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_0)))));
}
