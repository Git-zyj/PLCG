/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142021
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0 - 1]));
        var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 2]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -840460425)) && (((/* implicit */_Bool) max((8802989985096895041LL), (((/* implicit */long long int) arr_3 [4ULL])))))))), (min((arr_2 [i_1]), (((/* implicit */unsigned int) (-(1336586359))))))));
        arr_6 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32403)) || (((/* implicit */_Bool) 5825633078091800788ULL)))))) * (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_14 [i_2] = -1410224854;
                    var_12 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [(signed char)0]))))) ? (((((/* implicit */int) (short)-6378)) | (arr_3 [i_2]))) : (((((/* implicit */_Bool) (short)6354)) ? (((/* implicit */int) arr_0 [i_2])) : (-1))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        var_13 += ((/* implicit */long long int) -1169616195);
                        arr_17 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) 430915927))), (840460424)));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) | (((/* implicit */int) arr_10 [i_2]))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) arr_11 [i_2] [i_3] [i_2] [(unsigned short)4]);
                        var_16 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 461264100372948336LL)) || (((/* implicit */_Bool) arr_2 [(unsigned short)0])))))))), ((+(8802989985096895043LL)))));
                        var_17 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) -2147483646)), (4294967279U)))));
                        arr_22 [i_2] = ((/* implicit */_Bool) max((-461264100372948337LL), (max((arr_19 [i_4 - 1] [i_4] [i_4 - 3] [i_4 + 1]), (((/* implicit */long long int) (-(((/* implicit */int) (short)-6347)))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(arr_16 [i_4 - 3] [i_3] [i_2] [i_2])))), (((arr_15 [i_3] [i_3] [i_3] [i_4 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 1] [i_4 - 1] [i_4 - 3] [i_4 + 1])))))));
                        arr_25 [i_7] [i_2] = ((/* implicit */unsigned short) arr_11 [i_2] [i_3] [(signed char)12] [2ULL]);
                    }
                    arr_26 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                }
            } 
        } 
        arr_27 [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 483474884)) ? (((/* implicit */long long int) 2147483647)) : (461264100372948337LL))));
        arr_28 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) < (((/* implicit */int) ((((/* implicit */int) (short)27977)) != (((/* implicit */int) (short)-31317)))))))) >= ((~(((/* implicit */int) var_6))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 16; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 15; i_11 += 2) 
                        {
                            var_19 += ((/* implicit */long long int) (~(arr_30 [i_9 - 1] [i_10])));
                            var_20 = ((((/* implicit */_Bool) arr_34 [i_11] [i_11] [i_11 - 3] [(unsigned short)13] [i_11 - 3] [i_2])) ? (((/* implicit */int) arr_36 [i_11] [i_11] [i_11 - 3] [i_2] [i_11] [i_11])) : (-840460407));
                        }
                        for (short i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) - (((/* implicit */int) (unsigned char)115))))) ? (735889621726878460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9 - 1] [i_9 - 1])))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_37 [i_2] [i_2] [(signed char)13] [(signed char)13] [i_9 + 1] [i_2] [i_12])) : (((/* implicit */int) (unsigned char)214))))))) ? (var_0) : (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_4))))))));
                            arr_41 [i_2] [i_2] [i_9] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_19 [i_12] [i_9 + 1] [i_9 + 1] [i_8]) | (((/* implicit */long long int) ((unsigned int) arr_1 [i_2])))));
                            arr_42 [i_2] [i_9 + 1] [i_12] = ((/* implicit */short) (unsigned char)254);
                        }
                        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            var_22 = ((/* implicit */short) (+(-8802989985096895029LL)));
                            var_23 = ((/* implicit */long long int) arr_36 [i_13] [i_13] [i_2] [i_2] [i_2] [i_2]);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_24 = ((/* implicit */int) arr_20 [i_9] [i_2] [i_9] [i_9 + 1] [i_9 + 1] [(unsigned short)2]);
                            var_25 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? ((+(arr_19 [i_9] [i_9 + 1] [i_9 - 1] [i_9 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_2] [i_10] [i_10] [i_14])))));
                            var_26 = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_31 [i_2] [i_2] [i_2]))))));
                        }
                        arr_50 [i_2] [i_2] [i_9 - 1] [i_2] = ((/* implicit */long long int) 96);
                    }
                } 
            } 
            arr_51 [i_2] [i_2] = ((/* implicit */short) (+((~(((/* implicit */int) ((unsigned char) 2564257416U)))))));
            var_27 = ((/* implicit */unsigned short) (~(2513096901U)));
        }
        var_28 = ((/* implicit */int) arr_0 [i_2]);
    }
    for (signed char i_15 = 2; i_15 < 11; i_15 += 3) 
    {
        arr_55 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (+(3571136460U)))) ? ((~((~(((/* implicit */int) var_6)))))) : ((-(((((((/* implicit */int) arr_24 [i_15] [8U] [i_15])) + (2147483647))) << (((((/* implicit */int) var_5)) - (1)))))))));
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned int) arr_35 [i_15 - 2] [i_15 - 2] [4]);
        arr_57 [i_15] [i_15 - 1] = min(((!(((/* implicit */_Bool) ((long long int) var_7))))), (((((/* implicit */_Bool) (unsigned short)65338)) || (((/* implicit */_Bool) 694258779)))));
        var_29 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(1185080370U)))) ? (-8802989985096895039LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_15 + 1] [i_15] [(unsigned char)0])))))));
    }
    var_30 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) 1711485393)) || (((/* implicit */_Bool) 9223372036854775786LL))))), (var_0))) >> (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 581838483))))))));
    var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
}
