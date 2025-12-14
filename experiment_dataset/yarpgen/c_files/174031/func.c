/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174031
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6074053340802238214LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) (short)11505))))))) == (6074053340802238227LL)))), (arr_4 [i_1] [i_0])));
                arr_8 [(short)6] [(short)6] [(short)6] = ((/* implicit */signed char) min((var_2), ((unsigned char)255)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((min((min((((/* implicit */unsigned long long int) 4607182418800017408LL)), (3886988217327153123ULL))), (((/* implicit */unsigned long long int) -6074053340802238229LL)))) == (((/* implicit */unsigned long long int) var_3))));
    var_13 &= ((/* implicit */short) (-(max((((/* implicit */long long int) (short)11505)), (-3173814941139238511LL)))));
}
