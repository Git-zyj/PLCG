/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179089
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6)))))))));
    var_18 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4577745521568729176ULL)))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(-983878787))))));
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4179592523U)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) (+((~(arr_12 [i_2] [i_2] [i_3] [i_3])))));
                    var_22 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) var_11))))));
                    var_23 = min((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_2] [i_3])) : (arr_12 [i_1] [i_2] [(short)7] [i_3]))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (arr_12 [i_1] [i_2] [i_3] [i_1]) : (((/* implicit */int) arr_3 [i_1])))))), (min((((((/* implicit */_Bool) 983878786)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (_Bool)1)))), ((-(-192257466))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((-983878787) % (((/* implicit */int) (short)-8521))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_4]))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_25 [i_4] &= var_11;
                        arr_26 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_20 [i_4]);
                        arr_27 [i_5] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_5] [i_5])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_4]))))) : (((602809663U) / (((/* implicit */unsigned int) -983878796))))));
                    }
                    var_26 = ((/* implicit */unsigned char) 6255951854083913260ULL);
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        var_27 &= ((/* implicit */unsigned long long int) (short)0);
        arr_30 [(short)23] = ((/* implicit */short) (((((+(((/* implicit */int) arr_28 [i_8])))) & (((/* implicit */int) (unsigned char)102)))) >> (((((/* implicit */int) min((min(((short)-23441), (((/* implicit */short) arr_29 [i_8] [i_8])))), (((/* implicit */short) (_Bool)1))))) + (23463)))));
        var_28 = ((/* implicit */unsigned short) (+(3692157639U)));
        arr_31 [13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)20161))));
    }
}
