/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183347
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(0))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(0)))) ? (-1) : ((~(((/* implicit */int) (_Bool)1)))))) / (4)));
                    var_21 = arr_0 [i_0] [i_1];
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) 0);
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            var_23 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_3 - 1]))));
            var_24 = ((/* implicit */short) max((((long long int) 3430258092912622506LL)), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)71)))))));
        }
        var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) <= ((-(8268444066476756999LL)))));
    }
}
