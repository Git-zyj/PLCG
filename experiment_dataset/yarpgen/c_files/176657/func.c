/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176657
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)24))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            arr_7 [i_0] [i_1 - 2] |= ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])) - (((/* implicit */int) (unsigned char)231)))) - (((/* implicit */int) max((arr_2 [i_1 - 2] [i_1 + 1]), (arr_2 [i_1 - 2] [i_1 + 1]))))));
            arr_8 [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)24))))));
            var_18 = ((/* implicit */unsigned long long int) var_9);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_15 [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4292050568976562407ULL), (((((/* implicit */_Bool) arr_3 [18ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (var_5)))))) ? (((max((3977986824087884569ULL), (((/* implicit */unsigned long long int) (unsigned char)48)))) >> (((/* implicit */int) (unsigned char)24)))) : ((~(((arr_10 [i_0 + 2] [i_1]) ? (11179046109402906140ULL) : (4292050568976562414ULL)))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned char) min((min((4743583972008177864ULL), (((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */int) (_Bool)1))))))), ((-((-(arr_3 [i_0])))))));
                            arr_19 [i_0] [i_3] = ((/* implicit */unsigned char) (+(min((min((((/* implicit */unsigned long long int) var_2)), (var_16))), (4194303ULL)))));
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_10 [i_1] [i_2]))))) * (((/* implicit */int) arr_14 [i_0] [(signed char)19]))))) != ((+(arr_16 [i_1] [i_1 - 2])))));
                            var_21 |= ((/* implicit */int) (((!(((/* implicit */_Bool) min(((unsigned char)4), ((unsigned char)45)))))) || (((/* implicit */_Bool) min((4292050568976562402ULL), (16772499503342519728ULL))))));
                        }
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            arr_24 [i_3] [i_1 - 2] [20LL] [7ULL] [i_3] [i_5] = (-(((min((arr_12 [i_2] [i_5]), (arr_18 [i_0] [(signed char)23] [i_2] [i_3] [i_3] [i_5]))) * (min((((/* implicit */unsigned long long int) arr_10 [(unsigned char)14] [i_1])), (14154693504732989187ULL))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_18 [6] [15] [i_2] [i_2] [i_2] [i_2]))) <= (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (13703160101701373746ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            arr_29 [8ULL] [i_1] [i_0 - 1] [(_Bool)1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)249)), (arr_9 [i_0 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) (-(2147483645)));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11116244760179621163ULL)) ? (2594729440609271134ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94)))));
            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)42)))))));
            var_27 |= ((/* implicit */unsigned char) 18446744073709551602ULL);
        }
        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_1)) % (((/* implicit */int) arr_23 [4ULL] [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 2] [i_0]))))))) == (arr_25 [i_0 - 2] [(signed char)14] [i_0] [(signed char)14] [21ULL])));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 3) 
            {
                {
                    var_29 -= ((/* implicit */_Bool) ((max((((/* implicit */int) max(((unsigned char)45), ((unsigned char)1)))), (((((/* implicit */int) (unsigned char)213)) >> (((16772499503342519730ULL) - (16772499503342519715ULL))))))) | (((/* implicit */int) min((var_10), (arr_13 [i_9 - 1] [i_9 - 1] [i_8] [i_8] [i_0 - 2] [i_0 + 2]))))));
                    var_30 = ((/* implicit */signed char) (((-(140737488355328ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)50))))) > (min((((/* implicit */unsigned long long int) 287283784)), (6ULL)))))))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) < (var_5)));
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 15; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 4; i_14 < 17; i_14 += 4) 
                        {
                            {
                                var_32 += ((/* implicit */int) var_14);
                                var_33 = min((min((((/* implicit */unsigned long long int) arr_26 [i_14 + 1] [i_13 + 4] [i_13 + 2] [6ULL] [i_13 + 3])), (16772499503342519740ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_14 - 2] [i_13 + 4] [i_13 + 3] [i_13] [i_13 + 3]))) * (arr_22 [i_11] [i_13 + 2] [i_13] [i_11])))));
                            }
                        } 
                    } 
                    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_34 [i_10] [10ULL])) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) arr_5 [(unsigned char)8] [i_11] [i_10]))))))) + (min((arr_9 [i_10] [i_11] [i_11] [i_12]), (arr_48 [i_10] [i_11] [i_12])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 3; i_16 < 16; i_16 += 3) 
                        {
                            {
                                var_35 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) ^ (arr_53 [i_10] [i_12] [i_10])))) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) != ((-(arr_49 [i_10] [(signed char)8] [i_10] [i_15])))))));
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((4611686018427387648LL) / (((/* implicit */long long int) var_3))))), ((-(arr_35 [i_10] [i_10] [i_12] [2])))))))))));
                            }
                        } 
                    } 
                    arr_55 [(signed char)7] [i_11] = max((((min((4606994811834855411ULL), (3597854757342384668ULL))) + (((/* implicit */unsigned long long int) arr_11 [i_11] [i_10] [i_11] [i_11] [i_12] [i_12])))), ((+(8651582359202413477ULL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        var_37 = ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)204)));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_0 [i_10]))));
                        var_39 |= arr_47 [i_17] [i_12] [i_12] [i_11] [i_10];
                    }
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned char) 184902674);
}
