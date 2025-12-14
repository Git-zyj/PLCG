/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127292
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
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_12))) % (((arr_1 [i_0] [i_0]) & (arr_1 [i_0 + 1] [i_0]))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_21 += ((/* implicit */short) ((((((/* implicit */int) (signed char)95)) << (((arr_5 [i_0 - 1]) - (544433083351767351LL))))) % (((((((arr_4 [i_1] [i_1] [i_1]) & (-718974160))) + (2147483647))) >> (((((/* implicit */int) var_10)) - (65)))))));
                        var_22 = ((12930630832352984286ULL) / (((/* implicit */unsigned long long int) 8388608U)));
                    }
                } 
            } 
        } 
        arr_11 [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))) << (((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))))) - (62538237U)))));
    }
    for (int i_4 = 2; i_4 < 13; i_4 += 1) 
    {
        var_23 = ((/* implicit */_Bool) arr_2 [(unsigned short)20] [(unsigned short)20]);
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((((unsigned long long int) arr_8 [i_4 + 3] [i_4 + 3] [i_4])) / (((/* implicit */unsigned long long int) arr_12 [i_4 - 1])))), (((/* implicit */unsigned long long int) var_5)))))));
        var_25 ^= ((((/* implicit */_Bool) 587350731U)) || (((/* implicit */_Bool) 3)));
        var_26 = ((/* implicit */unsigned short) arr_1 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_26 [i_5] [i_6] [i_7] [i_7] [i_8] [i_8] = ((((/* implicit */unsigned long long int) ((long long int) arr_15 [i_6 - 1]))) & ((((+(20ULL))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_6))) - (2714776868U))))));
                                arr_27 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */short) max((((/* implicit */int) var_18)), ((-(var_19)))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) ((var_13) % (((/* implicit */int) var_3))))))));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (signed char)31)))) + (2147483647))) >> (((var_8) - (1026831455U))))))));
            }
        } 
    } 
}
