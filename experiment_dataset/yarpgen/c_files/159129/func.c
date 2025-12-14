/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159129
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
    var_15 = ((/* implicit */signed char) 31ULL);
    var_16 = ((/* implicit */short) max((var_16), (var_6)));
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max(((unsigned short)7713), (((/* implicit */unsigned short) var_14)))))) ? ((((_Bool)0) ? (-5469080946022064239LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))))) : (((/* implicit */long long int) max((((/* implicit */int) var_14)), (((-1046799000) + (((/* implicit */int) (unsigned short)65528)))))))));
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (var_2) : (((/* implicit */long long int) ((int) 18446744073709551611ULL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((17179869184ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        arr_3 [(signed char)8] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)126))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_6 [i_1] [i_0 - 3] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (short)26788)) <= ((~(((/* implicit */int) (short)28)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26235)) ^ (((/* implicit */int) (_Bool)0)))))));
                var_21 ^= ((/* implicit */int) var_4);
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned long long int) arr_11 [i_0] [i_1] [i_3])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(1250142447))))));
                    arr_14 [i_1] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-46))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_5] [i_4] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) 1927974102)) <= (var_2)));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((arr_9 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0 - 1]) * ((-(arr_1 [i_0] [i_0]))))))));
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_5] [i_1] [i_5] = ((/* implicit */short) arr_15 [i_0] [i_1] [i_0 - 1]);
                    }
                }
                arr_19 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0 - 3] [i_0 - 3] [i_0 - 3]))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                arr_22 [i_0] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_9 [i_6] [i_0 - 1] [i_0] [i_0 - 1]) << (((((/* implicit */int) var_4)) - (26176)))))))) ? (((((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))))) / (arr_1 [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_4))) != (31ULL)))))));
                arr_23 [i_0] [i_1] = (+(((((/* implicit */unsigned long long int) ((-2428085157497334887LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * ((-(14164353789347914850ULL))))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                arr_27 [i_1] [i_7] = ((((/* implicit */_Bool) (short)-23015)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2428085157497334887LL));
                arr_28 [i_7] [i_1] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)118))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) (short)9033);
                    var_26 = var_12;
                }
            }
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (max((((((((/* implicit */unsigned long long int) 2428085157497334887LL)) - (var_12))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_0] [i_0] [i_1]), (((/* implicit */unsigned short) var_14)))))))), (((/* implicit */unsigned long long int) var_8))))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((unsigned int) arr_9 [i_0] [i_0 - 1] [i_0] [i_1])) << (((((int) arr_12 [i_0] [i_0] [i_1] [i_1])) + (472))))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
        {
            arr_34 [i_0 + 1] [i_0 + 1] [i_9] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 5518363238706953721ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1452))) : (2428085157497334877LL)))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 1; i_10 < 13; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_12 = 3; i_12 < 12; i_12 += 2) 
                        {
                            arr_44 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 144115188075855872ULL)) ? (arr_1 [i_10] [i_10 + 1]) : (arr_1 [i_10] [i_10 + 1])));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((-1250142447) / (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_10] [i_11])) != (((/* implicit */int) (_Bool)1))))))))));
                        }
                        arr_45 [i_0] [i_0] [i_9] [i_10] [i_11] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) -3)) ? (15747924955903101519ULL) : (max((5196045783321713683ULL), (((/* implicit */unsigned long long int) (short)16582)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((_Bool) 3964669901342687121LL)))));
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((signed char) arr_0 [i_0 + 3])))));
        }
        arr_50 [i_0] = ((/* implicit */signed char) (-(var_10)));
    }
}
