/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161133
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
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2681347025U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26091))) : (876063943U)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) << (((((/* implicit */int) (short)-1626)) + (1646)))))) ? (min((arr_2 [(signed char)11]), (((/* implicit */unsigned long long int) 1879311040U)))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) var_2))))))))));
                    var_21 = ((/* implicit */unsigned short) var_10);
                    arr_8 [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) 788425861);
                }
            } 
        } 
    } 
}
