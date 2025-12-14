/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175334
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
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_1])))) && (((/* implicit */_Bool) var_11)))))));
                arr_5 [i_0] = ((/* implicit */int) arr_3 [(unsigned char)8] [(unsigned short)6]);
                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_14 [i_3] [0] [i_4] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_5)) - (arr_11 [i_3]))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (arr_8 [i_3] [i_3] [i_3]))))) - (max((((/* implicit */int) arr_7 [i_3])), (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_12 [(unsigned short)4] [2] [i_4] [i_4]))))))));
                    arr_15 [4] [i_3] [i_2] = (i_3 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= ((~(((/* implicit */int) var_13))))))) : (((arr_11 [(unsigned char)7]) << (((((/* implicit */int) arr_9 [(short)6] [i_3] [i_2 - 1])) - (57906)))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= ((~(((/* implicit */int) var_13))))))) : (((arr_11 [(unsigned char)7]) << (((((((((/* implicit */int) arr_9 [(short)6] [i_3] [i_2 - 1])) - (57906))) + (36200))) - (21))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))));
}
