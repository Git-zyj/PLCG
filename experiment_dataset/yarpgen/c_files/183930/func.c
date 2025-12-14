/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183930
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (-3022987947293293444LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned short)27913)) : (((/* implicit */int) (unsigned char)255))))))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_4] = ((/* implicit */unsigned short) ((long long int) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)16380), (((/* implicit */unsigned short) (unsigned char)48)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_2);
    var_19 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-28575))))), (((long long int) 65011712U))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-29251)) : (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))) : (var_8)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10))) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
}
