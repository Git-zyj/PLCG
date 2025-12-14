/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114599
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */unsigned long long int) -1)) : (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) < (((/* implicit */int) var_1))))))))) ? ((+(arr_3 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) == (((/* implicit */int) arr_0 [i_0 + 2] [i_0])))))));
                arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-((~(arr_2 [i_0 + 3] [i_0]))))))));
                arr_6 [i_0] [i_1] [i_0] = ((unsigned int) ((max((0U), (564407707U))) < (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)29)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((max((arr_2 [i_0 + 2] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)71)) ? (var_5) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_9)) >> (((16383U) - (16383U))))) : (((/* implicit */int) ((459138240U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_11 += ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) max((((/* implicit */short) ((signed char) 1812301622U))), (max((var_1), (var_4))))))));
}
