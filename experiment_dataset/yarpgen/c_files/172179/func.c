/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172179
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        arr_11 [i_0 - 2] [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) var_1);
                        arr_12 [i_0 - 2] [i_0] [i_1 + 1] [i_2 + 1] [i_3 + 4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_0 [i_0 - 1]))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : ((~(((/* implicit */int) (short)32767))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] = var_9;
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_2 [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0] = ((short) ((min((((/* implicit */unsigned long long int) (signed char)19)), (var_9))) | (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 2] [i_5 - 2])), (arr_1 [i_1] [i_0])))));
                                var_14 *= arr_19 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0];
                                arr_22 [i_0 + 1] [(signed char)6] [i_2] [i_5 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) -2048692996)) / (4263106507743603009LL))) * (((/* implicit */long long int) ((max((((/* implicit */unsigned int) 419338743)), (4100745498U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                                arr_23 [i_0] [i_2 + 1] [(unsigned short)10] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((arr_14 [(unsigned short)11] [i_1]) + (2147483647))) << (((2045553839) - (2045553839)))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_20 [i_6 - 1] [6ULL] [i_2 + 1] [(signed char)9] [i_1] [(unsigned short)15] [i_0])))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) arr_13 [(unsigned char)1] [i_5 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 4; i_7 < 18; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_27 [(_Bool)1] [i_7 - 2])), (((((/* implicit */_Bool) (+(arr_29 [(unsigned char)8] [i_8])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_8 + 1] [i_7 + 3]))))));
                var_17 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_27 [i_7 - 3] [i_8 - 2])) >> (((((/* implicit */int) var_12)) + (22))))));
                arr_30 [i_7] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)4032))))) * (arr_25 [i_8 + 1] [i_8])))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8 - 1] [i_7 + 3] [i_7]))) + (var_9)))));
            }
        } 
    } 
}
