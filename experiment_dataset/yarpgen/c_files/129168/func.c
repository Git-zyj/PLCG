/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129168
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_10 |= ((((/* implicit */_Bool) min((((var_3) >> (((var_6) + (7817711898444804205LL))))), (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(1842262616U)))) && (((/* implicit */_Bool) -3319161686682036836LL)))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_5))) | (3319161686682036836LL))))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((int) var_5));
        arr_7 [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))))), (min((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1]) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) var_1)))))));
        var_11 = ((/* implicit */short) arr_3 [i_1]);
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_10 [10LL] |= ((((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_2] [i_2])), (arr_1 [i_2] [i_2]))))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)31)), (0U)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) var_9)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3319161686682036837LL)) ? (((/* implicit */int) var_1)) : (var_8)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -3319161686682036835LL)))))) : (((/* implicit */int) ((short) 4048912629453860584LL)))));
    }
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((262143LL) % (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((arr_0 [i_3] [i_3]) % (((/* implicit */int) arr_12 [i_3]))))))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_3))) * (((((/* implicit */_Bool) 9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [(unsigned char)15]))))))) ? (arr_0 [i_3] [i_3]) : (((/* implicit */int) (!(arr_12 [i_3]))))));
    }
    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((1558745760) >> (((((/* implicit */int) min((var_5), (var_5)))) - (60)))))) ? (((/* implicit */int) ((short) arr_14 [i_4 + 3]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_4 + 3])) : (-10)))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6648329995915630935LL)) ? (784661407) : (((/* implicit */int) (short)-28737))))) && (((/* implicit */_Bool) ((short) arr_16 [i_4 - 1])))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((int) arr_17 [i_4 + 3])) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)19755))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_4 + 1])) : (((((/* implicit */int) arr_14 [i_4 + 1])) ^ (var_8)))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) <= (arr_19 [(_Bool)1])))))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_19 [(_Bool)1])))))))));
        /* LoopSeq 4 */
        for (unsigned short i_6 = 3; i_6 < 23; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_20 ^= (+((-(((4103673746191233729ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_23 [17U] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) ? (var_0) : (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_0)) ? (2990346015U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
            }
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                var_22 += ((/* implicit */unsigned short) var_3);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_9 = 2; i_9 < 23; i_9 += 3) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(unsigned char)3] [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [(_Bool)1] [i_9]))))) ? ((-(((/* implicit */int) arr_27 [i_5] [i_6 - 3] [i_9])))) : (((((/* implicit */_Bool) -1558745760)) ? (((/* implicit */int) arr_21 [i_5] [i_6] [i_5])) : (((/* implicit */int) arr_23 [i_8] [i_5]))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 2; i_10 < 23; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)134))))))))));
                        var_25 ^= ((/* implicit */short) ((_Bool) ((int) 129491781U)));
                        var_26 = ((/* implicit */unsigned short) (-(var_3)));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_28 [i_10] [i_9] [(unsigned char)16] [i_6]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) == (((/* implicit */int) arr_30 [i_10] [(unsigned short)3] [i_8] [i_6 - 1] [i_5]))));
                    }
                    arr_31 [i_5] [7U] [i_8] [i_5] = ((/* implicit */short) ((unsigned long long int) arr_27 [i_6 + 1] [i_9 - 1] [i_9 - 1]));
                    arr_32 [i_5] [i_6] [22LL] [i_5] [(unsigned short)23] = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_9 - 1] [i_6 - 1]))));
                }
            }
            arr_33 [i_5] [i_5] [i_5] = -515734943;
        }
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_28 += ((int) ((((/* implicit */int) var_5)) | ((~(((/* implicit */int) (signed char)-124))))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (((_Bool)0) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~(var_8)))))))));
            arr_36 [i_5] = ((/* implicit */signed char) (-((+(((/* implicit */int) ((unsigned short) var_1)))))));
        }
        for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_27 [i_12] [i_5] [i_5]))));
            var_31 = ((/* implicit */long long int) var_2);
            arr_40 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_5]))) - (arr_34 [i_5] [i_5] [i_12])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 4048912629453860584LL)))) : (((long long int) (_Bool)1))));
        }
        for (long long int i_13 = 1; i_13 < 21; i_13 += 1) 
        {
            arr_45 [i_5] = ((/* implicit */long long int) var_1);
            var_32 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)201)) >> (((((/* implicit */int) arr_42 [i_5] [i_5] [20LL])) - (59052))))))) & (max((((/* implicit */int) var_5)), (var_8)))));
        }
        arr_46 [(short)16] &= ((((arr_19 [20LL]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))))) ? (var_6) : (arr_34 [i_5] [i_5] [i_5]));
    }
    var_33 *= ((/* implicit */short) ((((((var_4) >> (((36034604U) - (36034602U))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) ((short) var_3)))))) : (((((/* implicit */int) var_2)) - (((((var_8) + (2147483647))) << (((var_8) + (1726106036)))))))));
}
