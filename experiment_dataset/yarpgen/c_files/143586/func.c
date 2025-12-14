/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143586
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
    var_11 = max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) var_0))))) / (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) var_3)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [(unsigned char)0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_10))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) ^ (((((897372366U) / (var_7))) >> ((((-(2034532383U))) - (2260434911U))))))))));
        arr_3 [i_0] [i_0 + 4] = ((((/* implicit */_Bool) ((unsigned char) 552518250))) ? (((((/* implicit */unsigned int) ((int) (unsigned char)197))) - (max((0U), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0 + 2]))));
        arr_4 [i_0] = (-(((((/* implicit */_Bool) 1937783823)) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) (unsigned char)252)))));
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] [(unsigned char)20] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_6 [i_1 + 1] [(unsigned char)11]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1]))) + (3759819011U)))));
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            arr_10 [i_1 + 1] [i_1] [i_1] = 897372355U;
            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))) - (arr_5 [i_2] [i_1]))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) arr_12 [i_3]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)177)) : (3))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56)))))));
        var_16 |= ((/* implicit */int) var_8);
        var_17 = ((/* implicit */int) ((arr_12 [i_3]) >= (var_9)));
        arr_13 [i_3] = 382419358;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (0) : (((/* implicit */int) (unsigned char)68)))))));
        var_18 = ((var_4) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)56)) ^ (((/* implicit */int) arr_15 [i_4]))))));
        var_19 -= (~(((/* implicit */int) arr_16 [i_4])));
        var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) arr_16 [i_4]))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)149)) : (2020025938)))))))) : (((unsigned int) ((unsigned int) var_5)))));
}
