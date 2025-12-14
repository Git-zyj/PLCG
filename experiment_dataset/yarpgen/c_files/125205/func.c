/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125205
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
    var_11 = ((/* implicit */short) 4809117213197369307ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned char)8] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_2])), (((((((/* implicit */int) arr_1 [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_2])) + (111))))))))));
                    arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_0])))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))))))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (short)-15094)))))))) : ((+(((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2])) + (85))))))))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */int) max((max((var_2), (arr_3 [i_2]))), (((/* implicit */short) (signed char)97))))) != (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 2939351564U)))))))))));
                }
            } 
        } 
    } 
}
