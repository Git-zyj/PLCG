/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189250
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (17622924939715902903ULL))))), ((((!(((/* implicit */_Bool) (unsigned short)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))) : (arr_2 [i_0])))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)29651)))))), ((-(var_8))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) -1592502744)))));
}
