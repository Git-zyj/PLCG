/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115422
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)181)) ? (1707756708U) : (2997533281U))) - (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) min(((unsigned short)28772), (((/* implicit */unsigned short) (short)-11267)))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_5 [i_0] [i_1] [0ULL])))))) * (((((/* implicit */int) (signed char)-101)) - (((/* implicit */int) (signed char)127))))));
                    arr_7 [i_0 - 1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) 2147483647)), (3118604149U)))));
                    var_16 = ((/* implicit */signed char) ((unsigned char) (+(max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))));
                    arr_8 [i_0] [i_0] [i_2 - 3] = ((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_0])), (((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) arr_5 [18LL] [18LL] [i_2]))))))));
                }
                var_17 = ((/* implicit */unsigned char) arr_2 [i_0]);
                var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) 0ULL)))));
            }
        } 
    } 
}
