/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119276
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (+(min(((+(((/* implicit */int) arr_1 [10ULL])))), (1396847070)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned int) arr_0 [i_0])))))));
                            var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = max(((short)1536), (((/* implicit */short) (_Bool)1)));
}
