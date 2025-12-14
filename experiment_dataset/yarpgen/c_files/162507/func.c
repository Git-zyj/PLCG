/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162507
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
    var_19 = ((/* implicit */short) var_6);
    var_20 = var_0;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 |= ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1] [i_2]);
                    var_22 = (-(((int) -3720189910845865433LL)));
                    var_23 = ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1 + 3] [i_1])) < (((/* implicit */int) ((((/* implicit */_Bool) 3720189910845865433LL)) && (((/* implicit */_Bool) var_0)))))));
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)-3))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))));
                                var_26 |= ((/* implicit */unsigned short) arr_0 [i_0] [i_3 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
