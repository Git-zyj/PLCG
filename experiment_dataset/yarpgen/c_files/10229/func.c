/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10229
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
    var_18 = max((((/* implicit */long long int) ((unsigned short) var_12))), (var_16));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((((long long int) (short)3679)) | (((arr_3 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                var_19 += ((/* implicit */unsigned long long int) arr_0 [i_1]);
                arr_5 [4U] [i_1] = ((/* implicit */unsigned char) min((min((var_6), (((/* implicit */long long int) (short)-30946)))), (((/* implicit */long long int) ((signed char) arr_0 [i_0])))));
                var_20 *= ((/* implicit */signed char) var_1);
                var_21 &= min((1537969306512393058ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 2461706762U)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_23 = ((/* implicit */short) min((((long long int) (~(921750067)))), (((/* implicit */long long int) var_14))));
}
