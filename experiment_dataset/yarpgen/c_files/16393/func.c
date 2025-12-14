/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16393
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)11] [i_1]))) != (var_3))))) == ((-(var_7)))));
                var_16 = ((/* implicit */short) (-((+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) > (var_1))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 8; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-32765))));
                    var_18 = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))), (min((var_3), (var_15))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [1ULL] [i_3] [i_2] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (9002801208229888LL)))));
                                var_19 = ((/* implicit */unsigned short) -4531021061832574894LL);
                                var_20 *= ((/* implicit */signed char) min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_7))))), (((/* implicit */unsigned long long int) ((int) ((short) arr_9 [i_5]))))));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = max((arr_7 [i_2]), (((/* implicit */unsigned int) ((short) ((signed char) arr_6 [(unsigned short)1])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((max((arr_12 [2] [i_4 + 1] [i_3 - 2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)19124))))))), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_4]))));
                    arr_20 [(short)5] [(short)1] [i_4] [i_3] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
        arr_21 [i_2] = ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) * (707816987873285649ULL))), (var_13))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17881)))));
        var_22 = ((/* implicit */short) arr_10 [4LL] [1LL]);
    }
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_23 [i_7] [i_7])))));
        var_23 = ((/* implicit */unsigned char) (unsigned short)33953);
        var_24 = ((/* implicit */_Bool) 870283082);
    }
    var_25 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)61));
    var_26 = ((/* implicit */int) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
}
