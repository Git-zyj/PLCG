/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117308
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] |= ((/* implicit */long long int) (unsigned char)242);
                var_13 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned char)246))))));
                arr_5 [(short)17] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-10988))))) - (max((((/* implicit */long long int) 796769690U)), (arr_2 [i_1] [16])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_15 [(unsigned char)3] [i_3] = ((/* implicit */unsigned int) ((signed char) (+(min((((/* implicit */int) arr_7 [4ULL] [i_2])), (arr_1 [6U]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_14 &= ((/* implicit */short) var_6);
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_6] [10])))))));
                            var_16 = ((/* implicit */short) 4294967295U);
                        }
                        arr_21 [i_2] = ((/* implicit */int) var_12);
                    }
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) ((unsigned short) var_10))))));
                        arr_24 [(unsigned char)19] [i_4] [(signed char)17] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1447463060)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [(signed char)13] [11]))) : (var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)254)))))))));
                        arr_25 [i_2] [i_2] [(short)18] [(short)18] [i_2] [(short)17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_0 [i_2]) >= (((/* implicit */unsigned long long int) arr_9 [i_7] [i_7]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [8U] [2]))))))))));
                        arr_26 [11LL] [18ULL] [17] [10U] [i_3] [(signed char)21] = ((/* implicit */unsigned char) max(((-(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1447463060)) & (9223372036854775792LL)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        arr_30 [(unsigned char)16] [(unsigned char)16] [i_4] [18] = ((/* implicit */unsigned short) var_4);
                        var_18 = ((/* implicit */unsigned int) (-(arr_29 [i_3])));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) (unsigned char)242)))));
    var_21 = ((/* implicit */unsigned char) var_0);
}
