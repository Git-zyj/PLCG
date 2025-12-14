/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144347
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)40))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))) : (var_3)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_11 = ((((/* implicit */_Bool) arr_5 [9ULL] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) : (arr_5 [i_0 - 1] [i_0 + 1]));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) (~(arr_5 [i_0 - 1] [i_0 - 1])));
        }
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [(unsigned char)16] [i_0 - 1] [i_2 + 2])), (var_6)))))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_2 - 3] [i_0] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_0] [i_2 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-2684375040174030017LL) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0] [i_2 + 1])) ? (arr_3 [i_0 - 1] [i_0] [i_2 - 3]) : (arr_3 [i_0 - 1] [i_0] [i_2 - 2])))) ? (((arr_3 [i_0 - 1] [i_0] [i_2 + 1]) ^ (arr_3 [i_0 + 1] [i_0] [i_2 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40)))));
                        var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), ((~((~(var_3)))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((_Bool)0) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) var_4)))), ((((_Bool)0) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)28085)))))));
                        var_17 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [(signed char)0] [i_0 - 1] [i_2 - 3] [i_2 - 2] [(signed char)0])) || (((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))), ((~(((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_0]))))));
                    }
                } 
            } 
        }
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16492674416640ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_14 [16U])) : (((/* implicit */int) var_1))))) ? (max((var_7), (((/* implicit */unsigned long long int) 2802488705U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))));
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    }
    for (signed char i_6 = 1; i_6 < 16; i_6 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_7 = 3; i_7 < 15; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 15; i_9 += 4) 
                {
                    {
                        arr_29 [i_6] [i_9] [i_8 + 3] [i_7 + 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (2802488705U)))) ? (((int) arr_8 [i_7 - 2] [i_6 - 1] [i_8 + 2])) : (((/* implicit */int) max((arr_8 [i_7 - 3] [i_6 - 1] [i_8]), (arr_8 [i_7 - 2] [i_6 + 1] [(unsigned short)5]))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 853506353U))));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (arr_11 [i_6 - 1] [i_8 + 1])))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (min((arr_4 [i_6 - 1] [i_6]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) min((-1949480687), (((/* implicit */int) (signed char)59)))))))));
                            arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_9 + 2])) ? (((/* implicit */int) arr_8 [i_6 + 1] [i_8 + 3] [i_9])) : (((/* implicit */int) var_2))))), ((~(((((/* implicit */_Bool) (signed char)0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10] [i_6] [i_8] [i_6] [i_6])))))))));
                            var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_15 [i_7 - 1] [i_7 - 1]))), (min((var_8), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (arr_27 [i_6] [i_8] [i_9])))))));
                            arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) var_8)))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_4)))))))), (max((arr_11 [i_6 - 1] [i_9 - 1]), (arr_11 [i_6 + 1] [i_9 + 2])))));
                        }
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                        {
                            arr_38 [(unsigned char)14] [i_8 - 1] [(unsigned char)14] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_8 + 2] [i_9 - 1])) || (((/* implicit */_Bool) arr_20 [16ULL])))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_1 [i_7]))))) ? (arr_3 [i_7 - 3] [14] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6 - 1] [i_7 - 3])))))));
                            arr_39 [i_6] [i_7] [(_Bool)1] [i_9] [i_11] [(unsigned char)10] = ((/* implicit */unsigned long long int) arr_14 [i_6]);
                            arr_40 [i_6] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 742309038U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) : (11U))), (min((((/* implicit */unsigned int) (signed char)-103)), (0U)))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_0))));
                        }
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
                        {
                            var_24 |= ((/* implicit */short) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((2928308282U), (((/* implicit */unsigned int) (signed char)59))))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_6]))) : (4410698578174595879ULL))))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((4359071264596062173LL), (((/* implicit */long long int) (unsigned char)145))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            for (signed char i_14 = 1; i_14 < 14; i_14 += 1) 
            {
                for (unsigned int i_15 = 3; i_15 < 14; i_15 += 3) 
                {
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_9))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)215)) == (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3)))))))));
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6 + 1] [i_14 + 2] [i_15 - 3] [i_13] [i_14 + 2])) || ((!(((/* implicit */_Bool) arr_13 [i_6])))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_14 [i_6])))) ? (((/* implicit */int) arr_47 [i_14 + 2] [i_13] [i_6 + 1] [i_15])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (_Bool)1))))))) : (var_3)));
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 891052139U)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)59))))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_36 [i_6 - 1] [(short)12] [i_6 - 1] [i_6 - 1] [i_13] [i_6 - 1] [i_6 - 1])))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [i_6 - 1] [i_14 + 2] [i_14 + 2] [i_15 - 3]), (((/* implicit */int) arr_24 [i_6 + 1] [i_14 + 1]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_3))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_13] [i_15 - 1]))))) : (0ULL))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_16 = 1; i_16 < 16; i_16 += 4) /* same iter space */
    {
        var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(1048575)))) ? (min((((/* implicit */int) arr_44 [i_16 + 1] [i_16 + 1] [i_16 - 1])), (((((/* implicit */_Bool) arr_52 [i_16] [(signed char)10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)30)))))) : (min((((/* implicit */int) (short)127)), (arr_10 [(unsigned short)5] [i_16] [(unsigned short)5] [i_16 - 1])))));
        var_32 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_8)) : ((~(arr_9 [i_16] [i_16 - 1]))))) << (((((((/* implicit */_Bool) (signed char)-123)) ? (var_8) : (((/* implicit */int) var_4)))) + (537235610)))));
        arr_56 [i_16] = ((/* implicit */unsigned int) var_0);
    }
    var_33 = ((/* implicit */signed char) ((unsigned int) var_9));
    var_34 = ((/* implicit */unsigned short) var_8);
}
