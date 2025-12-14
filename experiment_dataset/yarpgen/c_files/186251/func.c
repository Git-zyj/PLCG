/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186251
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
    var_15 = ((/* implicit */short) var_1);
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_7);
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_7)) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (11053163063209064741ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [(unsigned char)18])))) : ((-(((/* implicit */int) (unsigned short)0))))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_14 [i_2] [i_2] [(unsigned short)3] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        var_21 = ((/* implicit */short) (~(arr_11 [(short)16] [i_3] [i_4] [i_2])));
                        arr_15 [i_5] [i_3] [i_2] [i_5] [i_3] [i_5] = ((/* implicit */unsigned char) ((arr_12 [i_2] [i_2] [(unsigned char)17] [i_2] [i_2] [10ULL]) - (arr_12 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_22 [i_2] [i_3] = arr_7 [i_2];
                        var_22 = ((/* implicit */unsigned char) var_13);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_2])) != (((/* implicit */int) var_10))));
                    }
                } 
            } 
            arr_23 [i_2] [(unsigned short)16] [12] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (arr_21 [i_2] [12] [i_2] [i_3]))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2])))));
            var_24 = ((((/* implicit */_Bool) ((int) (signed char)127))) ? (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((signed char) (unsigned char)0)))));
            /* LoopNest 3 */
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                for (unsigned char i_10 = 4; i_10 < 17; i_10 += 4) 
                {
                    for (signed char i_11 = 2; i_11 < 17; i_11 += 1) 
                    {
                        {
                            arr_32 [i_8] [i_8] [(short)5] [i_2] [i_2] = ((/* implicit */unsigned char) var_2);
                            arr_33 [i_11 - 2] [i_8] [i_8] [(unsigned char)8] &= ((/* implicit */signed char) ((((arr_16 [i_8] [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10 - 4] [i_9 - 1] [(unsigned char)9] [i_11 - 1] [i_9 + 2] [i_9])))));
                            arr_34 [3U] [i_2] [i_8] [i_9] [i_9 + 3] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (((var_2) / (((/* implicit */unsigned long long int) var_8))))));
                            arr_35 [10U] [(unsigned short)10] [i_2] [(unsigned char)7] [i_10 - 2] [i_11 - 1] [10U] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            arr_38 [i_2] = ((unsigned char) arr_18 [(short)0] [(signed char)17] [i_12] [i_2] [16ULL]);
            var_26 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_13 [(unsigned char)2] [i_12] [i_2] [(unsigned short)0] [i_12] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
            arr_39 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) arr_8 [(signed char)2]));
        }
        var_27 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) != (((/* implicit */int) arr_29 [(unsigned short)9] [(short)5] [i_2] [(signed char)16] [i_2] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_18 [i_2] [(unsigned short)2] [i_2] [4U] [i_2]))) << (((var_2) - (1178762896311796983ULL))))))));
    }
    /* vectorizable */
    for (signed char i_13 = 2; i_13 < 22; i_13 += 2) 
    {
        arr_44 [i_13] [i_13 - 1] = ((/* implicit */signed char) arr_40 [i_13 + 1]);
        var_28 *= ((/* implicit */signed char) (-(var_2)));
        var_29 = ((/* implicit */unsigned char) max((var_29), (var_11)));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            arr_48 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_13 + 1] [i_13 - 1])) && (((/* implicit */_Bool) arr_43 [i_13 + 3]))));
            var_30 = ((/* implicit */unsigned int) (!(((arr_40 [i_13]) >= (((/* implicit */unsigned long long int) var_13))))));
            arr_49 [16U] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) > (((/* implicit */int) arr_47 [i_13 - 2] [i_13 - 1]))));
        }
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_45 [i_13])) + (2147483647))) << (((((/* implicit */int) var_9)) - (202)))))) & (arr_40 [i_13 + 2])));
    }
    var_32 = ((/* implicit */unsigned char) var_2);
    var_33 = ((/* implicit */unsigned long long int) max((var_33), ((+(max((var_2), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_9)))))))))));
}
