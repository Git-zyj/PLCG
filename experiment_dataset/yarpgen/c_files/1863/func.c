/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1863
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
    var_16 = ((/* implicit */short) ((var_11) + (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [(short)7]))));
        var_18 = ((/* implicit */short) (~(((unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_19 *= ((/* implicit */unsigned int) (+(arr_0 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */unsigned char) ((((unsigned long long int) max((((/* implicit */unsigned long long int) var_0)), (var_9)))) >> (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_12 [1ULL] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_1] [i_5]))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 3] [i_3] [i_4]))) % (var_3))))))));
                                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [(unsigned char)6] [5LL] [i_3] [i_3 - 1])) ? (((((/* implicit */int) min((arr_10 [i_5] [i_4] [i_3] [i_2] [i_1]), ((short)32767)))) * (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(5986570867811201048ULL)))))))));
                                var_23 = ((/* implicit */unsigned int) (-((-(var_11)))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_2] [(short)9]);
            }
        } 
    } 
}
