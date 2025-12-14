/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137729
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                var_11 = ((/* implicit */short) (+(((((/* implicit */long long int) var_1)) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (8646749240583998424LL)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1951317132)) ? (1693146811U) : (2601820484U)))) == (((((/* implicit */_Bool) var_2)) ? (((-474283408314804641LL) + (((/* implicit */long long int) 2601820485U)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((min((474283408314804640LL), (474283408314804640LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_9 [i_0])), (var_8))) + (((/* implicit */long long int) 2601820488U))))), (var_2))))));
                                var_15 |= ((/* implicit */unsigned int) (~(((-474283408314804645LL) | (((4095LL) | (((/* implicit */long long int) 1693146811U))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(-322311111)))) + (var_2))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-32738)) - (((/* implicit */int) var_5))))) - (var_8))))));
    var_17 = ((/* implicit */unsigned char) var_5);
    var_18 += ((/* implicit */int) var_4);
    var_19 = ((/* implicit */_Bool) min(((+(var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((474283408314804621LL) & (-2072920934269449120LL)))))))));
}
