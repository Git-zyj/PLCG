/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178549
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
    var_17 = ((/* implicit */short) min((max((((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25197))))), (var_16))), (((/* implicit */unsigned long long int) min((((int) var_3)), (((/* implicit */int) (unsigned short)63788)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 + 2]))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 64512))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [7U]))) ? (((((/* implicit */_Bool) (short)26299)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2199022993408LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])))))) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (signed char)48))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_3 + 2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [(short)5] [i_3])) : (((/* implicit */int) var_10))))) : (min((((/* implicit */unsigned long long int) (short)-2048)), (arr_3 [i_0])))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2 + 1]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) min((arr_5 [i_0] [(short)7]), (((/* implicit */unsigned short) (short)-2922))))) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))) ? (2199022993411LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                            arr_12 [i_0] [i_1] [i_2 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(-1985452424)))) < (-2199022993412LL)));
                            var_21 = ((/* implicit */short) max((var_21), (((short) ((((/* implicit */_Bool) ((int) var_14))) ? (max((((/* implicit */unsigned long long int) (short)-2922)), (var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned char)251))))))))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_0]);
            }
        } 
    } 
}
