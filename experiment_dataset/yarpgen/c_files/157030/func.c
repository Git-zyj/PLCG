/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157030
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) ((unsigned char) (+(max((var_8), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))));
                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) (unsigned char)83)))), (((/* implicit */int) max((var_3), (((/* implicit */short) (_Bool)1)))))))) || (((/* implicit */_Bool) max((arr_2 [i_0] [5U] [i_0 - 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (3657784002U)))))))));
                var_19 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)95)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1])))))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) -7320661072527762836LL))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) -1187251444121744171LL)))))));
    var_22 -= ((/* implicit */unsigned long long int) ((unsigned char) var_9));
}
