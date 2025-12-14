/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103574
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned short)13217))))) ? (((arr_1 [i_0 - 1]) * (var_6))) : (((1202059341U) | (2632337739U))));
        var_15 = ((((((/* implicit */_Bool) ((unsigned char) (unsigned short)3))) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (3446053821U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 848913458U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_4 [i_1] [i_1])))) - (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6265)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((var_7), (((/* implicit */unsigned int) (unsigned char)12))))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_10 [i_2] = ((unsigned char) var_2);
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_3 [i_2] [10U]);
    }
    var_16 = min((((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (10U)))), ((unsigned char)36));
    /* LoopSeq 1 */
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_1))));
            arr_18 [i_3] = var_8;
        }
        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (1202059320U)));
                        arr_25 [i_5] [i_5] [i_6 + 1] [i_7] = min((4173102183U), (((/* implicit */unsigned int) (unsigned char)112)));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_5))));
                    }
                } 
            } 
            arr_26 [i_5] [i_5] = var_5;
        }
        var_20 ^= ((/* implicit */unsigned char) ((unsigned short) 3446053849U));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned short)52534))));
}
