/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111959
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_3 [i_0] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) -676421383))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((3401889466U) >> (((-2553924180084515703LL) + (2553924180084515729LL)))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 18446744073709551597ULL);
                    var_11 -= ((/* implicit */signed char) (+((-(((/* implicit */int) (_Bool)1))))));
                    var_12 = ((/* implicit */unsigned char) var_7);
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6120))) <= ((-(arr_0 [i_0] [i_3])))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)192)) ? (((long long int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */long long int) ((((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned short)59406)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2441029605U)) ? (((/* implicit */int) (unsigned short)6120)) : (((/* implicit */int) (_Bool)0))))) : (arr_3 [i_0] [i_3]))))));
                }
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_18 [i_5] [i_1] [i_4] [i_5] [i_1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((signed char)100), (((/* implicit */signed char) (_Bool)1)))))));
                        var_14 = ((/* implicit */unsigned short) ((min((min((5U), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) min(((short)-13571), (((/* implicit */short) (_Bool)1))))))) >> (((min((min((3846500577348689029LL), (((/* implicit */long long int) (unsigned short)18)))), (((/* implicit */long long int) (short)-12937)))) + (12955LL)))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        arr_21 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_6] [i_6] [i_6 + 1] [i_6 - 1]))));
                        var_15 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_4]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_7] [i_4] [i_7])) ? (arr_11 [i_7] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_7] [i_0] [i_0]))))))));
                            arr_29 [i_0] [i_1] [i_0] [i_0] [i_7] [i_8] = ((short) (_Bool)1);
                            var_17 = ((/* implicit */int) -466917794806430994LL);
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_18 -= ((/* implicit */unsigned int) (unsigned char)255);
                            arr_34 [i_0] [i_0] [i_0] [i_7] [13ULL] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 151408305U)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147538080294600068LL)) || (((/* implicit */_Bool) 880610127U))))), ((((_Bool)1) ? (arr_11 [i_0] [i_4] [i_9]) : (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_4] [i_0] [i_7]))))))));
                            var_19 = ((/* implicit */unsigned int) ((((arr_31 [i_7] [i_7] [i_4] [i_7] [i_9]) < (arr_31 [i_0] [i_1] [i_4] [i_7] [i_9]))) ? (max((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_5)))) : ((((_Bool)1) ? (arr_31 [i_0] [i_0] [i_4] [i_7] [i_9]) : (((/* implicit */long long int) 151408282U))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 0U))));
                            var_22 &= ((/* implicit */short) (-(((((/* implicit */_Bool) var_5)) ? (3367021659610808761ULL) : (((/* implicit */unsigned long long int) 1024934377033454122LL))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)224)) & (((/* implicit */int) ((_Bool) var_8)))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 3; i_11 < 23; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_0]);
                            var_26 = ((/* implicit */unsigned char) (unsigned short)0);
                            arr_40 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_0] [i_11] [i_11] [i_11 + 1] [i_0])) | (-782698378)));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) 562949819203584LL)) : (var_3))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_28 += ((/* implicit */unsigned int) min(((((-(1685311760870374756ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)28314))))))), (((/* implicit */unsigned long long int) ((signed char) min((3567439468U), (((/* implicit */unsigned int) (short)-8192))))))));
                            arr_43 [i_0] [(_Bool)1] [i_4] [(_Bool)1] [i_4] [i_12] [i_0] = ((/* implicit */int) max((655091584178598762ULL), (((/* implicit */unsigned long long int) (unsigned short)38756))));
                            var_29 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 2568180404U)) ? (3604221641073777710ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))) & (max((var_4), (arr_0 [i_4] [i_12]))))), (min((((/* implicit */unsigned long long int) max(((short)9001), (var_2)))), (min((arr_11 [i_12] [i_7] [i_1]), (var_3)))))));
                        }
                        var_30 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (max((((unsigned int) 13U)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3901686060U)))))));
                        var_31 -= 4441779917548587063ULL;
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        arr_47 [i_0] [i_0] [i_1] [(short)16] [i_4] [i_13] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_4] [i_13]);
                        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0]))));
                        arr_48 [i_0] [i_1] = ((var_4) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17496407036780802176ULL)) ? (((/* implicit */int) (short)8975)) : (((/* implicit */int) (_Bool)1))))));
                    }
                }
                var_33 = ((/* implicit */signed char) ((297416577669960536LL) & (((-6LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(613523848))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 12; i_14 += 3) 
    {
        for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            {
                arr_55 [i_15] [i_14] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_30 [i_14] [i_14] [i_14] [i_15] [i_15]), (arr_30 [i_14] [i_15] [i_14] [i_15] [i_15])))), (((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                arr_56 [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_14] [0]), (arr_0 [i_14] [i_14])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_14] [i_15]) > (arr_0 [i_14] [i_15]))))) : (min((2686296579870647503LL), (((/* implicit */long long int) (_Bool)0))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_10), (((((/* implicit */int) var_9)) < (((/* implicit */int) (_Bool)0))))))) - (((/* implicit */int) (!(var_9)))))))));
}
