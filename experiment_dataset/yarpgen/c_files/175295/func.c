/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175295
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((2861453560U) % (2049615777U))))));
            var_11 = ((/* implicit */unsigned short) arr_2 [i_0]);
            var_12 = ((/* implicit */unsigned int) arr_2 [i_0]);
            var_13 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 2245351523U))))));
            var_14 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) -927836312);
            var_16 = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_0]);
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 6; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 7; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_4 + 2] [i_3 + 3])) >> (((((/* implicit */int) arr_9 [i_0] [i_4 + 2] [i_3 - 1])) - (24169))))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_4 [i_0]))) ? (4252494458U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3 + 3] [i_3 - 1] [i_4 - 3] [i_3 - 1] [i_3])))));
                    }
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)148)) && (((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_0] [i_5] [i_5]))));
            var_20 *= ((/* implicit */unsigned int) var_6);
        }
        var_21 &= ((/* implicit */unsigned long long int) arr_5 [4]);
        var_22 |= ((/* implicit */_Bool) var_6);
    }
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_23 = ((/* implicit */int) arr_19 [i_6]);
        var_24 ^= ((/* implicit */int) var_1);
    }
    var_25 = ((/* implicit */signed char) var_2);
    var_26 = ((/* implicit */unsigned int) var_7);
}
