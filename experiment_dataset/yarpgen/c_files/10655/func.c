/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10655
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
    var_13 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_14 &= ((/* implicit */int) var_6);
        var_15 = arr_0 [i_0];
        var_16 &= ((((((/* implicit */int) arr_2 [i_0])) / (var_8))) * (((((/* implicit */_Bool) -1493467384)) ? (((/* implicit */int) arr_2 [i_0])) : (-271805124))));
        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) min((var_1), (var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)42079))))))) != (((((/* implicit */_Bool) 1897147051)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    var_18 = ((/* implicit */int) max((var_18), (min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) max((var_9), (var_0))))))), ((~(((var_9) & (((/* implicit */int) var_6))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_19 = min((((/* implicit */int) ((-882850154) > ((-(((/* implicit */int) (unsigned short)40837))))))), (-1897147056));
            arr_7 [i_1] [i_2] |= ((/* implicit */unsigned short) arr_4 [(unsigned short)12] [i_1]);
        }
        for (int i_3 = 3; i_3 < 16; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
                {
                    var_20 = ((/* implicit */int) (unsigned short)24698);
                    var_21 = ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_1] [i_3] [i_4] [i_5])), (arr_3 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) (unsigned short)41810)) : (((/* implicit */int) (unsigned short)32766)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned short)20])) != (var_11))))));
                }
                var_22 = ((/* implicit */int) ((unsigned short) ((arr_3 [i_3 - 2] [i_3 - 1]) - (var_7))));
                arr_16 [i_4] = ((arr_15 [i_1] [i_3] [i_1] [i_4]) % (1182482271));
            }
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                arr_21 [i_1] [(unsigned short)12] [i_3] [i_6] = 1774542625;
                arr_22 [i_1] [(unsigned short)13] [i_6] [i_6] = ((/* implicit */unsigned short) (~(1917361038)));
                var_23 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_2 [i_1])))), (-1750064446)));
            }
            arr_23 [i_1] [i_3] = min((max((-1273373904), (((/* implicit */int) (unsigned short)32769)))), (-1600491802));
        }
        for (int i_7 = 3; i_7 < 16; i_7 += 2) /* same iter space */
        {
            arr_27 [i_1] [i_1] [i_1] &= (~(min((arr_5 [i_7 - 3] [i_7 - 3]), (arr_5 [i_7 - 3] [i_7 - 3]))));
            var_24 = min((((/* implicit */int) arr_13 [i_7])), (var_2));
        }
        arr_28 [i_1] = ((/* implicit */unsigned short) min(((((((~(1641662155))) + (2147483647))) >> (((((((-1258010522) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) - (52038))))) - (889473105))))), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)55085)) : (((/* implicit */int) var_6)))) % ((~(var_9)))))));
    }
}
