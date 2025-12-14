/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168002
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
    var_18 = ((((/* implicit */int) var_7)) / ((-(var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((int) var_14);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) < (((/* implicit */int) (signed char)3)))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_1 [i_2] [i_1]);
                    arr_6 [i_2 - 1] = (!(((/* implicit */_Bool) arr_2 [i_2 - 2] [4] [4])));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (32172)))));
        arr_7 [i_0] = ((long long int) (unsigned short)20155);
        arr_8 [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_4 [i_0] [i_0] [i_0]));
    }
    var_23 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_4)), (var_11)));
    var_24 = ((/* implicit */unsigned short) var_4);
    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)180)) ^ (((/* implicit */int) (unsigned short)48785)))))));
}
