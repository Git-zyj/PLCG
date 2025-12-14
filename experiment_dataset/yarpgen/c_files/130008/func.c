/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130008
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
    var_10 = ((/* implicit */long long int) (-(((/* implicit */int) max((var_9), (((/* implicit */short) var_0)))))));
    var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_3)) * (((((/* implicit */int) (signed char)-45)) / (((/* implicit */int) var_3)))))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_3)) + (8055)))))))));
    var_12 += (+(((/* implicit */int) (short)1338)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) * (12655420083939223218ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_15 |= ((/* implicit */unsigned long long int) arr_8 [10] [i_1 + 1] [i_1]);
                            var_16 ^= (!((!(((/* implicit */_Bool) var_4)))));
                            arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 3])) : ((~(((/* implicit */int) (signed char)3))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
                        {
                            var_17 ^= ((/* implicit */short) (-(((/* implicit */int) (short)1358))));
                            arr_20 [i_0] [i_1 + 2] [i_1] [i_5] [i_5] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_5 - 3] [i_5] [i_5 + 2] [i_5 - 2] [i_5 - 2])) ? (((((/* implicit */int) (signed char)-3)) / (((/* implicit */int) (unsigned char)8)))) : ((~(((/* implicit */int) var_7))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_7 + 1] [i_2] [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_7]))));
                            var_18 *= arr_6 [i_7 + 1];
                            var_19 &= ((/* implicit */int) ((signed char) (-(((/* implicit */int) var_2)))));
                            var_20 = ((/* implicit */signed char) (~(2147483647)));
                            var_21 ^= ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-322472646606958067LL)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_29 [i_8] [i_8] [i_6] [i_6] [i_2] [i_0] [i_0])))) != ((~(((/* implicit */int) var_9))))));
                            var_23 ^= ((/* implicit */signed char) arr_2 [i_0]);
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)248))));
                            var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) (signed char)62)) + (((/* implicit */int) arr_14 [i_0] [i_1 + 3] [i_6 - 1] [i_1 + 3] [i_8]))))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((signed char) 2147483632)))));
                        }
                        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_1 - 1] [15])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6 - 1] [i_6] [i_0] [i_1 - 1] [i_0])))));
                        var_27 += ((/* implicit */signed char) ((arr_0 [i_6] [i_6 - 1]) ? (((/* implicit */int) arr_0 [i_6] [i_6 - 1])) : (((/* implicit */int) arr_0 [i_6] [i_6 - 1]))));
                        var_28 ^= ((/* implicit */signed char) (short)-22517);
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) -8980908887725355963LL))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        var_30 += ((/* implicit */unsigned long long int) var_9);
                        var_31 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [(signed char)17] [i_1] [i_2])) && (((/* implicit */_Bool) 9483679941673914432ULL))))) != (((/* implicit */int) var_5)))))));
                        var_32 *= ((/* implicit */signed char) (!(arr_23 [i_9])));
                        var_33 += min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) || ((_Bool)1))), ((!((!(((/* implicit */_Bool) var_9)))))));
                    }
                    for (int i_10 = 1; i_10 < 16; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) (short)1359)) ? (max((((/* implicit */int) (signed char)62)), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)23042)) : (((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) (unsigned char)211))))))));
                        var_35 = ((/* implicit */unsigned char) (~(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    arr_38 [i_0] = var_2;
                    var_36 += (unsigned char)236;
                    var_37 *= ((/* implicit */short) (((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5092657003358707611LL))) >> (((arr_25 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1]) - (3709583979U))))) != (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_1 + 3] [i_2] [i_2] [i_2] [i_1 - 1] [i_2])))));
                }
            } 
        } 
        var_38 -= ((/* implicit */short) min((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)748))))), (max((arr_30 [(signed char)15] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))), (((/* implicit */unsigned char) (signed char)-26))));
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_32 [(signed char)1] [(_Bool)1] [i_0] [i_0]))));
    }
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        var_40 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (max((((/* implicit */unsigned long long int) var_6)), (9332699572823193594ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)105)))))))));
        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min((arr_40 [i_11]), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) (unsigned char)89)))))))));
    }
}
