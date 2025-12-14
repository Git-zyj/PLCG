/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100420
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
    var_14 -= ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 2711114061U));
        arr_4 [i_0] |= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_15 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (signed char)108))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
        var_16 = ((/* implicit */unsigned short) var_3);
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((unsigned short) 1306540641U));
        arr_9 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_1])), (((arr_6 [i_1]) >> (((((((/* implicit */int) (signed char)30)) + (((/* implicit */int) (signed char)-44)))) + (37)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) 2147483647))))))));
                        arr_18 [i_1] [i_1] = ((/* implicit */int) (~(((var_3) / (min((var_13), (((/* implicit */long long int) arr_11 [i_1] [i_2] [i_3]))))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))))) / (var_0)));
    }
}
