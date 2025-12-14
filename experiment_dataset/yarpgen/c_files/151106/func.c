/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151106
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
    var_10 = ((/* implicit */int) ((unsigned long long int) var_8));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (unsigned short)22))));
        arr_3 [i_0 + 3] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (var_9)));
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_12 = ((((/* implicit */unsigned long long int) arr_5 [i_1])) & (max((4145872610156663999ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 - 1])))));
        var_13 = ((/* implicit */unsigned short) var_1);
        arr_6 [i_1 - 2] = min((18446744073709551602ULL), (((/* implicit */unsigned long long int) var_4)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((var_1) + (var_3))) - (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_2])))) : ((+(18446744073709551595ULL)))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_7))));
                    var_15 = ((((((/* implicit */_Bool) max((var_0), (var_7)))) ? (((arr_9 [(unsigned short)0] [i_3]) / (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (67108863)))))) * ((~(min((((/* implicit */unsigned long long int) arr_5 [i_1])), (5222036192737057196ULL))))));
                }
            } 
        } 
    }
    for (int i_4 = 4; i_4 < 15; i_4 += 3) 
    {
        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) min((arr_4 [i_4 - 4]), (((int) 0))))) : (var_9)));
        arr_16 [i_4] = var_6;
        arr_17 [i_4] = ((/* implicit */unsigned long long int) var_7);
        arr_18 [i_4] [i_4] = var_6;
    }
    /* LoopSeq 1 */
    for (int i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) ((unsigned short) arr_20 [i_5]))) : (((/* implicit */int) ((-3) == (var_4)))))) << (((max((max((arr_7 [i_5] [i_5]), (arr_7 [17] [22]))), (((/* implicit */int) (unsigned short)65519)))) - (65511))))))));
        var_18 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (arr_11 [i_5 + 1])))) % (max((((/* implicit */unsigned long long int) var_8)), (var_6))))));
    }
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((unsigned long long int) var_4))));
}
