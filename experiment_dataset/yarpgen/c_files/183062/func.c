/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183062
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min(((short)-1), ((short)13)))) : (var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = ((/* implicit */int) (short)-23);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_3)));
                arr_4 [8] [8] = (short)-26;
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_16 = ((unsigned short) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2 - 2] [i_3 - 1]))));
                            var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) var_6))))) || (((/* implicit */_Bool) ((unsigned char) var_1))))) ? (min((2981440210U), (arr_8 [i_3] [i_3 + 3] [i_2 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2004068382U) << (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))))))));
                            var_18 = ((((/* implicit */_Bool) 1313527069U)) ? (((/* implicit */unsigned int) -2067349045)) : (4294967294U));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((2346144632U), (min((min((((/* implicit */unsigned int) (unsigned char)9)), (45677851U))), (2769256444U))))))));
            }
        } 
    } 
}
