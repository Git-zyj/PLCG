/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129173
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
    var_12 = ((/* implicit */unsigned long long int) (unsigned char)186);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned short) (~(-765856594)));
                                arr_10 [i_2 + 3] [0] [i_2] [i_2 - 1] [i_2 - 2] [i_0] [i_2] = 1661909633;
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21562))))))));
                                var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12856)) ? (((/* implicit */int) (unsigned short)52679)) : (-1904655177)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34198)) ? (((/* implicit */int) (unsigned short)12884)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (11710505842755740365ULL)))));
                    var_17 = (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)216))))) ? (1152921504606846976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))));
                }
            } 
        } 
    } 
}
