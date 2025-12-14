/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110524
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */signed char) (-(var_2)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [14U])) | ((-((~(((/* implicit */int) var_9))))))));
                var_11 *= ((/* implicit */unsigned char) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (7886774854781268404ULL)))))));
                var_12 = ((/* implicit */unsigned int) ((_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1726884119)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_0);
}
