/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135862
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0)))) ? (((var_8) * (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) arr_8 [(signed char)1] [i_1] [i_2] [(signed char)1]))))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) (_Bool)1);
                    arr_13 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0]))) : ((+(((/* implicit */int) arr_0 [i_2] [i_2]))))))) ? (((/* implicit */unsigned int) ((max((arr_9 [i_0] [i_1] [i_2]), (((/* implicit */int) var_5)))) - (((/* implicit */int) arr_2 [i_2]))))) : ((-(var_4)))));
                    var_21 -= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32086))))) ? (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) -1029457677)) : (3615667667U)))) / ((-(18446744073709551615ULL))))) : (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
    var_23 = max((var_6), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    var_24 = ((/* implicit */unsigned char) var_9);
    var_25 = ((/* implicit */unsigned short) ((((var_17) + (2147483647))) << (((((int) var_18)) - (1653322719)))));
}
