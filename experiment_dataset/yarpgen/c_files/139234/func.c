/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139234
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [5LL] [6ULL] [i_2] [(unsigned char)10] [i_2]);
                                var_20 = ((/* implicit */signed char) ((arr_10 [i_2] [i_3] [i_3] [i_2] [i_1] [i_1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))));
                            }
                        } 
                    } 
                    arr_12 [i_2] = (!(((/* implicit */_Bool) ((signed char) var_7))));
                }
            } 
        } 
        var_21 = (!(((/* implicit */_Bool) (unsigned char)243)));
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((var_15) + (9223372036854775807LL))) >> ((((+(var_4))) - (4818188806310752201LL)))));
    }
    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_16 [i_5] = ((/* implicit */short) (unsigned char)232);
        var_22 ^= ((/* implicit */_Bool) var_3);
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_23 [2U] [i_6] [i_7] = ((/* implicit */short) ((max((2LL), (var_15))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)1)))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7] [i_6 + 1]))))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27797))) == (max((var_10), (((/* implicit */long long int) 709601764U)))))))));
                    arr_24 [i_7] [i_7] [i_5] &= ((/* implicit */int) arr_19 [i_5] [i_6 - 1]);
                    arr_25 [i_6] [i_6] = ((/* implicit */_Bool) (+(max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (-3LL)))), (650440980)))));
                }
            } 
        } 
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) -3346434134473668581LL);
        arr_27 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 19; i_8 += 4) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (-(arr_29 [i_8] [i_8]))))));
        arr_31 [(_Bool)1] |= arr_28 [i_8];
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned long long int) max(((unsigned char)0), (((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)114)))) >= (((/* implicit */int) arr_34 [i_9])))))));
        arr_36 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-22769)) / (((/* implicit */int) (unsigned char)178))))) ? (((((/* implicit */int) var_16)) << (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) arr_34 [(unsigned char)3]))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        arr_41 [(short)4] = ((/* implicit */unsigned int) (~(((int) (short)22740))));
        arr_42 [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)66)) ^ (((/* implicit */int) (short)-26590))));
    }
    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33420))));
}
