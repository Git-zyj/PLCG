/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152781
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
    var_12 = ((/* implicit */long long int) ((var_1) ? (max((((/* implicit */int) var_0)), (((1588380561) * (((/* implicit */int) (_Bool)0)))))) : (((((((/* implicit */int) (short)14663)) - (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((signed char) var_10)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_14 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */long long int) ((/* implicit */int) (short)17060))) & (-2768820297513296135LL))))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min(((signed char)-57), ((signed char)71))))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_10 [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 2257662885U)) && (((/* implicit */_Bool) (unsigned short)18751))))) >= (((/* implicit */int) (unsigned short)61785)))))));
                                arr_16 [i_1] [i_1] [i_3] [i_4] [i_3] |= ((/* implicit */_Bool) ((int) ((int) (signed char)52)));
                                arr_17 [i_1] [i_4] [i_2] [i_4] [i_5] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 4294967295U)) : (arr_11 [i_5] [i_5] [i_3] [i_5] [i_4 + 3])))) || (((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned char)229)) & (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_4))));
    }
    var_16 &= ((/* implicit */unsigned int) var_3);
}
