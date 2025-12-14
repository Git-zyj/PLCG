/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122431
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
    var_16 += var_13;
    var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */int) (unsigned char)6)), (((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? ((+(2914439575U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (short)11314)))))));
                    var_18 = ((/* implicit */long long int) ((unsigned short) (unsigned short)47036));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44776))) : (18446744073709551615ULL)));
                        var_20 = ((/* implicit */unsigned char) var_13);
                        arr_11 [i_0 - 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((max((var_9), (var_9))), (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                        var_21 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) arr_0 [i_0])), (arr_4 [(signed char)11] [i_0 - 1] [i_1])))));
                    }
                }
            } 
        } 
    } 
}
