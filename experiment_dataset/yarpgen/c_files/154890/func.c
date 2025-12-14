/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154890
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
    var_14 = ((/* implicit */unsigned char) (unsigned short)14447);
    var_15 *= ((/* implicit */unsigned char) max((((((/* implicit */int) var_10)) >> (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) (((!((_Bool)0))) && (((/* implicit */_Bool) var_2)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 2]))))), (arr_4 [i_0 + 2] [i_0 + 2])));
                    var_16 = ((/* implicit */long long int) 10905280201430183624ULL);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)50757)) ? ((-(((/* implicit */int) var_10)))) : (max((var_2), (((/* implicit */int) var_5))))))));
}
