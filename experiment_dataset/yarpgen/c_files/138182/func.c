/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138182
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
    var_10 = (unsigned char)137;
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [(_Bool)1])) : (max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) max(((unsigned char)102), (((/* implicit */unsigned char) arr_3 [i_0 - 1])))))))));
                    arr_8 [i_2 + 2] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-24)))), (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-124)) >= (((/* implicit */int) (unsigned char)3))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [(unsigned char)0])) : (((/* implicit */int) arr_4 [i_0]))))))));
                    var_11 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0)))) > (13104428806559839072ULL)));
                    arr_9 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_1 [i_0 + 3] [i_2 + 2])))) >> ((((+(((/* implicit */int) arr_3 [(unsigned char)4])))) & (((/* implicit */int) arr_5 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_0]))))));
                }
            } 
        } 
    } 
}
