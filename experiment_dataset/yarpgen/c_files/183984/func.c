/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183984
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)66)))), (((((/* implicit */int) arr_7 [i_1] [i_1])) | (((/* implicit */int) (unsigned short)20485)))))))));
                    arr_9 [6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_6 [10U] [(_Bool)1] [i_0 - 1])) : (((/* implicit */int) (short)-12525))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) arr_7 [i_1] [i_0]))))) : (((arr_0 [i_0 + 1]) << (((arr_0 [i_2]) - (3964786718U))))))), (((((/* implicit */_Bool) (-(1459975519)))) ? (max((((/* implicit */unsigned int) (short)15)), (arr_0 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15)))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_8 [i_2]);
                    var_11 |= (-9223372036854775807LL - 1LL);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) 9223372036854775807LL);
}
