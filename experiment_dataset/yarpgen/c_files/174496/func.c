/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174496
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
    var_18 = ((/* implicit */int) var_2);
    var_19 = ((/* implicit */long long int) (+(((int) min((15), (((/* implicit */int) (signed char)-120)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(arr_7 [21ULL] [i_1 + 3] [i_0]))))));
                    var_21 *= ((/* implicit */unsigned short) (((+((~(((/* implicit */int) (short)7897)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0])) | (arr_1 [i_2] [i_0])))))))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)6] [i_1]))))))));
                    var_22 *= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [(short)5]);
                }
            } 
        } 
    } 
}
