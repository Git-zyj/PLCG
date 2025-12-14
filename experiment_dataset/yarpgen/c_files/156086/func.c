/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156086
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
    var_19 = ((/* implicit */unsigned char) max((2395396061U), (((/* implicit */unsigned int) (unsigned char)34))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)222)))))) - (var_7)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)96))))) : (min((2045818928U), (0U))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)231))));
                            var_22 = ((/* implicit */unsigned char) max((max((arr_7 [i_1] [i_1 + 1]), (73953137U))), (min((((/* implicit */unsigned int) (unsigned char)24)), (arr_7 [i_1] [i_1 + 1])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) min((var_23), (((min((((((/* implicit */_Bool) 264803481U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (4167521829U))), (((/* implicit */unsigned int) (unsigned char)1)))) * (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 - 2] [i_1 - 1])) ? (1462958564U) : (arr_8 [i_0] [i_0 - 2] [i_1 + 1] [i_1 + 1])))))));
                var_24 += ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 2])), (arr_8 [i_1 - 2] [i_0 - 1] [i_0 - 2] [i_0 + 1]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2] [i_0 - 1])))));
            }
        } 
    } 
}
