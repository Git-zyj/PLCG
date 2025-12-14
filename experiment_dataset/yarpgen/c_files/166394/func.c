/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166394
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
    var_20 -= ((/* implicit */unsigned long long int) (((((+(848493548))) != (((/* implicit */int) (signed char)84)))) ? (var_11) : (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) (unsigned char)211))))) ? (var_12) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-68)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) - ((-(((/* implicit */int) (unsigned short)0)))))));
                                var_22 = ((/* implicit */long long int) ((12435499173353291478ULL) == (min((max((((/* implicit */unsigned long long int) var_4)), (arr_8 [i_0 - 3] [i_2] [i_0 - 3]))), (((/* implicit */unsigned long long int) arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_0]))))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3] [i_4 - 2])) ? (arr_3 [i_1] [i_0] [i_2]) : (var_2)))) || (((/* implicit */_Bool) (-(arr_5 [i_0 - 2] [i_0 - 2] [i_4 + 2])))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(arr_2 [i_0 - 3] [i_0 - 3])));
                    var_24 = ((/* implicit */long long int) arr_2 [i_0 - 2] [i_0 - 2]);
                }
            } 
        } 
    } 
}
