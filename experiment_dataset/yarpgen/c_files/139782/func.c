/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139782
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) (unsigned short)54622);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1] [18U] |= ((/* implicit */short) ((_Bool) (-(arr_7 [i_1 - 1]))));
                                arr_19 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? (-1410311228) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1] [i_4 - 1])))));
                                var_13 = ((/* implicit */unsigned int) max((var_13), ((-(((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (arr_4 [i_1 + 1] [4U] [i_1 + 1]) : (arr_4 [i_1 + 1] [(unsigned char)12] [i_1 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_8) - (11471954363289383671ULL))))) % (((/* implicit */int) (unsigned char)168))))) ? (((/* implicit */int) ((_Bool) ((int) var_9)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (var_6)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) var_9)))))));
    var_15 *= var_4;
    var_16 -= (+(((var_5) ? (((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)-96))))) : (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)47)))))));
}
