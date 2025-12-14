/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148954
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-14)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)23))))))) ? (((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1])) : (((/* implicit */int) (short)-3494)))) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) var_5)))))));
                                arr_10 [i_0] [i_1] [i_1] [i_2 - 2] [i_2] [i_4] [i_4] = arr_1 [i_2] [i_3];
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) >> (((/* implicit */int) ((((/* implicit */int) (short)-6128)) < (((/* implicit */int) (short)-6043))))))) < (((/* implicit */int) (short)-3503))));
                    var_13 = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_8);
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)3494))));
    var_16 = ((/* implicit */unsigned char) (unsigned short)3437);
}
