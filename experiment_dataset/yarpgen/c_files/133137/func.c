/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133137
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_12 ^= ((/* implicit */unsigned char) ((((long long int) arr_0 [i_0] [10])) <= (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-1939040286053628989LL)))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_9))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
        }
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)115)) << (((((/* implicit */int) (unsigned char)234)) - (229)))));
                var_15 = ((/* implicit */long long int) ((_Bool) var_9));
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) (+(arr_0 [i_2] [1ULL])))) : (arr_3 [i_0] [i_2 - 1] [i_3 + 1])));
            }
            for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
            {
                arr_14 [(signed char)6] [i_2] [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0] [i_2] [i_4 + 2])) - (((/* implicit */int) (signed char)-86))));
                var_17 += (+(((var_11) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)111)))));
            }
            /* LoopNest 2 */
            for (long long int i_5 = 4; i_5 < 11; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_18 -= ((/* implicit */int) ((_Bool) (signed char)104));
                        arr_21 [i_2] [12LL] [i_2] [i_2] = ((/* implicit */int) (((+(((/* implicit */int) var_11)))) == ((-(((/* implicit */int) arr_8 [3LL] [3LL] [4LL] [(_Bool)1]))))));
                        var_19 &= ((/* implicit */_Bool) ((signed char) (unsigned char)31));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((arr_3 [(unsigned char)0] [(short)4] [i_2 + 1]) != (((/* implicit */long long int) var_5)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31133))) >= (33554431LL)))) : (((arr_19 [i_0] [(short)1] [i_6]) ^ (((/* implicit */int) (unsigned short)54563)))))))));
                    }
                } 
            } 
        }
        arr_22 [i_0] = ((/* implicit */_Bool) var_8);
    }
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
    {
        arr_27 [i_7] [i_7] = ((/* implicit */int) (unsigned char)225);
        var_21 = ((/* implicit */int) min((var_21), (2147483647)));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)19)), ((unsigned char)42)))) ? (var_5) : ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        arr_30 [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) arr_7 [i_8] [i_8])), (arr_25 [i_8])))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (arr_7 [10] [(_Bool)1])));
                        var_24 += ((/* implicit */unsigned long long int) min((var_5), (arr_23 [i_8] [12LL])));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_9] [i_10] [i_10])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_11] [i_10] [i_9] [i_8]))))))))));
                        arr_38 [i_8] [i_8] [i_8] [i_8] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) * (((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) % (((/* implicit */int) (signed char)-100))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? ((-(((/* implicit */int) (unsigned short)51076)))) : (((/* implicit */int) (signed char)-39))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 4; i_16 < 10; i_16 += 3) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -424896037445798523LL)))))));
                                arr_51 [i_12] [(unsigned short)5] [i_14] = ((/* implicit */short) ((((/* implicit */int) (signed char)-22)) >= (((/* implicit */int) var_3))));
                                arr_52 [(unsigned short)4] [i_16 + 3] [i_14] [i_16 + 2] [i_15] [i_15] [(unsigned short)4] &= ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_50 [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_16 - 2] [i_16])));
                            }
                        } 
                    } 
                    var_28 &= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_29 [i_13] [i_13])))) > (((((/* implicit */_Bool) 8040158426511266874ULL)) ? (((/* implicit */int) (unsigned short)60414)) : (((/* implicit */int) (unsigned char)173))))));
                    var_29 &= ((/* implicit */long long int) (+((~(((/* implicit */int) arr_16 [i_12] [i_13] [i_13]))))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) -6947244356962093217LL))) ? (((/* implicit */unsigned long long int) (-(arr_37 [i_12])))) : (((unsigned long long int) var_9))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 1; i_17 < 16; i_17 += 3) 
    {
        for (int i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            {
                arr_58 [(_Bool)1] [(unsigned short)1] [i_17 + 3] = ((/* implicit */signed char) (((~((~(arr_53 [(signed char)1]))))) ^ (((/* implicit */int) max((min((((/* implicit */unsigned char) (signed char)-9)), (var_10))), (((/* implicit */unsigned char) var_3)))))));
                arr_59 [i_17 + 3] [i_17 + 1] [i_17 + 3] = ((/* implicit */int) max(((unsigned short)5), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-118)) || ((_Bool)1))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) var_10))) ? ((+(0LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_2))))))));
}
