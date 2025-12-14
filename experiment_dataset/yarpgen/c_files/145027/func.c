/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145027
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
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(unsigned short)11] = ((/* implicit */_Bool) min((((arr_1 [i_0]) >> (((((int) 18446744073709551610ULL)) + (8))))), (((/* implicit */unsigned int) (+(0))))));
        var_15 -= ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) -1682098654)), (arr_0 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((_Bool) 827801451U));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((short) arr_1 [i_1]))), ((unsigned short)51867)))) - (max((((/* implicit */int) ((signed char) (signed char)91))), (((((/* implicit */int) (unsigned char)30)) + (-1490975149)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_12 [15U] = ((/* implicit */long long int) ((signed char) (signed char)-87));
                    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) arr_11 [(unsigned char)14] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            {
                                arr_18 [i_5] [i_2] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */long long int) arr_15 [i_1] [(signed char)12] [i_1] [i_1])), (((long long int) (signed char)-107)))));
                                arr_19 [i_5] [i_5] [(short)7] [i_5] [(short)7] = ((/* implicit */short) ((long long int) (unsigned short)60677));
                                var_18 = ((/* implicit */short) (+((~(((6923645806301217238LL) >> (((((/* implicit */int) (unsigned short)56165)) - (56161)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_6] [i_6]))))) * (((long long int) (unsigned char)149))));
        arr_24 [6LL] [(signed char)3] = ((/* implicit */unsigned long long int) (~(arr_1 [i_6 - 2])));
    }
}
