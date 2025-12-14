/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115925
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 += ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)206)) * (((/* implicit */int) (short)4064))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (((unsigned long long int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (unsigned short)62373)), (9223372036854775807LL))) & (var_1))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)13)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)4067))));
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-4065))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) 14369635924814651259ULL))));
            var_24 = ((/* implicit */unsigned char) -2186166952015329995LL);
            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_7 [i_1] [i_3] [i_3 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65408)))))) != (((/* implicit */int) var_5))))), (min((arr_10 [i_3 + 1]), (arr_10 [i_3 - 1])))));
            var_26 = ((/* implicit */unsigned char) (short)24096);
        }
        for (long long int i_4 = 4; i_4 < 19; i_4 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) var_15);
            var_28 = ((/* implicit */short) arr_7 [i_1] [i_1] [i_1]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                arr_22 [(unsigned short)17] [(unsigned short)17] [(unsigned char)19] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_8 [i_6] [i_1] [i_1]))));
                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_13)));
            }
            var_29 = ((/* implicit */unsigned int) -4842082083659733133LL);
        }
        var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))) >> (((((/* implicit */int) var_11)) + (20171)))));
    }
    var_31 *= ((/* implicit */unsigned char) 2186166952015330011LL);
}
