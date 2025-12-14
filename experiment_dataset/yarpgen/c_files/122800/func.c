/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122800
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
    var_14 ^= ((/* implicit */_Bool) ((var_13) % (var_4)));
    var_15 = ((/* implicit */unsigned char) (+(max((13591069801668222777ULL), (((/* implicit */unsigned long long int) 4294967277U))))));
    var_16 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 |= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [5ULL] [i_1])), (arr_3 [i_0] [i_1 + 1] [i_1])));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1 - 3] [i_1 - 3] [i_0] [i_2] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)217)), ((+(var_4))))))));
                            arr_13 [i_0] [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 11697235148401336026ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1412308392U)) && ((_Bool)1)))) : (((/* implicit */int) (unsigned char)165)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (((/* implicit */long long int) 1412308392U))))))))));
                        }
                    } 
                } 
                arr_14 [9U] [i_0] [i_1] = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) ((arr_4 [i_1 - 3] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7566)))))), ((~(var_12)))))));
                var_19 |= max(((((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 - 1])))) ? (((((/* implicit */_Bool) (unsigned char)34)) ? (8910416404372591376ULL) : (((/* implicit */unsigned long long int) 1040187392U)))) : (14259116234874719699ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((3440302063U), (((/* implicit */unsigned int) (_Bool)1))))), (((long long int) (_Bool)1))))));
            }
        } 
    } 
}
