/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122903
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_7)))) * ((+(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((var_1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))));
    var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) min((max((((/* implicit */unsigned short) var_6)), (var_9))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (var_3)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) var_8);
                    arr_9 [i_0 + 3] [7ULL] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_5 [(_Bool)1] [9U] [9U])) ? (2147483647) : (((/* implicit */int) (short)(-32767 - 1))))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_2 + 3])))))), (((int) arr_4 [i_1 + 2] [i_2 - 2]))));
                    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_3))));
}
