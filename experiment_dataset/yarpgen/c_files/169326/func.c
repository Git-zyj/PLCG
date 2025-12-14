/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169326
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
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((int) 1652614160U)))));
                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_1 - 4] [i_0 + 1])) : (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0 - 2]))))))) ? (((/* implicit */int) min((arr_3 [i_0 + 1]), (arr_1 [i_0] [i_0 - 2])))) : ((-(((/* implicit */int) (signed char)118))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (var_12)))))), (((((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0 - 2]) : (var_6))) << (((((((/* implicit */_Bool) 2642353165U)) ? (var_10) : (2642353136U))) - (3165131167U))))))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((+(((((/* implicit */long long int) arr_5 [i_0] [i_0 + 1] [i_1])) + (var_1))))))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_5))))));
        var_19 ^= ((/* implicit */signed char) ((short) var_2));
    }
    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 2) 
    {
        var_20 = ((/* implicit */long long int) 1652614159U);
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_4 [i_3] [i_3])))) ? ((-(((/* implicit */int) (signed char)-54)))) : (((/* implicit */int) ((arr_4 [i_3] [i_3 - 3]) >= (var_1)))))))));
    }
    var_22 ^= ((/* implicit */unsigned char) min((min((((var_9) >> (((var_9) - (8869182793012944874LL))))), (((/* implicit */long long int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))), (((/* implicit */long long int) var_2))));
}
