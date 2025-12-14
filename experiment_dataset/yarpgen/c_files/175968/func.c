/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175968
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
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = min((((max((var_4), (((/* implicit */long long int) (_Bool)0)))) >> (((((((/* implicit */int) (short)-12998)) + (((/* implicit */int) (signed char)7)))) + (13005))))), (((long long int) arr_2 [i_0])));
        var_15 = ((/* implicit */short) var_0);
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((unsigned int) max((arr_6 [i_1] [i_2] [i_2]), (arr_6 [i_1] [i_1] [i_1]))));
            var_17 = ((/* implicit */_Bool) ((((min((max((arr_1 [3LL]), (((/* implicit */long long int) (unsigned char)168)))), (max((-455534097246956677LL), (-1LL))))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_8 [i_2] [i_2] [(unsigned short)4])) >> (((((((/* implicit */int) arr_2 [10LL])) - (((/* implicit */int) var_5)))) - (12770)))))));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) arr_2 [i_1]);
        }
        arr_10 [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_1] [0U] [i_1])), (max((min((((/* implicit */long long int) -918382870)), (arr_7 [i_1]))), (max((arr_4 [i_1]), (((/* implicit */long long int) var_0))))))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_1]), (((/* implicit */long long int) arr_6 [i_1] [i_1] [10LL]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (min((arr_7 [i_1]), (arr_7 [i_1])))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (((_Bool)0) && (((/* implicit */_Bool) -1925512268))));
        var_19 = (~(((/* implicit */int) arr_12 [i_3] [i_3])));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 20; i_4 += 3) 
    {
        var_21 |= ((((/* implicit */int) arr_17 [(unsigned short)6] [(unsigned short)6])) >= (((/* implicit */int) arr_17 [(unsigned short)18] [(unsigned short)18])));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4]))) / (((2199022206976LL) << (((((-586610367) + (586610427))) - (40)))))));
    }
}
