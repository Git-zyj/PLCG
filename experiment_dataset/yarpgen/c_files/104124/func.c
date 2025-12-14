/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104124
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((((((((/* implicit */_Bool) var_7)) ? (arr_4 [i_1]) : (var_13))) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) var_8)))))) ? (var_5) : (max((((/* implicit */int) arr_1 [i_0] [i_0 + 2])), (arr_6 [i_0] [i_0 + 1] [i_0 + 3]))));
                var_15 = ((((((/* implicit */int) var_10)) != ((~(((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (arr_2 [i_0]) : (var_5));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(1115857883))))));
                    var_17 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_12) : (((/* implicit */int) var_3)));
                }
                for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    var_18 = ((/* implicit */int) min((var_18), (1546302367)));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_10 [i_0 - 1] [i_0] [i_0] [i_0]))));
                    var_20 -= ((min((max((-561645280), (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (short)-16617)) ? (((/* implicit */int) var_8)) : (89049936))))) / ((+(var_4))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (short i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            {
                var_21 ^= max(((+(((((/* implicit */_Bool) 730310272)) ? (-1115857883) : (124))))), (max((((/* implicit */int) arr_1 [i_4] [i_5 - 1])), (arr_2 [i_4]))));
                var_22 = arr_8 [i_4] [i_4] [i_4] [i_4];
                var_23 = ((/* implicit */short) ((((/* implicit */int) ((short) ((short) var_5)))) != (((/* implicit */int) (!(((/* implicit */_Bool) -1628107294)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) | (var_13)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? (min((((((/* implicit */int) var_8)) / (var_13))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_25 = ((/* implicit */int) var_7);
}
