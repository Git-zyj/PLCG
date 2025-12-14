/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135340
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_16 &= ((/* implicit */unsigned long long int) var_6);
        var_17 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2047)) && ((_Bool)1)));
            var_19 = ((/* implicit */short) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        }
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63509)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0] [i_0 + 3])) ? (17500716144453922880ULL) : (((/* implicit */unsigned long long int) var_10)))))));
    }
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (arr_11 [i_2 - 1] [i_2 - 1] [i_4] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) / (((/* implicit */long long int) ((/* implicit */int) (short)2767)))));
                    arr_14 [i_2 + 1] [i_2] [i_2] [(unsigned char)1] = ((/* implicit */long long int) ((((((_Bool) (unsigned short)63510)) ? (((/* implicit */int) (unsigned short)63500)) : (((/* implicit */int) min((var_7), ((unsigned short)2024)))))) == (((int) ((((/* implicit */_Bool) (unsigned short)2033)) ? (((/* implicit */int) (unsigned short)63518)) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2])))))));
                    var_22 = ((/* implicit */unsigned char) (unsigned short)63506);
                    var_23 = ((/* implicit */short) var_11);
                }
            } 
        } 
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1186))) >= (var_2))))));
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) ((unsigned int) var_7));
        arr_18 [i_5] = arr_15 [i_5] [i_5];
    }
    for (short i_6 = 4; i_6 < 17; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) arr_20 [i_6 - 2]);
        arr_21 [i_6 + 3] [i_6] = ((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6]);
        var_27 = ((/* implicit */unsigned short) ((_Bool) arr_19 [i_6] [i_6 + 1]));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) var_1);
    }
    var_28 ^= ((/* implicit */int) var_12);
}
