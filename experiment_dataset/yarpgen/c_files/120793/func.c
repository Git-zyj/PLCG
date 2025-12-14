/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120793
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0 + 2] [i_1] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2])), (var_16)))) ? (((/* implicit */int) arr_6 [2ULL] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_1])))), (((((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 2] [i_0 + 1])) * ((-(((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2]))))))));
                    arr_9 [(_Bool)1] [(_Bool)1] [(unsigned short)2] [10U] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) arr_4 [i_0]))))))), ((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0 + 2] [i_0 + 2] [i_3] [i_4] = ((/* implicit */short) (~(max((((/* implicit */int) arr_4 [i_1])), (-1019080319)))));
                                arr_17 [i_1] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(max((arr_2 [i_0] [(short)4]), (((/* implicit */long long int) var_10))))))));
                                arr_18 [i_4] [i_2] [i_1] [i_0] = 2790929798321125148LL;
                            }
                        } 
                    } 
                    arr_19 [4] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35997)) << (((649007204U) - (649007196U)))))) ? (((/* implicit */int) ((_Bool) (~(var_0))))) : (((((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0])))) + (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_8);
}
