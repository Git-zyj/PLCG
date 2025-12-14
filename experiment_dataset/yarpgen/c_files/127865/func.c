/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127865
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
    var_12 = ((/* implicit */unsigned short) ((_Bool) (signed char)12));
    var_13 = ((/* implicit */signed char) ((18380070480129326968ULL) - (((/* implicit */unsigned long long int) -7499953544215585715LL))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_10 [i_0] [i_1] [i_1 - 1] [i_0 - 1])))) ? (arr_7 [5LL] [i_1] [i_0]) : (((unsigned int) 497941919418415850ULL))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8030909989938619438ULL)) ? (18446744073709551615ULL) : (((arr_3 [i_1 - 1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_20 [i_6] [i_1] [i_1] [5] = ((/* implicit */signed char) arr_15 [i_6] [i_5] [i_1 - 1] [i_0]);
                            arr_21 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((arr_8 [i_0]) <= (((/* implicit */unsigned long long int) max((((int) 7499953544215585706LL)), (arr_10 [(_Bool)0] [i_1] [i_1] [i_1]))))));
                            var_16 = ((/* implicit */int) arr_8 [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
