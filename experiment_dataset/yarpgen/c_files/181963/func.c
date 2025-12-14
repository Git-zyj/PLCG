/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181963
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-17634))));
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned short)17293))))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_9 [i_2] [i_1] [i_1] = (unsigned char)19;
            arr_10 [i_1] [i_1] |= ((/* implicit */short) var_5);
            var_18 = ((/* implicit */unsigned char) var_0);
            arr_11 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)35849))))) >= (min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_6))))))), (min((((((/* implicit */int) (unsigned char)237)) * (((/* implicit */int) arr_1 [i_1] [i_1 - 1])))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_14))))))));
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                var_19 = ((/* implicit */short) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                arr_15 [i_1] [i_3] = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35849)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 14693620557195428104ULL)) ? (((/* implicit */int) (unsigned short)27742)) : (((/* implicit */int) (unsigned short)63812)))))))) * (((/* implicit */int) (!(((((/* implicit */unsigned long long int) arr_14 [i_3 + 2])) < (5698567386880494429ULL)))))));
            }
        }
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2176055681U)) ? (2118911599U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63833)))))))) ? ((~(((/* implicit */int) (short)15)))) : (((/* implicit */int) ((short) (unsigned char)233)))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
        var_22 = arr_16 [i_4] [i_4];
    }
    var_23 = ((/* implicit */long long int) var_10);
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_14)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) < (var_2))))))) ? (((/* implicit */unsigned long long int) var_12)) : (var_0)));
}
