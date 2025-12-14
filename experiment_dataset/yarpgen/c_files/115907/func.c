/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115907
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
    var_19 = ((/* implicit */long long int) var_11);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (short)0)) < ((~(((/* implicit */int) (unsigned char)246)))))))));
    var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [2] [i_2] |= ((/* implicit */unsigned short) var_4);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_14 [i_4 - 3] [i_1 + 1] [i_0 - 2] [i_4 - 3] [3] [i_1])) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (arr_13 [i_0 - 2] [i_1] [i_2] [i_3] [i_4]))))));
                                var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((1260693509U), (((/* implicit */unsigned int) (unsigned short)65527))))) ? (((/* implicit */int) (signed char)-1)) : (var_3))), (((/* implicit */int) ((1073610752) == (((/* implicit */int) (unsigned short)46843)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_1])))) - (((var_15) / (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))));
                    arr_16 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_12 [i_2] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((var_14), (var_0))))))) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                }
            } 
        } 
    } 
}
