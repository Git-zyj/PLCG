/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150869
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [6LL] [i_1] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_7 [(_Bool)1] [i_1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((int) arr_5 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) -1746100424207179276LL)) ? (-1746100424207179257LL) : (((/* implicit */long long int) 1062256242))))))));
                    var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(short)19] [i_0]))) : (1746100424207179285LL)))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((-(arr_6 [i_2])))));
                    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_0]), (((/* implicit */int) ((signed char) arr_2 [i_0] [(_Bool)1])))))) ? (((/* implicit */int) max((arr_5 [i_2] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_2])))) : ((-(arr_6 [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((max((((/* implicit */long long int) 1062256242)), (9223372036854775806LL))) != (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_16 [i_0] [i_1] [(unsigned char)9] [i_1] [i_4]))))))))), (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [(signed char)8]) / (arr_10 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0])))));
                                var_17 = ((/* implicit */long long int) (+(arr_6 [i_2])));
                                arr_17 [i_1] = 3875237624192775604LL;
                                arr_18 [i_1] [i_3] [i_2] [(signed char)12] [i_1] = ((/* implicit */unsigned char) arr_5 [5] [5] [(_Bool)0]);
                                arr_19 [20LL] [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? ((~(arr_6 [i_3]))) : ((+(((/* implicit */int) min((arr_3 [(short)4] [i_3] [(short)4]), (arr_3 [(short)1] [i_3] [14LL]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_3))), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)39458)) : (((/* implicit */int) (signed char)-65))))))) : (((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) | (((/* implicit */unsigned long long int) ((((var_8) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))))));
    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) (unsigned short)59855)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)7)), ((short)-28809)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)109)))))) : (((/* implicit */int) (unsigned char)0))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_23 [i_7] [i_6])))), (min((((/* implicit */int) (unsigned char)255)), (1820087977))))))));
                    var_21 = ((/* implicit */int) max(((unsigned short)42909), ((unsigned short)59855)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 24; i_8 += 4) 
                    {
                        arr_31 [2ULL] [i_5] [i_6] [i_5] = ((long long int) ((unsigned long long int) (short)8192));
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_26 [i_7] [i_6] [i_5])) ? (1746100424207179275LL) : (72057594037927935LL))) >> (((/* implicit */int) arr_30 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8] [i_8 + 1] [i_8 - 2]))));
                        arr_32 [i_8] [i_8] [i_7] [(signed char)24] [i_6] [i_5] = ((/* implicit */signed char) ((arr_30 [i_8 - 1] [i_8 - 1] [i_8 - 1] [(signed char)17] [i_8] [i_8 - 3]) ? (((/* implicit */int) (short)-16)) : (((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) arr_20 [(unsigned char)18])) : (((/* implicit */int) arr_23 [(short)23] [i_7]))))));
                    }
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_23 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)25273))));
                        arr_36 [i_5] [(unsigned char)6] [i_6] [i_7] [i_9] = ((/* implicit */signed char) min((max((min((var_1), (((/* implicit */unsigned long long int) (short)28808)))), (((/* implicit */unsigned long long int) min(((_Bool)0), (arr_30 [i_5] [i_5] [(unsigned short)13] [i_7] [i_9] [(unsigned short)8])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_9] [i_5] [i_5])))))));
                    }
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) min((((short) arr_22 [i_6] [i_5])), (max((((/* implicit */short) arr_22 [i_5] [(unsigned char)11])), ((short)25289)))));
                        arr_40 [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)22616)), ((-(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                        arr_41 [i_5] [i_6] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((int) 1062256240));
                        arr_42 [i_10] [i_7] [i_6] [i_5] &= ((/* implicit */_Bool) (unsigned short)0);
                    }
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        arr_45 [(unsigned char)19] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_6] [i_11])) % (((/* implicit */int) arr_35 [(_Bool)1] [i_6] [i_7] [i_7] [i_11]))))))) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65528))))), (arr_23 [i_6] [i_5])))) : (((/* implicit */int) arr_22 [(unsigned short)13] [i_6]))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_30 [i_11] [(signed char)17] [i_7] [i_7] [i_6] [i_5]))))))) ? (((((/* implicit */_Bool) ((short) arr_30 [(_Bool)1] [i_6] [(_Bool)1] [i_7] [i_7] [i_11]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11] [i_7] [i_6]))) >= (arr_39 [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_5]))))))) : (max((-1062256249), (((/* implicit */int) arr_22 [i_7] [i_11]))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) min(((~(((/* implicit */int) min(((short)32767), ((short)(-32767 - 1))))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (((unsigned short) (short)(-32767 - 1))))))));
}
