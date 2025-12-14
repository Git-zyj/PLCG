/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175078
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
    var_20 = ((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_0 + 1])))));
                    arr_11 [i_2] [i_1] [i_1] = (~((~(((/* implicit */int) (unsigned char)71)))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1]))) : (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))));
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32701))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) var_2);
                                arr_19 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_0] [i_3] [i_2] [i_0] [i_4] [i_2]) : (((/* implicit */long long int) ((int) var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) ((unsigned short) ((unsigned int) (unsigned short)14631)));
        var_24 = ((/* implicit */unsigned char) (~(var_19)));
    }
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
    {
        arr_23 [i_5 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_17))) ? (((/* implicit */int) arr_21 [i_5 + 1])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_5 + 1]))))));
        var_25 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2287145281U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))));
    }
    var_26 = ((/* implicit */short) var_1);
}
