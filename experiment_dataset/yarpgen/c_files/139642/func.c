/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139642
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
    var_10 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */signed char) min((min((4294967291U), (((/* implicit */unsigned int) var_3)))), (((arr_4 [i_1 - 2] [i_1] [i_1 - 1]) - (arr_4 [i_1 - 2] [19ULL] [i_1 - 2])))));
                    var_12 -= ((/* implicit */_Bool) ((((((/* implicit */long long int) -1519114151)) - (arr_8 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 3]))) - (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (26U))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_3] [21LL])) - (((/* implicit */int) arr_5 [i_3] [i_3])))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) != ((~(var_2)))));
        var_15 = ((((/* implicit */int) (unsigned short)11509)) | (((/* implicit */int) var_9)));
    }
}
