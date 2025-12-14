/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157915
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) var_17))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_3)))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) (short)31744)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) var_11);
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) * (var_1)));
            var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */int) (short)32764)) % (((/* implicit */int) arr_2 [i_0]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */unsigned short) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_17 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((var_1) != (var_8)))));
                var_24 = ((/* implicit */short) ((arr_11 [i_0] [i_3] [i_4]) < (arr_11 [i_0] [i_3] [i_4])));
            }
        }
    }
    var_25 *= ((/* implicit */short) var_7);
    var_26 = ((/* implicit */signed char) var_5);
    var_27 ^= ((/* implicit */short) (+(134799627U)));
}
