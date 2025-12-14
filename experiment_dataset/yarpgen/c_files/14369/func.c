/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14369
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
    var_17 = ((/* implicit */int) var_16);
    var_18 |= ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-2061023286207515856LL)))) ? (((((/* implicit */_Bool) 2975256597960707625LL)) ? (((/* implicit */int) (unsigned short)6413)) : (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17300)))))));
                var_19 += ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) > (-171881957)))) : ((~(var_2))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */int) var_15)) == (((/* implicit */int) var_3))))))) >> (((((((/* implicit */int) var_5)) & (((/* implicit */int) var_7)))) % (((/* implicit */int) (signed char)63))))));
                arr_7 [15LL] [i_1] = ((/* implicit */int) max(((unsigned short)17310), (((/* implicit */unsigned short) (signed char)11))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (-6193785917521093555LL) : (((/* implicit */long long int) 1324310947))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-3128490244856439562LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                                var_21 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37495))) : (var_6))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
