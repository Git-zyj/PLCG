/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171647
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
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (773273880) : (((/* implicit */int) (signed char)-37))));
                            arr_10 [i_0] [i_0 - 1] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(arr_8 [i_0] [i_1] [i_3])))) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? (((/* implicit */long long int) 939524096)) : (arr_1 [8] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 1] [i_0 - 1] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (4792934856156100115LL))))));
}
