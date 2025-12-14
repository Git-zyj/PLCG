/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130451
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
    var_13 = ((/* implicit */int) var_11);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(2163984301U))))))), (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)127)))))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((max((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (2764090300199613389LL))), (((/* implicit */long long int) arr_0 [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [(signed char)13])) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (143)))))))))));
        arr_3 [i_0] &= ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (var_8)))) : (((/* implicit */int) arr_0 [i_0] [(short)16]))))));
        arr_4 [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [18])))))) % (max((((((/* implicit */_Bool) 2251799813685247ULL)) ? (arr_7 [(_Bool)1]) : (((/* implicit */long long int) 3528570582U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (2130982995U))))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 4; i_4 < 22; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            var_16 += ((((((/* implicit */int) arr_13 [i_4] [i_4 + 1] [i_4 - 3] [i_4] [i_4 - 2] [i_4 + 1])) % (((/* implicit */int) arr_13 [i_4] [i_4 + 2] [i_4 - 3] [i_4 + 2] [i_4] [i_4])))) % (((/* implicit */int) var_1)));
                            arr_19 [i_1] [i_1] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)233)), (((((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1])) % (((/* implicit */int) max((var_11), (((/* implicit */short) arr_11 [i_1] [i_2] [i_1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_4] [i_4 - 3] [i_4]);
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_2])) ? (((/* implicit */int) ((signed char) arr_12 [i_1] [i_1]))) : (((((/* implicit */int) arr_20 [i_6] [i_2] [i_4] [(signed char)12] [i_6])) / (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                            arr_23 [i_1] [i_3] [i_1] = ((/* implicit */signed char) 1955774075U);
                            arr_24 [22ULL] [i_2] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2163984301U)) | (arr_21 [i_1] [i_2] [i_3] [i_3] [i_4] [i_6])));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_28 [8U] [i_1] [i_1] [i_3] [i_4 - 2] [i_4] [15ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_16 [i_1] [i_2] [i_3] [i_1] [(_Bool)1]), (arr_16 [i_7] [i_2] [i_2] [i_4] [i_7])))) % (((/* implicit */int) ((signed char) 70298665U)))));
                            arr_29 [i_1] = ((/* implicit */long long int) (~(((arr_14 [i_1] [i_4 - 1] [i_4 - 3] [i_4 - 3] [i_4 + 1] [i_4 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_30 [(signed char)10] [i_2] [i_2] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) * (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2339193227U)), (arr_9 [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) 70298665U)) : (arr_21 [i_1] [10ULL] [i_3] [(_Bool)1] [i_7] [i_4])))))) ? (min((((/* implicit */unsigned long long int) var_10)), ((-(2015235405883053531ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2339193221U)))))))))))));
                            arr_31 [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [i_4] [i_7])) ? (((((/* implicit */unsigned long long int) arr_15 [i_4 - 3] [i_4 - 3] [i_4 - 1] [i_7] [i_1])) % (16431508667826498084ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_1] [i_2] [i_2] [i_3] [i_3] [i_7]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_19 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])), (11411999660428421786ULL)))))) % (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_25 [i_1] [i_4] [i_1] [i_1] [i_1])), ((unsigned char)14))))) % (max((((/* implicit */unsigned int) (signed char)126)), (arr_12 [i_1] [i_2])))))));
                            var_20 *= ((/* implicit */unsigned long long int) min((max((min((arr_9 [i_1] [i_1]), (((/* implicit */long long int) arr_12 [i_3] [i_3])))), (((/* implicit */long long int) arr_25 [i_1] [i_2] [i_2] [i_4 - 1] [i_8])))), (((/* implicit */long long int) min((arr_33 [i_4 - 3] [i_2] [i_8 + 1]), (((/* implicit */unsigned char) arr_27 [i_8 + 1] [i_8] [i_8])))))));
                        }
                        for (signed char i_9 = 1; i_9 < 23; i_9 += 4) 
                        {
                            arr_36 [i_9] [i_1] [i_3] [i_2] [i_1] [3ULL] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)6)), ((unsigned char)206))))))));
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) max((7232233206350890590ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1)))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((max((var_5), (2339193220U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-24)) % (((/* implicit */int) var_3))))))))));
                            arr_38 [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */long long int) ((((/* implicit */int) (signed char)93)) / (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
            arr_39 [13] [i_2] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)14453)), (max((((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1])) : (arr_8 [i_1] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (2147483647))))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_1] [i_1])) * (((((/* implicit */int) arr_1 [i_1] [i_1])) * (((/* implicit */int) (unsigned char)199))))));
            arr_42 [i_1] = ((/* implicit */unsigned char) var_12);
        }
    }
    for (unsigned short i_11 = 1; i_11 < 14; i_11 += 1) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_8))));
        var_24 ^= ((/* implicit */unsigned char) min((max(((-(arr_21 [i_11] [i_11] [i_11] [10U] [i_11] [i_11]))), (((/* implicit */unsigned long long int) max((70298673U), (((/* implicit */unsigned int) (signed char)109))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
        arr_46 [(unsigned short)17] = ((/* implicit */unsigned short) (((-(arr_7 [(short)22]))) % (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_11] [(unsigned short)20] [i_11 + 2] [(unsigned short)20] [i_11])) % ((~(arr_34 [i_11] [i_11] [(unsigned char)12] [i_11] [i_11]))))))));
    }
    var_25 = ((/* implicit */_Bool) var_10);
    var_26 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (var_9))) | (((/* implicit */unsigned int) (((~(((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_0)))))));
}
