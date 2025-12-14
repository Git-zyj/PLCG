/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127716
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((unsigned short) (signed char)-10));
                    var_14 = (short)-23179;
                    var_15 = ((/* implicit */unsigned char) arr_2 [i_1]);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_12)))))) != (((((/* implicit */_Bool) (short)23179)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0])))))));
    }
    var_17 = ((/* implicit */int) 9223372036854775796LL);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_7))));
    var_19 = ((/* implicit */int) (((~(((/* implicit */int) var_4)))) != ((-((-(((/* implicit */int) (short)23176))))))));
}
