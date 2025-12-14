/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106921
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_12), ((-(var_12))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60621)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : ((~(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1] [i_1])) ? (arr_3 [i_0] [3ULL]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
                    var_20 = ((/* implicit */_Bool) var_5);
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) (!(var_17))))))) : (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) arr_11 [i_4] [i_3]);
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    {
                        arr_19 [i_3] [i_4] [i_4] [i_5] [(unsigned short)13] [i_6 + 1] |= ((/* implicit */_Bool) var_15);
                        arr_20 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3] [i_4])) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))));
                        var_22 = ((/* implicit */signed char) (_Bool)0);
                    }
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */int) ((var_17) ? (((((/* implicit */_Bool) -8894721838665837715LL)) ? (arr_9 [i_3]) : (arr_9 [i_7]))) : (((/* implicit */unsigned long long int) ((arr_16 [i_3] [i_3] [i_3] [i_3]) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (arr_5 [i_7])))) : ((+(((/* implicit */int) var_10)))))))));
            arr_24 [i_3] [i_7] [i_7] = ((/* implicit */_Bool) ((short) min((2LL), (((((/* implicit */_Bool) 2LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (-8894721838665837713LL))))));
            /* LoopSeq 2 */
            for (long long int i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 4; i_9 < 19; i_9 += 2) 
                {
                    var_24 = arr_16 [i_3] [i_7] [i_8] [i_9];
                    arr_30 [i_3] [i_8 + 2] [i_8] = ((((((((/* implicit */_Bool) arr_3 [i_3] [(unsigned short)11])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_7]))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9 - 2] [i_9 - 2] [i_9] [i_9] [i_9 - 2] [i_9 - 2])))))) : (min((max((var_8), (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) var_16))))))));
                    arr_31 [i_3] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_9] [i_9 + 2] [i_3] [i_3])) != (((/* implicit */int) arr_18 [i_9 - 3] [i_9 + 2] [i_9] [i_8 + 1] [i_8 + 1] [i_8])))) ? ((~(((/* implicit */int) (unsigned short)65408)))) : ((-(((/* implicit */int) min(((unsigned char)212), ((unsigned char)27))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_3] [i_7] [i_3] [i_9 - 1] [i_10]))))))))));
                        arr_34 [i_8] = ((/* implicit */unsigned char) max((1048448U), (var_9)));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_29 [i_3] [14ULL] [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) arr_27 [i_3] [(signed char)17] [i_8] [i_11]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4))))) : (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned int) arr_36 [i_11] [i_7] [i_7] [i_3]))));
                    arr_37 [i_3] [i_7] [i_8] = ((/* implicit */unsigned int) var_3);
                    arr_38 [i_3] [i_8] [i_8] [i_11] [i_7] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_12 [i_8] [i_8 + 1] [i_7])))));
                }
                arr_39 [i_8] [i_7] [i_8] = ((/* implicit */int) var_15);
                /* LoopNest 2 */
                for (signed char i_12 = 2; i_12 < 20; i_12 += 2) 
                {
                    for (unsigned short i_13 = 4; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((unsigned short) var_8));
                            var_28 = var_18;
                            var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))))) > (((/* implicit */int) var_10)));
                            arr_47 [i_3] [i_7] [(signed char)9] [i_12] [i_13] [i_8] = ((/* implicit */_Bool) min(((unsigned char)232), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305843009146585088LL)) ? (((/* implicit */int) arr_43 [i_13] [i_12 - 1] [i_8])) : (((/* implicit */int) var_6))))) > (min((var_5), (((/* implicit */unsigned long long int) (unsigned char)32)))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 2; i_14 < 19; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    for (long long int i_16 = 3; i_16 < 17; i_16 += 4) 
                    {
                        {
                            arr_54 [i_3] [(signed char)19] [i_14 + 1] [i_15] [(_Bool)1] [i_16] = ((/* implicit */signed char) var_12);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_17) ? (arr_41 [i_3] [i_3] [i_3] [i_3]) : (4293918848U))), (((/* implicit */unsigned int) ((unsigned char) 5855018466230795007ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_7)))))) : (max((((/* implicit */unsigned int) arr_46 [i_3] [i_14 - 2] [i_3] [i_16] [i_16 + 3])), (arr_42 [i_3] [i_3] [i_14] [i_15] [i_14 + 1])))));
                            var_31 -= (signed char)31;
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) min((((/* implicit */int) arr_50 [i_3] [i_7] [i_14] [i_7] [i_3])), (((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */int) arr_11 [i_3] [i_16])) ^ (((/* implicit */int) arr_27 [i_3] [18LL] [6ULL] [i_15])))) : (((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) arr_17 [i_14] [i_14] [i_7] [i_3]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_13))))), (((short) arr_13 [i_3]))));
                            arr_62 [i_3] [(_Bool)1] [(_Bool)1] [i_17] [i_17] [i_18] = arr_0 [i_3] [i_7];
                            arr_63 [i_3] [i_7] [i_7] [i_17] = ((/* implicit */unsigned char) min(((unsigned short)36166), (((/* implicit */unsigned short) (short)8817))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) min((((long long int) (signed char)32)), (((/* implicit */long long int) (signed char)-109))));
                            var_35 *= ((unsigned long long int) ((_Bool) var_14));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_8))));
                arr_72 [(_Bool)0] [i_7] = ((/* implicit */signed char) max((((/* implicit */short) (signed char)-31)), ((short)0)));
                var_37 = ((/* implicit */_Bool) max((var_37), (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) arr_60 [i_3] [i_3] [i_7] [i_19] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (arr_70 [i_3] [i_3] [i_19] [i_19] [i_7] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_7] [i_7] [i_19])) >> (((/* implicit */int) var_14))))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))))))))));
                var_38 = ((/* implicit */short) min((((((/* implicit */int) (signed char)12)) & (((/* implicit */int) arr_36 [i_19] [(signed char)2] [i_3] [i_3])))), (((/* implicit */int) max((arr_36 [i_3] [i_7] [i_7] [i_19]), (((/* implicit */unsigned short) var_7)))))));
            }
        }
        var_39 = ((/* implicit */long long int) max((((unsigned int) 112U)), (((/* implicit */unsigned int) (unsigned short)65535))));
    }
}
