/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151586
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
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-48)) & (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (short)5341)))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)21050), ((unsigned short)22736)))))));
    var_18 = ((((/* implicit */int) (unsigned char)225)) == (((/* implicit */int) (unsigned char)11)));
    var_19 |= ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [(unsigned short)8] [i_0] [i_1] [i_2] = (_Bool)1;
                    arr_8 [i_0] = ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)245))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_1]) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : ((-((-(var_3)))))));
                    arr_10 [i_1] [i_2] [i_0] = (((+((-(arr_2 [i_2]))))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7))) != (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9)))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9)))))))));
}
