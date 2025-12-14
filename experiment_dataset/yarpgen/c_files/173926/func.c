/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173926
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_8)))));
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -2162041860600785859LL))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 2162041860600785839LL))))))));
                }
            } 
        } 
        var_18 |= ((/* implicit */short) max((((-2162041860600785872LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (-2162041860600785859LL)));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((arr_8 [i_3] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) / (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3]))));
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) / (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_10)))))));
        arr_11 [i_3] = ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 2 */
        for (long long int i_4 = 4; i_4 < 21; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (-2162041860600785859LL) : (-2391306420225475832LL))))));
                    arr_21 [i_6 - 1] [i_5] [20ULL] [i_3] = ((/* implicit */unsigned long long int) ((signed char) -2391306420225475832LL));
                }
                arr_22 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2391306420225475843LL)) ? (arr_20 [i_3] [i_4] [8U] [i_5] [i_5]) : (((/* implicit */long long int) var_8))));
                arr_23 [i_5] [i_4 - 4] [i_5] = ((/* implicit */unsigned char) ((arr_20 [i_4 - 1] [i_4] [(unsigned char)21] [i_4 - 2] [i_4]) / (-2162041860600785859LL)));
                var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                arr_24 [i_3] [3ULL] [i_4 - 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-2391306420225475843LL) : (2162041860600785858LL)))) ? (((/* implicit */long long int) ((var_3) * (1958371337U)))) : (-2391306420225475833LL)));
            }
            var_23 = ((/* implicit */_Bool) arr_17 [i_3] [i_4 - 2] [i_3]);
            /* LoopSeq 1 */
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                arr_29 [i_3] [i_3] [i_3] = ((/* implicit */short) -2391306420225475853LL);
                var_24 = ((/* implicit */_Bool) arr_16 [(unsigned char)13]);
            }
            arr_30 [i_3] [7LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (var_12)));
        }
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-27)) || (((/* implicit */_Bool) -2391306420225475833LL)))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 2391306420225475832LL)) : (var_12)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (signed char)26))))))));
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                {
                    var_27 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                    arr_45 [i_9] = var_15;
                }
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    arr_49 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_9] [i_8] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)26))));
                    var_28 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_42 [(unsigned char)12] [i_8] [(_Bool)1] [i_12] [i_12])) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) ((unsigned short) -2391306420225475848LL)))));
                    arr_50 [(unsigned short)13] [i_9] [i_9] [i_3] [i_3] [i_8] = ((unsigned long long int) (unsigned short)511);
                }
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 3; i_14 < 21; i_14 += 1) 
                    {
                        arr_57 [i_3] [i_8] [i_13] [i_13] [i_9] = var_0;
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2391306420225475848LL)) ? (-2391306420225475833LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)494)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))) : ((-(-2391306420225475838LL)))));
                        var_30 = ((unsigned short) var_1);
                        var_31 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [i_14 + 1] [i_3] [i_3] [i_9] [9] [i_3]))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_62 [15LL] [i_9] = ((/* implicit */unsigned long long int) var_15);
                        arr_63 [i_9] [i_13] [(short)20] [15U] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) arr_28 [i_3] [i_3]);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -2391306420225475833LL)) ? (arr_64 [i_3] [i_8] [i_9] [i_13]) : (((/* implicit */int) var_10)))) : (var_8))))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_3] [i_8] [i_9] [i_13]))) | (arr_28 [i_8] [i_9])));
                    }
                    arr_66 [i_13] [i_9] [i_9] [i_9] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                    var_34 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) 2391306420225475839LL)));
                    var_35 = ((/* implicit */unsigned int) ((-2162041860600785859LL) ^ (-2391306420225475843LL)));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (arr_39 [i_8] [i_8] [i_9] [(unsigned short)20] [i_8])));
                }
                var_37 = ((/* implicit */unsigned char) var_13);
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) arr_47 [(unsigned short)2] [i_9] [i_9] [(unsigned short)14] [i_9] [i_9])))))))));
                arr_67 [i_3] [i_9] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_13))));
            }
            for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_53 [i_17] [i_8] [i_17] [i_18]))));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) var_0))));
                            arr_75 [i_19] [i_8] [i_17] [i_17] [i_17] [(short)1] [i_3] = ((/* implicit */unsigned short) ((_Bool) var_7));
                        }
                    } 
                } 
                arr_76 [i_3] [i_8] [i_17] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_3] [i_8])) && (((/* implicit */_Bool) arr_40 [i_8] [i_8]))));
            }
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) /* same iter space */
            {
                var_41 -= ((/* implicit */signed char) ((short) arr_19 [i_3] [i_3] [14] [i_3]));
                var_42 = ((/* implicit */int) ((arr_58 [i_3] [i_8] [i_20]) * (((/* implicit */unsigned long long int) arr_20 [i_3] [i_8] [i_8] [i_20] [i_20]))));
                /* LoopSeq 1 */
                for (signed char i_21 = 1; i_21 < 21; i_21 += 3) 
                {
                    var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [(signed char)19] [i_8] [i_21 + 1] [i_21 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))) : (arr_32 [i_21 - 1])));
                    var_44 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-27)) != (((/* implicit */int) (signed char)13))));
                }
                var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2391306420225475837LL)) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)20032)))))));
                var_46 = ((/* implicit */unsigned char) var_13);
            }
            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_26 [i_3] [i_8] [i_8] [i_8]) : (((-2391306420225475851LL) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_8]))))))))));
            var_48 = ((/* implicit */long long int) (-(var_5)));
        }
    }
    /* vectorizable */
    for (unsigned int i_22 = 4; i_22 < 15; i_22 += 2) 
    {
        var_49 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_22 + 1] [i_22] [i_22 + 2]))));
        arr_83 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [(unsigned char)5] [i_22 - 4] [(unsigned short)16])) ? (((/* implicit */unsigned long long int) 2391306420225475828LL)) : (var_12)));
        arr_84 [i_22 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) arr_71 [i_22] [i_22] [i_22] [i_22] [i_22 - 2] [i_22 + 3]))));
    }
    var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (var_8)))) ? (((/* implicit */int) (unsigned short)35671)) : ((+(((/* implicit */int) var_2))))));
}
