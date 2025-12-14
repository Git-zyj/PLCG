/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146270
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_10 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) << (((((/* implicit */int) (unsigned short)30536)) - (30536)))))) || (((/* implicit */_Bool) 288195191779622912ULL))));
        arr_3 [i_0] = (~(((unsigned int) var_4)));
        var_11 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 3])) - (((/* implicit */int) arr_2 [i_0 - 1]))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1 + 1] [2])) : (((/* implicit */int) arr_4 [i_1 - 1] [10]))))) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34988))) : (36028797016866816ULL))))))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_5 [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) / (((/* implicit */int) ((unsigned short) (unsigned short)35000)))))) : (arr_5 [i_1])));
    }
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            var_14 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_7 [10] [i_3])) < (((/* implicit */int) (signed char)7)))));
            var_15 = ((((/* implicit */_Bool) ((36028797016866827ULL) >> (((max((((/* implicit */unsigned long long int) var_9)), (36028797016866827ULL))) - (36028797016866793ULL)))))) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (arr_8 [i_2])))) / (((((/* implicit */_Bool) arr_8 [i_2])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_21 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_9)))), (arr_5 [i_2 - 1])))) && (((/* implicit */_Bool) arr_20 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2]))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) 17575265195860263047ULL)) ? (36028797016866837ULL) : (18410715276692684789ULL))) : (((min((((/* implicit */unsigned long long int) var_4)), (17575265195860263047ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_6] [i_2] [i_2])) < (((/* implicit */int) var_0))))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_7 = 4; i_7 < 10; i_7 += 1) 
        {
            arr_24 [i_2] = ((/* implicit */unsigned short) arr_23 [i_7]);
            var_17 = max((((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_7 - 4] [i_7] [i_2] [i_7 - 2] [i_7])) ? (36028797016866818ULL) : (8974444647120215388ULL))), (((/* implicit */unsigned long long int) ((arr_15 [i_7] [i_7 + 1] [i_7 + 1] [i_2] [i_7 - 4] [i_7]) ^ (((/* implicit */int) var_8))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                for (unsigned short i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_18 = (~(((((/* implicit */int) ((((/* implicit */_Bool) 18410715276692684788ULL)) && (((/* implicit */_Bool) (signed char)22))))) ^ (min((((/* implicit */int) arr_7 [i_2] [i_7])), (var_4))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((unsigned int) var_7)))) >> (((int) 11ULL))));
                        arr_29 [i_2] [i_2] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((((/* implicit */_Bool) ((arr_19 [2] [i_7] [i_8] [i_9] [i_7] [i_9] [i_2 - 1]) - (arr_13 [i_2] [i_2])))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) (unsigned short)47280))))))));
                        arr_30 [1ULL] [1ULL] [i_2] [i_9] = var_4;
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 4294967295U))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (unsigned short)19183)))));
        }
        for (int i_10 = 2; i_10 < 8; i_10 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [i_10])) ? (arr_33 [i_10]) : (arr_33 [i_10]))) + (((var_1) % (arr_33 [i_10]))))))));
            arr_34 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned int) var_1));
            arr_35 [i_2] = ((/* implicit */unsigned short) arr_33 [i_2]);
        }
        arr_36 [i_2] = ((/* implicit */int) 18410715276692684782ULL);
    }
    var_23 *= ((/* implicit */int) ((((/* implicit */int) ((signed char) var_7))) < (((int) (unsigned short)62795))));
    var_24 &= ((/* implicit */int) var_8);
}
