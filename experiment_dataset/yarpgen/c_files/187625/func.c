/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187625
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
    var_15 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)59252))))), (var_0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) (~(max((arr_3 [i_1] [i_0] [10LL]), (((/* implicit */int) var_2))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (max((((/* implicit */long long int) arr_9 [i_3 - 3] [i_2 - 3] [i_1] [i_1])), ((-(((((/* implicit */_Bool) 119526134362216176LL)) ? (((/* implicit */long long int) var_13)) : (-119526134362216176LL)))))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (signed char)-11))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (long long int i_6 = 4; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_4 + 2] [i_6 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (var_1))));
                                var_20 = ((/* implicit */long long int) max((var_20), (max((((long long int) min((((/* implicit */long long int) var_12)), (4836346132580234811LL)))), ((+(4836346132580234811LL)))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(arr_1 [i_0]))))));
            }
        } 
    } 
}
