/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163793
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), ((-(((/* implicit */int) (unsigned short)65535))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((/* implicit */int) (signed char)127)), (((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (arr_11 [0U] [i_2] [i_1] [0U])))) << (((var_16) - (var_16))))))))));
                                arr_14 [i_0] [i_1] [6ULL] [i_3] [i_0] = ((/* implicit */_Bool) max((min((var_15), (max((1149731198088973054ULL), (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) (((!(var_5))) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : ((-(((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) (~(arr_13 [i_0] [(signed char)14] [(signed char)4] [(signed char)14] [i_0] [i_0 - 3] [i_0 + 2])));
            }
        } 
    } 
    var_22 &= ((/* implicit */_Bool) (signed char)127);
}
