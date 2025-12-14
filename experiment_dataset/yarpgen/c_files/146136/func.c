/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146136
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
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) arr_3 [i_0] [i_1]);
                arr_6 [i_0] [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */short) ((min((4772473748748195999LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))) << (((((/* implicit */int) arr_4 [i_0] [i_1])) + (9974)))))) : (((/* implicit */short) ((min((4772473748748195999LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))) << (((((((/* implicit */int) arr_4 [i_0] [i_1])) + (9974))) - (34696))))));
                arr_7 [i_0] [i_1 - 1] [i_1] = ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (long long int i_3 = 4; i_3 < 15; i_3 += 2) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_3] [i_3])), (((long long int) var_11)))))));
                    arr_14 [i_2] [i_2] [i_3] [i_2] = 1717629898839480628LL;
                }
            } 
        } 
    } 
}
