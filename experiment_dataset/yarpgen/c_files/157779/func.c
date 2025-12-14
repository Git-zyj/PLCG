/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157779
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
    var_16 *= ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) 1114776090090540330ULL)) ? (((/* implicit */int) (unsigned char)213)) : (var_4))), (((/* implicit */int) var_10))))));
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) ^ (var_1)))) ? (((/* implicit */int) ((signed char) -1))) : ((-2147483647 - 1))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (var_1));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_18 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_12)), (min((arr_1 [i_0] [i_0 - 2]), (((/* implicit */unsigned long long int) (short)-6951))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_19 &= ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_0] [i_0 + 1] [i_2] [i_2]));
                arr_6 [i_2] = ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 4])));
            }
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                    arr_11 [(signed char)7] [i_1] [(signed char)7] [i_1] [i_1] [i_4] = ((/* implicit */int) (~(arr_10 [i_0] [i_0 - 1] [i_4] [(unsigned short)8] [i_0 - 2] [i_0 + 1])));
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_3] [i_4]))));
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_22 = (((((+(arr_8 [i_1]))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_8)) + (11095))) - (48))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 4294967278U)) : (arr_1 [i_6] [(unsigned char)3])))) ? (((/* implicit */long long int) var_11)) : (arr_9 [i_6] [i_1] [i_1])));
                        var_24 ^= ((/* implicit */unsigned int) arr_14 [i_0 - 2] [i_0 - 4]);
                        arr_19 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) var_14);
                        var_25 = ((/* implicit */int) (+(arr_10 [i_0 - 2] [i_0] [i_3] [2ULL] [i_0 - 3] [i_0 - 1])));
                    }
                    for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_23 [1ULL] [i_1] &= ((/* implicit */long long int) arr_7 [i_5] [i_1] [i_0 - 2]);
                        arr_24 [i_7] [7LL] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) arr_20 [i_0 - 1] [i_1] [i_3] [(short)9] [i_1] [i_5]);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_0 - 1])) >= (((/* implicit */int) (_Bool)0))));
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    var_27 = ((/* implicit */int) ((unsigned int) arr_21 [i_8 - 1]));
                    arr_28 [i_8] [(signed char)5] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-10214))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)4925)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_3]))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_8 + 1] [i_3] [i_0] [i_0])) ? (3695103149U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 4] [i_0 - 4] [i_3] [i_8])))));
                }
            }
            arr_29 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(arr_14 [i_0] [i_1])));
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_29 ^= ((/* implicit */unsigned char) arr_12 [i_0] [i_0 - 2] [i_0 - 1] [i_9]);
                arr_34 [i_0] [i_0] = ((/* implicit */unsigned short) 214054657U);
            }
            for (short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 8; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) (((+(min((var_1), (((/* implicit */long long int) var_15)))))) == (((/* implicit */long long int) var_11))));
                            var_31 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */int) ((unsigned char) var_15))), (arr_32 [i_0] [i_9]))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 2] [8ULL] [i_0 - 2]))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_9] [i_9] [i_11])) ? (((/* implicit */int) arr_17 [i_0] [i_9] [i_11])) : (((/* implicit */int) var_14)))) : (((((((/* implicit */int) var_8)) + (2147483647))) << (((/* implicit */int) arr_21 [i_0 - 4]))))));
            }
            var_33 = ((/* implicit */unsigned short) var_10);
            arr_42 [i_0] [i_0] = ((/* implicit */signed char) arr_21 [i_0]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 1; i_14 < 7; i_14 += 4) 
            {
                var_34 = ((/* implicit */unsigned short) var_3);
                var_35 -= ((/* implicit */unsigned int) var_10);
            }
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                var_36 ^= (!(((((/* implicit */_Bool) arr_44 [i_0 - 4] [i_0 - 3] [i_0 - 3])) && (((/* implicit */_Bool) arr_44 [i_0 + 1] [i_0 - 4] [i_0 - 1])))));
                var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            }
        }
        var_38 = ((/* implicit */unsigned long long int) (-(min((var_11), (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [3LL] [i_0] [3LL] [2]))))));
        var_39 = ((/* implicit */int) (~(max((var_11), (((arr_2 [i_0] [i_0 - 1]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
        arr_50 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0])), (arr_14 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0 - 2] [i_0])) ? (3677698091212625609LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_0])))))) : ((~(arr_1 [i_0] [i_0]))))));
    }
}
