/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157613
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0])) || (((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1]))))) << (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                {
                    var_12 *= ((/* implicit */short) (_Bool)1);
                    var_13 = min(((_Bool)1), ((_Bool)1));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_6 [i_2 + 3])), (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 + 3])) | (((/* implicit */int) arr_6 [i_2 + 3])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)1))))))));
}
