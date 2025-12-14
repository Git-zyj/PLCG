/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13476
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
    var_14 = ((/* implicit */unsigned long long int) (unsigned char)15);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 17435139743482878353ULL);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(arr_2 [i_1]))))));
        arr_7 [i_1] = (+(((((((/* implicit */int) (signed char)-81)) + (((/* implicit */int) (unsigned short)32767)))) + (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_0)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) <= ((((~(var_12))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((+(min((2305838611167182848ULL), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)14] [(unsigned char)14])))))) == (max((arr_9 [i_2] [(short)14]), (arr_9 [i_2] [18]))))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 18; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_2] [i_2]))));
                        var_18 |= ((/* implicit */signed char) var_11);
                        arr_20 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) arr_0 [i_4]);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((((/* implicit */int) ((arr_18 [i_2] [i_2] [i_2] [i_2]) != (((/* implicit */int) var_8))))) | ((+(((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))))), ((-2147483647 - 1)))))));
    }
}
