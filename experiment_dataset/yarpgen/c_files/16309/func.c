/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16309
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) 897148568))))) * (((/* implicit */int) var_10)));
                    arr_9 [i_1] = ((/* implicit */long long int) -1264002331);
                }
            } 
        } 
        var_15 = ((/* implicit */int) var_10);
    }
    /* LoopNest 2 */
    for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */short) ((max((arr_14 [i_3] [i_3 - 3]), (((/* implicit */int) var_14)))) * (((/* implicit */int) ((((/* implicit */unsigned int) 1528039053)) == (((unsigned int) -1528039079)))))));
                arr_17 [i_4] [i_4] = ((/* implicit */long long int) var_10);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) var_4))))))));
    var_18 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-(-1516159108)))))))) : (var_3));
}
