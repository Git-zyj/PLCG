/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129527
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) min((max((((/* implicit */signed char) var_1)), (var_7))), (((/* implicit */signed char) ((_Bool) (_Bool)1)))))) * (((/* implicit */int) (signed char)(-127 - 1)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 7287638798468655671LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1 + 1])))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_7 [i_0] [i_2] [4U] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) / (arr_3 [i_2]));
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_13 [i_4] [i_3] [i_2] [3ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-108)) / (((/* implicit */int) (signed char)-127))));
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) -1088454818426322454LL)))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((long long int) (signed char)(-127 - 1)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))) : (((arr_3 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3281260292U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned short)65535))))) : ((+(964628339U)))));
        arr_17 [i_5] = ((/* implicit */short) -1870000946653262094LL);
    }
}
