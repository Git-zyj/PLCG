/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118476
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
    var_12 -= ((/* implicit */unsigned long long int) min((var_0), (-1328832080301909375LL)));
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) min((min((3618478162U), (4294967293U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_0])))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) (~(-397364097)))) : (min((1328832080301909375LL), (((/* implicit */long long int) 4294967293U))))))));
            }
        } 
    } 
    var_15 += ((unsigned char) ((((/* implicit */_Bool) 8191)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (var_9)))))));
}
