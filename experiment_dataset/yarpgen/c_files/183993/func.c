/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183993
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
    var_20 = (unsigned short)64864;
    var_21 = var_10;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max(((unsigned short)21450), ((unsigned short)12714))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((((/* implicit */int) (unsigned short)12712)) & (((/* implicit */int) arr_0 [i_0] [(unsigned short)7])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = arr_5 [i_0] [i_0] [i_0];
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                arr_9 [i_2] [i_0] [i_1] [(unsigned short)5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))));
                arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)6] [i_2]))))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)12712)) != (((/* implicit */int) arr_8 [i_0] [i_2])))))));
            }
            arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_7 [i_0] [i_1]))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            arr_14 [(unsigned short)13] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44599)) ? (((/* implicit */int) (unsigned short)52814)) : (((/* implicit */int) (unsigned short)9185))));
            arr_15 [i_0] [(unsigned short)11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_0] [i_3] [i_0]))));
        }
        arr_16 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_12 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)24854)) ? (((/* implicit */int) (unsigned short)20936)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_13 [i_0] [i_0])))) << (((((/* implicit */int) min((var_0), (arr_8 [i_0] [i_0])))) - (16029)))));
    }
    var_22 = ((unsigned short) var_3);
}
