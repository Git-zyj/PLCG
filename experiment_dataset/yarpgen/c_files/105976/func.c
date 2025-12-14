/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105976
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
    var_13 = ((/* implicit */_Bool) (((+((-(((/* implicit */int) (signed char)18)))))) * (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_14 *= ((/* implicit */short) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned short) (((-(arr_1 [i_0 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30))))) ? (-539380382) : (((/* implicit */int) ((3630532840U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))))))));
            arr_11 [i_2] [i_2] = ((/* implicit */int) arr_2 [i_2]);
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 4; i_4 < 15; i_4 += 3) 
                {
                    var_17 = ((((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_8 [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))) + (9223372036854775807LL))) >> (((1932744854) - (1932744824))));
                    arr_18 [i_4] [i_2] [i_3] [i_3] [i_2] [14U] = ((/* implicit */signed char) (-(((var_7) - (var_0)))));
                }
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_7 [i_2] [i_2 + 1]))));
                var_19 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2]))));
                arr_19 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(signed char)12] [i_2 + 1] [i_2 + 1] [i_2 - 1])) >> (((((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (var_12))) - (4294967270U)))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)212))));
                arr_24 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */int) ((arr_4 [i_2 + 1] [i_2 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1])))));
            }
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_22 |= ((/* implicit */signed char) (~(var_7)));
                    var_23 = ((/* implicit */int) (+(319995370U)));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
            {
                var_24 += ((/* implicit */long long int) ((unsigned short) (signed char)89));
                var_25 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46954)))))));
                arr_31 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_1] [i_2 - 1] [i_2 - 1]))));
                arr_32 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_10 [i_1]);
                arr_33 [i_2] [i_2 + 2] [i_2] = ((/* implicit */int) (unsigned short)18581);
            }
            arr_34 [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1]))));
        }
        arr_35 [i_1] = ((/* implicit */unsigned short) (~(max((var_7), (var_7)))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_26 [(unsigned short)6]), (arr_26 [(unsigned short)12])))) ? ((~(4294967295U))) : (((arr_26 [(unsigned short)8]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        arr_38 [i_9] = ((/* implicit */int) (unsigned short)65535);
        var_27 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_9 [i_9]))))));
        /* LoopNest 3 */
        for (signed char i_10 = 2; i_10 < 14; i_10 += 3) 
        {
            for (unsigned int i_11 = 3; i_11 < 13; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    {
                        var_28 ^= ((/* implicit */short) (-(arr_4 [i_11 + 1] [i_11 - 2])));
                        arr_47 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((signed char) arr_17 [i_9] [i_10 - 2] [i_12] [i_10]));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_10 - 2] [i_10])) / (((/* implicit */int) arr_27 [i_12] [i_9]))));
                        arr_48 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 4294967290U)))))) - (arr_30 [i_10 - 2] [i_10 + 1] [i_10 - 1])));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        arr_52 [i_13] = ((((/* implicit */_Bool) (unsigned char)37)) ? (2147483640U) : (((/* implicit */unsigned int) -101818466)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
        {
            arr_55 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3143701017U)) ? (((/* implicit */int) arr_0 [i_14 + 1])) : (((/* implicit */int) arr_0 [i_14 - 1]))));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [8U] [i_14 + 1] [i_14 - 1] [i_14 + 1])) != (((/* implicit */int) var_11))));
        }
        arr_56 [i_13] = ((/* implicit */unsigned short) var_10);
        arr_57 [i_13] = ((/* implicit */unsigned int) ((long long int) ((int) 2147483640U)));
    }
    var_31 &= ((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) var_4))));
}
