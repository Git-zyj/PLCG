/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117334
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_18 = ((/* implicit */short) var_16);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)127));
                        arr_10 [i_3] = ((/* implicit */unsigned short) arr_5 [i_1 + 2]);
                        arr_11 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [20] [i_2] [i_1]))) & (6645205425619999802LL)))) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_3 + 4])) : ((~(((/* implicit */int) arr_6 [i_3] [i_1 - 2]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 24; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned short i_6 = 4; i_6 < 23; i_6 += 2) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_5] [i_6] |= ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_16 [i_4] [i_4])) >> (((arr_3 [i_4] [i_4 - 1]) - (1614600854)))));
                        var_21 = ((/* implicit */unsigned long long int) 3656665861U);
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0]);
    }
    var_22 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)116))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        arr_37 [i_8] [i_8] [(_Bool)1] [(_Bool)1] [i_8] = ((/* implicit */_Bool) (((~(arr_32 [i_7] [i_8] [i_9] [i_8]))) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [3LL] [3LL] [3LL] [3LL])))));
                        arr_38 [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_24 [i_10]))));
                        arr_39 [i_7] [10ULL] [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (0U)));
                        arr_40 [7ULL] = ((/* implicit */short) -1864959036);
                    }
                    var_24 = ((((/* implicit */_Bool) ((((arr_16 [i_8] [i_8]) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || ((_Bool)1))))) : (((arr_24 [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? ((-(-1))) : (((/* implicit */int) var_0)));
                }
            } 
        } 
    }
    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            for (signed char i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 4; i_14 < 8; i_14 += 2) 
                {
                    {
                        var_25 = ((/* implicit */int) (_Bool)0);
                        arr_54 [i_11] [i_12] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)7])) && (((/* implicit */_Bool) arr_20 [i_14] [(unsigned short)21] [(unsigned short)4] [(unsigned short)4] [(unsigned short)2] [(unsigned short)2]))));
                        var_26 = ((/* implicit */int) ((long long int) ((arr_32 [i_14 - 3] [i_13 - 1] [i_13 - 1] [i_11]) * (((/* implicit */long long int) -1)))));
                        var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_15 [i_11] [(unsigned char)13] [i_14]) : (0LL)))) ? ((+(arr_15 [i_14 - 4] [(signed char)22] [(signed char)22]))) : (((/* implicit */long long int) ((arr_18 [i_14] [(short)15] [(short)15] [i_14 - 3] [i_13 + 1] [i_11]) ? (((/* implicit */int) arr_18 [i_11] [i_13 + 1] [i_13 + 1] [i_14 - 3] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_18 [i_13 + 1] [i_13 - 1] [i_12] [i_14 - 4] [i_13 + 1] [i_12])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                {
                    arr_60 [i_16] [i_11] [i_11] = ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_11] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])), (((arr_14 [(unsigned short)13] [16]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_55 [i_11] [i_15] [i_15]))))))) : (arr_59 [i_11] [i_11] [i_11]));
                    var_28 &= ((/* implicit */long long int) (+((~(((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                }
            } 
        } 
    }
}
