/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187015
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = arr_0 [i_1 + 2];
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_11 ^= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) + (1149442426882954890LL))) >> (((min((min((arr_0 [i_0]), (1149442426882954890LL))), (min((1149442426882954890LL), (-1149442426882954891LL))))) + (1149442426882954923LL)))));
                            var_12 ^= ((/* implicit */signed char) arr_2 [i_0]);
                            arr_10 [i_0] [i_1] [i_2 + 2] = ((long long int) (!(((-1149442426882954894LL) <= (((/* implicit */long long int) arr_9 [8LL] [12LL] [i_2] [8LL] [8LL] [8LL]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 ^= ((((/* implicit */_Bool) min((((long long int) var_8)), (var_5)))) ? (min((((/* implicit */long long int) 118661993U)), (var_8))) : (((/* implicit */long long int) var_6)));
}
