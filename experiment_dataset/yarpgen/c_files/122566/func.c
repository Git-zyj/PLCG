/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122566
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) (unsigned short)65535))));
    var_16 &= var_7;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)42)) >> (((arr_1 [9LL]) - (16858738242044823454ULL)))))))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [i_2] [i_2])) | (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1]))));
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_0 [i_1 + 3] [i_1 + 3]), (((/* implicit */unsigned long long int) 1837555064U)))), (((/* implicit */unsigned long long int) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2])) ? (arr_4 [i_1] [i_1] [i_1 + 2]) : (3495543990U)))) : (max((arr_0 [i_1 - 3] [i_1 - 3]), (arr_0 [i_1 - 1] [i_1 + 3])))));
                    arr_9 [i_0] [i_0] [i_0] &= (-2147483647 - 1);
                }
            } 
        } 
    } 
    var_18 = var_3;
}
