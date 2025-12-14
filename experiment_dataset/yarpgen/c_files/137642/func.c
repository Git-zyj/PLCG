/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137642
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (var_7))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32540)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = (+((+(((/* implicit */int) (_Bool)1)))));
                                var_21 = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)2)))) > ((+(((/* implicit */int) var_9))))));
                                var_22 += (+(((arr_9 [i_3]) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)10489)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) 5233136151685624720ULL);
            }
        } 
    } 
}
