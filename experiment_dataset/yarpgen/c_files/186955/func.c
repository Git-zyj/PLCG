/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186955
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = (~(((/* implicit */int) var_11)));
        var_15 = ((/* implicit */unsigned short) var_7);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2 + 2])))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                var_17 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)247)))) ? (((var_8) - (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_2])))))));
                arr_10 [i_1] [i_1] [i_1] = ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)));
                var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned short)50208))))) ? ((~(((/* implicit */int) (unsigned char)81)))) : (((/* implicit */int) var_1)));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)90)) : (64606149))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_20 = (((!(((/* implicit */_Bool) (short)29445)))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_1] [i_4] [i_5])))) : (-449335279));
                }
            } 
        } 
    }
    var_21 = min((max(((+(var_8))), (((((var_13) + (2147483647))) << (((((/* implicit */int) (unsigned short)2456)) - (2456))))))), (((/* implicit */int) ((min((var_13), (((/* implicit */int) var_5)))) > (((/* implicit */int) var_1))))));
}
