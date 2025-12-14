/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149662
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) 1974695038);
            arr_7 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9883))) & (var_15))))));
            var_18 = ((/* implicit */unsigned int) ((short) var_0));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))));
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1974695035))));
                        arr_14 [11] [i_0] [0LL] = ((/* implicit */signed char) ((_Bool) -1410617502));
                        arr_15 [i_0] = ((var_4) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)13203)));
                    }
                } 
            } 
        }
        arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)249)) + (-1974695023)));
        arr_17 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((_Bool) var_10)));
    }
    for (int i_4 = 4; i_4 < 16; i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((unsigned long long int) var_8)) + (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_11)))))))));
        var_20 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) 18446744073709551603ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))), (((/* implicit */unsigned int) arr_0 [i_4 - 3]))));
        arr_21 [i_4] |= ((/* implicit */_Bool) ((int) max((((((/* implicit */_Bool) arr_2 [i_4])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)44))))))));
    }
    for (int i_5 = 4; i_5 < 16; i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)19))));
        arr_27 [i_5] [i_5] = min((var_3), ((-(((/* implicit */int) min((var_6), (((/* implicit */short) var_16))))))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */signed char) ((((max((((/* implicit */unsigned int) (short)12239)), (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned int) ((int) var_1)))));
                        arr_36 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))) | (((((/* implicit */_Bool) arr_24 [i_5 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5 - 3] [i_7]))) : (1146385096208811994LL)))));
                    }
                } 
            } 
        } 
    }
    for (int i_9 = 4; i_9 < 16; i_9 += 1) /* same iter space */
    {
        var_22 ^= ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_9] [i_9 - 1] [i_9])) ? (arr_3 [i_9 - 4] [i_9 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245)))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) (unsigned char)230)), (-7060823624927102381LL)))))) ? (min((((/* implicit */unsigned long long int) arr_29 [i_9 - 3] [i_9 - 3])), (((unsigned long long int) (unsigned short)34189)))) : ((-(((unsigned long long int) 4294967271U))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        for (long long int i_11 = 2; i_11 < 19; i_11 += 1) 
        {
            {
                arr_43 [i_10] [i_10] [i_11] = ((/* implicit */int) max((((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_42 [i_10] [i_10] [1U])), (-807169108)))) : (arr_39 [i_10]))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_42 [i_10] [i_10] [i_10])))), ((~(((/* implicit */int) var_12)))))))));
                var_24 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_0)), (arr_42 [i_11] [i_11] [i_11 + 2])))), (96425261991439332LL)));
            }
        } 
    } 
}
