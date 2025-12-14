/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110575
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */int) (-(((unsigned int) ((long long int) 0U)))));
                        var_20 = ((/* implicit */unsigned int) arr_10 [i_1] [i_3]);
                    }
                    for (long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((-854117432631299496LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4 - 1] [i_1] [i_0])), (-30035678))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) (unsigned short)31214)) ? (((unsigned int) -8935867249221360313LL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (2737912066527637535ULL)))));
                        var_22 = ((/* implicit */unsigned int) ((arr_5 [i_2]) >> (((((/* implicit */int) (unsigned char)255)) - (244)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) 917433279U);
                        var_24 = ((/* implicit */unsigned char) (_Bool)1);
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_0]))) ? (((((/* implicit */_Bool) (unsigned short)55951)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55949))))) : (((/* implicit */unsigned int) arr_5 [i_0]))));
                        var_26 = ((/* implicit */unsigned int) arr_0 [i_0]);
                        arr_18 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 1793517224U))) ? (((unsigned int) -817178580)) : (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                    }
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4263484441U)))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) ((_Bool) ((long long int) ((((/* implicit */_Bool) 2737912066527637544ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6080693663903171534LL)))));
}
