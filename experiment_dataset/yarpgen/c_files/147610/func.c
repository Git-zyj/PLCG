/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147610
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_1] [i_2 + 1] [i_4] [i_4] [i_4])) ? ((((_Bool)1) ? (((/* implicit */int) arr_6 [3] [(short)22] [3])) : (((/* implicit */int) arr_10 [i_0])))) : (((/* implicit */int) ((arr_4 [i_2] [i_1]) > (((/* implicit */int) (_Bool)1))))))) == (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (1ULL) : (arr_7 [i_0] [i_0]))) == (((/* implicit */unsigned long long int) var_3)))))));
                                var_14 *= ((/* implicit */short) (unsigned char)3);
                                arr_15 [i_0] [i_1] [i_2] [(unsigned short)13] [i_2] = ((/* implicit */short) min(((~(((unsigned int) (unsigned char)8)))), (((/* implicit */unsigned int) max((((unsigned short) var_3)), (((/* implicit */unsigned short) min(((unsigned char)76), (((/* implicit */unsigned char) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_13 [i_2 + 1] [i_2] [i_1] [i_2] [i_0]), (((/* implicit */unsigned short) (unsigned char)248)))))));
                    var_16 = ((/* implicit */long long int) (((_Bool)1) ? (-1938801357) : (((/* implicit */int) (unsigned char)254))));
                    arr_16 [i_2] [i_1] [i_0] [i_2] = min((arr_9 [i_2] [i_1] [i_2 + 2] [i_0]), (max((arr_9 [i_2] [i_1] [i_1] [i_2]), (arr_9 [i_2] [i_0] [i_1] [i_2 + 1]))));
                    var_17 = ((((((/* implicit */_Bool) arr_1 [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (max((24ULL), (((/* implicit */unsigned long long int) var_3)))))) | (((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_2] [i_2]) / (((/* implicit */unsigned int) var_4))))) : (var_5))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned short) var_1);
}
