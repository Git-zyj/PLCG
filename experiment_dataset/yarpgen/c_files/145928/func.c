/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145928
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
    var_11 = var_4;
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) (unsigned short)65535);
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)155)) | (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_16 = (unsigned short)31972;
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)7)), (max((((long long int) arr_9 [i_1] [i_2] [i_1] [i_3])), (((/* implicit */long long int) arr_10 [i_3]))))));
                    var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_3 - 2] [i_3 - 2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [0LL] [i_3 - 2]))))));
                }
            } 
        } 
    } 
    var_19 ^= var_7;
}
