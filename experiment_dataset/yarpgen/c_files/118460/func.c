/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118460
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(11904801890287373982ULL)))) ? (2147483639) : (((/* implicit */int) (signed char)(-127 - 1)))))) + (var_4));
                var_17 = ((/* implicit */int) var_5);
                arr_7 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 551503435285444899ULL)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0]));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)244)) ? (551503435285444898ULL) : (6541942183422177633ULL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_12);
    var_21 += ((/* implicit */unsigned short) var_12);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (1544933588)))));
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11904801890287373964ULL))))))))));
}
