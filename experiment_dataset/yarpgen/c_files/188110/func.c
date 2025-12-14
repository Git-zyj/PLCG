/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188110
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
    var_16 = ((/* implicit */unsigned int) (!(var_8)));
    var_17 = ((/* implicit */_Bool) var_5);
    var_18 += ((/* implicit */unsigned int) min((((/* implicit */long long int) var_13)), (((long long int) (!(((/* implicit */_Bool) (unsigned char)18)))))));
    var_19 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (4696952129402308682ULL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))));
                var_21 = ((/* implicit */_Bool) ((min((arr_4 [i_0] [2LL]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))))) - (((/* implicit */unsigned int) (((((+(((/* implicit */int) (short)-1)))) + (2147483647))) >> ((((~(((/* implicit */int) var_5)))) + (165))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_22 = ((/* implicit */signed char) (unsigned char)9);
                    var_23 = ((/* implicit */unsigned char) var_15);
                }
            }
        } 
    } 
}
