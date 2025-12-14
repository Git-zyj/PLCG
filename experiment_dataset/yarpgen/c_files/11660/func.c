/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11660
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
    var_10 = ((/* implicit */int) min((((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)155))))), (((((/* implicit */_Bool) (short)-23708)) ? (-1LL) : (((/* implicit */long long int) 3065646838U))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) arr_4 [i_0] [i_2] [i_2]);
                                var_12 = min((((/* implicit */long long int) (!((_Bool)0)))), (((((/* implicit */_Bool) -852108681)) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3244))))));
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1]))))) > (((27LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-43))))))));
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
    var_16 = ((/* implicit */int) var_1);
}
