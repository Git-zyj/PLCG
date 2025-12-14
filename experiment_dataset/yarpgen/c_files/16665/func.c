/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16665
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (((!((_Bool)1))) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_12 [i_1 + 2] [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0 - 2]))))));
                            var_19 = ((((((/* implicit */int) (signed char)0)) < (((/* implicit */int) (signed char)-3)))) || (((/* implicit */_Bool) (+(((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [14LL] [i_3])) : (var_17)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)0)))) : (min((((/* implicit */unsigned int) var_16)), (4032U))))), (((/* implicit */unsigned int) (unsigned short)65535))));
                arr_13 [i_1] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_0 + 3]))))));
                var_21 ^= ((/* implicit */unsigned long long int) (((~(var_5))) != ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_1))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? ((~(3470432453210869516LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)19))))))));
}
