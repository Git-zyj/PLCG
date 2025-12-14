/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187451
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (-(arr_1 [i_1 + 1] [i_0])));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8026101957630018331ULL)))))) > (arr_1 [i_0] [i_0])));
                    var_17 = ((/* implicit */unsigned short) (+(10420642116079533285ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                arr_11 [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((max((8026101957630018331ULL), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_3] [i_4])))) > (((/* implicit */unsigned long long int) arr_7 [i_3 + 1]))))), (arr_9 [i_4] [i_3 + 2] [i_3])));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3 - 1] [i_4] [i_4]))))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_3])), (var_10))) : (((/* implicit */unsigned long long int) max((arr_9 [i_3] [i_4] [i_4]), (((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_4]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) var_12)) : (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((10420642116079533285ULL) | (((var_8) ^ (10420642116079533295ULL))))))));
}
