/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177332
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
    var_18 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (arr_4 [i_0] [i_1] [i_2])))))))));
                            var_20 = arr_5 [i_0] [i_1] [i_2];
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (33554431ULL)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12769)) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (min((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_1] [i_1] [i_0])))));
                var_23 ^= (+(((((/* implicit */_Bool) (+(10226679960893109137ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2124740709147307484ULL)))))) : (15ULL))));
            }
        } 
    } 
}
