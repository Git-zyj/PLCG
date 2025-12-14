/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163579
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
    var_10 = ((/* implicit */long long int) (~(((/* implicit */int) ((max((-3204456359882712562LL), (((/* implicit */long long int) var_0)))) == (((((/* implicit */_Bool) 3204456359882712543LL)) ? (var_8) : (9223372036854775807LL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [6LL] [6LL] = ((/* implicit */int) ((unsigned int) (-(3204456359882712560LL))));
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((min((-3204456359882712590LL), (-4020573752257087848LL))), (((/* implicit */long long int) max(((short)32767), (((/* implicit */short) (signed char)45))))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [(signed char)10] [i_1] = ((/* implicit */unsigned long long int) ((int) min((-5030221222256208127LL), (((/* implicit */long long int) arr_0 [i_1])))));
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))) / ((-(var_8))))))))));
                    arr_13 [i_1] [i_2] = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) 536870912))))))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((~(-184235037))) / (((/* implicit */int) (signed char)-108))))), ((~(min((((/* implicit */unsigned long long int) var_4)), (arr_6 [i_1] [i_1] [i_1])))))));
    }
    var_13 = var_6;
}
