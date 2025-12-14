/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164591
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
    var_18 &= ((/* implicit */unsigned int) (signed char)63);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) (signed char)-63)))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) var_3)))))) << (((((/* implicit */int) (signed char)57)) - (44)))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) var_6);
            var_22 &= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
            var_23 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1]))));
        }
        for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            var_24 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))))))))) + (var_9));
            arr_7 [i_2 + 2] &= ((/* implicit */unsigned short) var_14);
        }
        var_25 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_26 += ((/* implicit */unsigned char) arr_2 [i_3] [i_3]);
        var_27 *= ((/* implicit */signed char) (short)-32760);
    }
}
