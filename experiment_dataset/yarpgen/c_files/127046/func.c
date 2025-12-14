/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127046
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) (unsigned char)146);
                        var_19 = ((/* implicit */unsigned short) (-(var_13)));
                    }
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        arr_12 [(unsigned short)2] [i_1] [i_1] [i_4] &= (((-(arr_1 [i_1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) (signed char)24)))))));
                        arr_13 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_16)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 7; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_7 [(_Bool)1]))))));
                                arr_19 [i_0] [i_0] [(short)3] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 - 2])) & (((/* implicit */int) arr_7 [i_1 - 1]))))) ? (((((/* implicit */int) arr_7 [i_1 - 2])) * (((/* implicit */int) arr_7 [i_1 + 2])))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_6))), (((/* implicit */unsigned long long int) (unsigned char)229))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (unsigned char)220)) << (((min((var_16), (var_1))) - (8673914510936519491ULL)))))));
}
