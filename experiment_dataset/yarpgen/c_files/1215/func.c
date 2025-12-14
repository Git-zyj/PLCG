/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1215
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
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) arr_1 [i_0]))))));
        var_14 = ((((/* implicit */_Bool) (short)7680)) ? (1407590876) : (((/* implicit */int) (unsigned short)15872)));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = (~(max(((~(((/* implicit */int) (short)-7681)))), ((~(((/* implicit */int) (short)960)))))));
            var_15 = 1407590886;
        }
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((signed char) var_1));
        var_17 &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))));
        var_18 *= ((/* implicit */_Bool) (+(((unsigned long long int) var_6))));
        arr_9 [i_2] = ((/* implicit */signed char) ((arr_7 [i_2 - 1]) ? (arr_8 [i_2 + 1]) : (((int) arr_0 [i_2 - 1] [i_2 - 2]))));
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */int) (short)8);
        var_19 ^= ((/* implicit */int) max(((-(arr_10 [i_3]))), (((/* implicit */unsigned long long int) (short)-7662))));
    }
    var_20 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_21 |= ((/* implicit */unsigned short) var_3);
        arr_15 [i_4] [i_4] = ((/* implicit */int) (signed char)24);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(arr_13 [i_5] [i_5])))) ? (((((/* implicit */_Bool) -1288188592)) ? (((/* implicit */int) arr_16 [19])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)128))))))) << ((((+(var_11))) - (499239009)))));
        var_23 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (signed char)126)))));
    }
}
