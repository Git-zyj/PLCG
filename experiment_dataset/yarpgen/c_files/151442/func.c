/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151442
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [2LL] [i_0] = ((/* implicit */long long int) ((_Bool) arr_3 [i_1]));
                        arr_13 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)48))));
                        arr_14 [i_0] [i_3] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)41)))) < (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = (+(arr_9 [i_0] [i_0]));
        arr_16 [i_0] [i_0] = arr_9 [i_0] [i_0];
        arr_17 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)48))));
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 4; i_5 < 11; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    arr_28 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_5 - 1] [i_5 - 1] [i_5]))))) >= (arr_18 [11LL] [i_5 - 3])));
                    arr_29 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */long long int) var_8);
                    arr_30 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((((99803481503029238LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-6448))))) / (((var_7) ? (arr_21 [i_5 - 3]) : (-315202436457576811LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 9; i_8 += 4) 
                        {
                            {
                                arr_37 [i_4] [(signed char)9] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) 2239507198736153809LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30226))) : (7488654166756850229LL));
                                arr_38 [(unsigned char)11] = ((/* implicit */long long int) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) 16911433728LL);
}
