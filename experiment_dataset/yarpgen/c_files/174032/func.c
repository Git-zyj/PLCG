/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174032
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
    var_15 = ((/* implicit */unsigned short) (signed char)-57);
    var_16 -= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)-50))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)66)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)115)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))));
                            var_18 &= ((/* implicit */short) (+(((/* implicit */int) (short)1))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_3))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2692911997363999403LL)))))));
                arr_13 [i_0] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) var_14)))));
            }
        } 
    } 
}
