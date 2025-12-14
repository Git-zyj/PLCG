/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130563
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_1)))) * (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
        var_11 = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
        var_12 = 3478366983U;
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_3 [i_1])))))) ? (arr_16 [i_1] [i_2] [i_3] [i_3] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_5)))))));
                            var_14 = ((/* implicit */short) arr_16 [i_1] [i_2] [i_3] [i_4] [i_1] [i_5]);
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */signed char) ((((3478366983U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_16 = ((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1])))))) % ((-((-(((/* implicit */int) arr_13 [i_1] [i_1])))))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2147483637), (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)44)))) : (((/* implicit */int) arr_7 [i_1]))))) && (((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (4294967295ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_10 [i_1] [i_1] [i_6] [i_6])), ((short)11144)))) && (((/* implicit */_Bool) var_9))));
                var_20 ^= ((/* implicit */unsigned char) arr_7 [i_6]);
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    var_21 = ((/* implicit */short) var_1);
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_6] [i_1])) ? (524287) : (((/* implicit */int) arr_17 [i_1] [i_6] [i_1])))))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) arr_12 [i_1] [i_6] [i_6] [i_1] [i_7] [i_7]);
                    var_24 = ((/* implicit */signed char) ((unsigned long long int) arr_18 [i_1] [i_1] [i_1]));
                }
                for (short i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                {
                    var_25 &= arr_29 [i_1] [i_6] [i_6] [i_10];
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((var_8) + (((/* implicit */unsigned long long int) 816600329U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0))))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (136105386U))))));
                        var_28 = ((/* implicit */int) (+(arr_25 [(unsigned short)4] [i_6] [(unsigned short)4] [3LL] [i_11])));
                    }
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_29 *= ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_10] [i_6] [i_6] [i_7] [i_10] [i_12]))));
                        var_30 ^= (+(((arr_21 [i_6] [i_10] [i_10]) - (arr_21 [i_1] [i_1] [i_10]))));
                    }
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 860440522U)))))))))));
                    var_32 = ((/* implicit */signed char) ((1116892707587883008ULL) - (3562101226628278284ULL)));
                }
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */int) (+((~(0ULL)))));
                            var_34 = ((/* implicit */unsigned char) (((-(arr_33 [i_1] [i_6]))) / (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_5))))))));
                            var_35 = 1633477155U;
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            var_36 = ((((/* implicit */unsigned long long int) var_2)) & (5873575091599336554ULL));
                            var_37 -= ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) <= ((~(((/* implicit */int) arr_22 [i_17] [i_18]))))))), (arr_13 [i_15] [2U])));
                            var_38 = ((/* implicit */unsigned short) ((unsigned int) (+((+(((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-10))));
                            var_40 = ((/* implicit */long long int) ((((/* implicit */int) arr_55 [i_1] [i_17] [i_1] [i_17] [i_19])) ^ (((/* implicit */int) arr_55 [i_1] [i_15] [i_1] [i_17] [i_19]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            var_41 = ((/* implicit */_Bool) arr_53 [i_1]);
                            var_42 = var_6;
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2791)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_17]))) : (64424509440LL)));
                        }
                        var_44 = ((/* implicit */signed char) (short)(-32767 - 1));
                        var_45 ^= ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) arr_42 [i_1] [i_17])), (((arr_25 [i_1] [1U] [i_1] [5] [i_1]) / (((/* implicit */unsigned long long int) 524287))))))));
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */long long int) (unsigned short)45);
        var_47 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* LoopSeq 2 */
    for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            var_48 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)11144)) ? (((/* implicit */long long int) var_7)) : (var_2)))));
            var_49 = ((/* implicit */signed char) var_0);
            var_50 = ((/* implicit */unsigned int) arr_33 [i_21] [i_22]);
        }
        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3702625490U)) ? (arr_51 [i_21] [i_21] [i_21] [12LL] [12LL] [i_21]) : (arr_30 [i_21] [i_21] [i_21])))) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) + (((/* implicit */int) (unsigned short)34))))))))));
    }
    /* vectorizable */
    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
    {
        var_52 = ((/* implicit */unsigned long long int) arr_68 [i_23]);
        var_53 &= ((/* implicit */unsigned int) var_3);
    }
}
