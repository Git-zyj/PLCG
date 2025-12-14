/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16643
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_8))))))))) + (min((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) var_3))))));
    var_13 = ((/* implicit */signed char) (~(max(((+(1961390684))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = var_1;
                var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (~(var_1))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)73))))) ? ((+(((/* implicit */int) var_3)))) : (min((((/* implicit */int) var_8)), (-1961390674)))))));
                var_16 = ((/* implicit */unsigned int) ((min((min((((/* implicit */unsigned long long int) var_3)), (var_1))), (((/* implicit */unsigned long long int) ((unsigned int) var_3))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))));
                var_17 &= max((((/* implicit */unsigned long long int) (-((-(var_2)))))), (((max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11332050631636308954ULL)) ? (arr_0 [i_0] [i_1]) : (var_0)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    var_18 |= ((/* implicit */unsigned char) ((short) ((signed char) var_5)));
                    var_19 = ((/* implicit */unsigned int) var_7);
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(signed char)5] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) var_2))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    var_20 ^= ((/* implicit */int) (signed char)-94);
                    arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) var_9))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_4);
}
