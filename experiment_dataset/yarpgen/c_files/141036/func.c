/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141036
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_10 = (+(min((var_4), (((/* implicit */unsigned long long int) var_9)))));
                    var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_5 [i_2] [i_2 - 1] [i_2 - 2]))))) : (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [6LL] [(unsigned short)7])))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_0] [(signed char)11] [i_2])), ((+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_4 [i_2 + 2])))))))));
                                var_12 = ((/* implicit */long long int) var_4);
                                var_13 = ((/* implicit */_Bool) var_8);
                                var_14 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) 4629779401510434463ULL)) && (((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) var_0))) % ((-(2898524783755768394ULL)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
            var_15 = ((/* implicit */unsigned long long int) (+(arr_12 [i_0] [(_Bool)1] [i_0] [i_5] [i_0] [i_0])));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (4629779401510434463ULL))))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_15 [i_6])) - (var_8)));
                arr_20 [i_0] [i_5] [(_Bool)1] [i_6] = ((/* implicit */_Bool) ((arr_0 [i_6] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5] [i_6] [i_6]))) : (var_0)));
                var_18 |= ((/* implicit */signed char) ((arr_16 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) var_1)) : (((unsigned long long int) (short)-2683))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_7])))) ? ((+(var_0))) : ((-(var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_0)))) ? (min((((/* implicit */unsigned long long int) (short)2703)), (var_4))) : (arr_18 [i_0] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(unsigned short)5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)40)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))))))));
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_7] [i_0])), ((((_Bool)1) ? (2563908943U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) var_9)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_19 [i_0] [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_5 [i_7] [i_7] [(_Bool)1])) : (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_0])))) >> (((var_4) - (1318799638183881206ULL)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))) % (var_1)))));
        }
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_28 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? (min((((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)57579)) - (57579))))), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [(signed char)6] [i_8]) + (1567280144214978489LL)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_8))))))));
            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_27 [i_0])) : (((/* implicit */int) arr_27 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0]))))) : (((/* implicit */int) min((arr_27 [i_8]), (arr_27 [i_0]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((((/* implicit */long long int) (((-(((/* implicit */int) arr_30 [i_0] [i_8])))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_8] [i_8] [i_0] [i_10] [i_11])))) % (var_7)))));
                            arr_37 [(short)0] [(short)0] [i_9] [(short)0] [i_10] [i_10] [i_11] = ((/* implicit */int) arr_29 [i_0]);
                            var_23 ^= ((/* implicit */_Bool) (+(((unsigned long long int) arr_12 [i_0] [i_8] [i_0] [i_10] [(signed char)4] [i_11 + 1]))));
                            arr_38 [i_10] [i_9] [i_10] [12LL] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) var_5)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_5))));
        }
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 2; i_15 < 12; i_15 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) (-(min(((-(var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7956)) & (((/* implicit */int) (short)-2703)))))))));
                                var_26 &= ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                    arr_49 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (arr_22 [i_0] [i_13] [i_13]) : (arr_22 [i_0] [i_13] [i_0]))) > (var_0)));
                    var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        var_28 &= ((/* implicit */short) (~(min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned char) var_2)))))));
    }
    var_29 += ((/* implicit */short) min((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -2281326186457699308LL)))) : (((var_5) ? (var_7) : (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
}
