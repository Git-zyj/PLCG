/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162209
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [6ULL] |= (~(min((arr_1 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_9))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_17 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_1 [10LL])))) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (((18446744073709551609ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (-1564244320802498940LL))))) / (min((((/* implicit */unsigned long long int) var_6)), (arr_6 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7])))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_1 + 2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) == (((18446744073709551611ULL) + (((/* implicit */unsigned long long int) 1589574538))))));
                        arr_12 [1U] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (~(var_6)))) | (17943378291663477328ULL))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) & (18209230011276971314ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) & (var_4))))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 14; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (arr_13 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_4 - 4]))))) ^ (((arr_13 [i_1 + 3] [14LL] [i_1 + 4] [i_4] [i_4 - 2]) ^ (arr_13 [i_1 - 1] [16ULL] [i_1 + 1] [(_Bool)1] [i_4 - 4]))))))));
                        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (var_14)));
                        arr_17 [i_0] [2] [i_2] [2] = ((/* implicit */unsigned int) min((-1564244320802498945LL), (((/* implicit */long long int) (unsigned char)3))));
                    }
                    var_19 += ((/* implicit */unsigned int) 2433217396757351609LL);
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned short) ((int) 1952049748U));
                    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1564244320802498966LL)), (12183841335503169078ULL)))) ? (12183841335503169078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                    arr_21 [i_0] [8LL] [i_5] = ((((/* implicit */int) var_16)) / ((+(((/* implicit */int) (unsigned short)5)))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))) != (min(((~(((/* implicit */int) arr_9 [16ULL] [16ULL] [i_1 + 4] [i_0] [16ULL])))), (((/* implicit */int) ((unsigned short) var_9)))))));
                }
                for (signed char i_6 = 1; i_6 < 14; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        var_24 ^= ((/* implicit */int) ((arr_19 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (var_8))))));
                        var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 4; i_8 < 15; i_8 += 4) 
                        {
                            arr_30 [12LL] [13ULL] [13ULL] [3U] [i_0] [13ULL] = ((/* implicit */unsigned short) (~(((var_8) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [4U] [15LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) | (12183841335503169089ULL)))) ? (((-1) | (((/* implicit */int) arr_22 [i_0])))) : (((/* implicit */int) var_0))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) var_15);
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (var_8)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (13622760817410975646ULL)))));
                        arr_34 [(short)4] [i_1 + 1] [i_0] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18))) >= (13667859504286302617ULL)));
                        arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0]))))))) == (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 3])))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        var_28 *= ((arr_38 [3ULL] [i_0] [i_0] [i_6 - 1] [i_10] [(signed char)11]) == (((/* implicit */int) arr_9 [i_6] [i_6 + 3] [6U] [i_10] [i_6 + 1])));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (2147483647)))) | (9815461674023780282ULL)));
                        arr_39 [(short)7] [i_1] [i_6] [i_6 + 1] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) var_10)) != (var_8)))) < (((/* implicit */int) ((((/* implicit */int) arr_28 [i_10] [i_0] [i_6 + 3] [15U] [i_0])) > (((/* implicit */int) var_16)))))));
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_36 [13ULL] [13ULL] [13ULL] [i_0]))))) : (((/* implicit */int) arr_9 [i_0] [(unsigned char)1] [i_0] [i_0] [i_0])));
                    }
                    var_31 += ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((int) var_10))) - (var_11))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_26 [(unsigned char)8])) ? (((/* implicit */int) arr_32 [i_1 + 1] [i_6 - 1] [i_6 - 1] [2ULL] [10ULL] [i_0])) : (((/* implicit */int) (signed char)115)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6))))))))));
                    var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 3] [6ULL] [i_1 + 2])) ? (arr_24 [i_6 + 1] [i_1 + 3] [i_1 + 3] [i_1 - 1] [i_1 + 2]) : (17832268824149420491ULL))) % (((var_3) % (((((/* implicit */_Bool) 941517408)) ? (13622760817410975646ULL) : (6053667553850080905ULL)))))));
                    arr_40 [i_0] [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_38 [i_6 - 1] [i_6] [i_6] [i_6] [i_1 + 3] [i_1 + 1]) ^ (arr_38 [i_6 - 1] [i_6 - 1] [15LL] [i_6 + 2] [15LL] [i_1 + 2])))) && (((arr_38 [i_6 + 1] [i_6] [i_6] [i_6] [i_6] [i_1 + 3]) != (arr_38 [i_6 + 2] [i_1 - 1] [i_1 - 1] [(short)7] [(_Bool)1] [i_1 - 1])))));
                }
                arr_41 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(min((arr_2 [i_1 - 1]), (((/* implicit */unsigned long long int) var_8))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (short i_13 = 3; i_13 < 12; i_13 += 4) 
            {
                {
                    var_33 += ((/* implicit */unsigned long long int) (((!(arr_43 [i_13 + 1] [i_13 - 2]))) ? ((~(((/* implicit */int) var_15)))) : (((int) arr_43 [i_13 - 3] [i_13 + 1]))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 12; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                arr_55 [i_15] [i_15] = ((/* implicit */unsigned char) arr_28 [i_11] [i_12] [i_13] [14LL] [(unsigned char)7]);
                                arr_56 [7ULL] [i_14 - 2] [i_15] [(short)10] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_12)))) : (((((-176255695) + (2147483647))) << (((((/* implicit */int) (unsigned char)3)) - (3))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) + (((var_11) - (((/* implicit */unsigned long long int) var_8)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_35 = ((/* implicit */unsigned long long int) var_15);
}
