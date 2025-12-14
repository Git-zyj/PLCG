/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113562
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(max((var_14), (((/* implicit */unsigned long long int) var_10)))))))));
    var_19 = ((/* implicit */unsigned char) min((min((var_4), (10118002838100159963ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)35662)), (var_0)))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_2)))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)202)) & (((/* implicit */int) var_9)))) << (((((var_4) * (var_4))) - (12994089116515460064ULL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_3)) != ((+(((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_1])) * (arr_1 [(unsigned short)7]))))));
                var_21 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -158010818)), (var_14))))))), (arr_0 [i_1 - 2]));
                arr_8 [i_1] [i_1 - 2] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_0 - 1])), (max((arr_0 [i_1 - 2]), (var_6))))) * (((/* implicit */unsigned int) var_8))));
                arr_9 [i_1] [i_1 - 1] [i_1 + 1] = ((/* implicit */unsigned short) min((var_8), (max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_2 [6ULL] [i_1])))), (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
}
