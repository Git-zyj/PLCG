/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18383
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (287948901175001088ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-64)) ? (144114638320041984LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 3069537197U))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_1 [i_1])))));
                        var_13 = ((/* implicit */unsigned char) var_4);
                    }
                }
            } 
        } 
    } 
}
