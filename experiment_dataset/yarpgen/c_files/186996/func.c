/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186996
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
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (signed char)-114)))), (((((/* implicit */_Bool) 1023ULL)) ? ((~(((/* implicit */int) var_1)))) : (min((var_10), (((/* implicit */int) var_13))))))));
    var_18 &= ((/* implicit */unsigned char) (~(var_3)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)113)) < (-101266704))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)158))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_2])) <= (((/* implicit */int) ((((unsigned int) var_5)) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_3] [i_4])) : (((/* implicit */int) var_14))))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12646)) ? (((((/* implicit */_Bool) (signed char)-114)) ? (136182659U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))))) : ((+(2240122426U)))))) || (((/* implicit */_Bool) (signed char)2))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) ((unsigned char) (_Bool)0));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23486))))))) ? ((-(((/* implicit */int) (short)3840)))) : (((/* implicit */int) (short)0))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)365)) ? (((/* implicit */int) (unsigned short)12658)) : (((/* implicit */int) (short)6144))))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((signed char) var_11)))));
}
