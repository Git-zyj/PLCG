/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154837
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)0))))));
            arr_8 [i_0] [5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-8) + (2147483647))) >> (((((/* implicit */int) (short)-10)) + (32)))))) ? (arr_1 [i_1 + 2]) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_3 [i_0]))))));
            arr_9 [i_0] [i_1] = ((/* implicit */_Bool) arr_5 [7] [i_1] [(_Bool)1]);
            arr_10 [i_1] = ((/* implicit */_Bool) arr_3 [16U]);
            arr_11 [i_1] [1U] [i_1] = ((/* implicit */int) (_Bool)1);
        }
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [23U] [(short)11] |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) >> (((((/* implicit */int) arr_3 [i_4])) + (143)))));
                            arr_24 [i_2 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_6 = 4; i_6 < 24; i_6 += 3) 
                {
                    arr_27 [i_0] [20U] = ((/* implicit */signed char) ((((/* implicit */_Bool) 919557232)) ? (((/* implicit */int) arr_17 [i_0] [i_2] [(unsigned short)11] [(unsigned short)11] [i_2 - 1])) : (((/* implicit */int) arr_17 [24] [18LL] [i_3] [(short)13] [i_2 + 1]))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] [23] [i_0] = ((/* implicit */_Bool) ((((80987024) < (4))) ? ((~(0))) : (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (_Bool)1)) : (0)))));
                }
                arr_29 [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (16LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))))) || ((_Bool)1)));
                arr_30 [i_0] [i_0] = ((/* implicit */int) 0ULL);
            }
            for (unsigned char i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                arr_35 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-2LL)));
                arr_36 [i_0] [(short)3] [(_Bool)1] [(short)22] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_20 [1] [i_0] [(_Bool)1] [i_7] [i_7])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            arr_42 [i_7] [9U] [(short)17] [(signed char)17] [i_9] [i_8] = ((/* implicit */signed char) ((var_10) / (((/* implicit */int) arr_16 [i_8] [(unsigned short)20] [i_7] [i_8]))));
                            arr_43 [i_2] [i_2] [i_2 - 1] [14LL] [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20))) : (0ULL)));
                        }
                    } 
                } 
            }
            arr_44 [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_2 - 1] [16ULL] [i_2 - 1] [i_2 - 1] [i_0])) ? (3) : (((/* implicit */int) ((var_4) > (((/* implicit */int) (short)-24)))))));
            arr_45 [22U] = ((short) ((signed char) (unsigned char)255));
        }
        arr_46 [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10))) : (15LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)13))))));
        arr_47 [24LL] [24LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_0] [i_0] [14])) / (((/* implicit */int) arr_13 [i_0]))))) ? (0LL) : (arr_12 [i_0])));
        arr_48 [i_0] = ((/* implicit */int) arr_22 [i_0] [i_0]);
        arr_49 [(signed char)17] [20] = (((_Bool)1) ? (((/* implicit */int) arr_32 [i_0] [i_0] [6U])) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 11; i_10 += 3) 
    {
        arr_53 [i_10] [i_10] = ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [18ULL])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (22)))) : (((/* implicit */int) arr_3 [i_10 - 1])));
        arr_54 [i_10] = ((/* implicit */unsigned short) -18);
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_12 = 2; i_12 < 11; i_12 += 4) 
            {
                arr_60 [(short)0] [i_10] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (short)5))))));
                arr_61 [i_10] [(signed char)5] [i_10] = ((/* implicit */unsigned char) (~(var_11)));
            }
            arr_62 [i_11] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [14] [i_11] [i_10 - 2] [i_11] [(short)23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20))) : (arr_59 [(unsigned short)4] [i_11] [i_10 - 2] [(unsigned short)4])));
            arr_63 [(unsigned char)7] [(unsigned short)7] [i_10] = ((/* implicit */int) ((((long long int) -4LL)) + (((/* implicit */long long int) 4294967292U))));
            arr_64 [i_10] [7LL] [i_10] = ((/* implicit */short) (~(arr_12 [i_10 - 3])));
            arr_65 [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_22 [i_10] [i_11])) != (10))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [15LL] [i_10] [i_10]))) : (arr_12 [(short)7]))))));
        }
        for (short i_13 = 3; i_13 < 8; i_13 += 4) 
        {
            arr_68 [i_10] = ((/* implicit */unsigned char) (((~(-13LL))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 22LL))))));
            arr_69 [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12))));
        }
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((4250665420U) <= (((/* implicit */unsigned int) 18)))) ? (max((((/* implicit */unsigned int) -5)), (4294967293U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned int) min((var_1), (((((/* implicit */_Bool) -10)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */unsigned int) (~(0)))) ^ (((var_5) | (((/* implicit */unsigned int) -5))))))));
}
