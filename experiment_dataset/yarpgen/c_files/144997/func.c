/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144997
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
    var_19 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) (unsigned char)217))), (min((((/* implicit */int) (unsigned char)49)), (1111519596)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(var_12))))))) ? (((/* implicit */unsigned long long int) ((long long int) var_15))) : (((((/* implicit */_Bool) max((var_0), (var_3)))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 2817974218268208866ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */long long int) ((unsigned short) max((var_17), (var_5))));
}
