/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1068
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
    var_19 = var_3;
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = (((+(((/* implicit */int) (unsigned short)10955)))) <= (((/* implicit */int) ((_Bool) arr_1 [i_0]))));
        var_22 = ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10955))) & (7881193526705344406ULL)))))) ? (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54565))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [9ULL])), ((unsigned char)255))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) / (var_6)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                var_23 ^= ((/* implicit */long long int) ((_Bool) ((1538418946U) << (((((/* implicit */int) arr_6 [i_2] [(short)8])) - (33363))))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_18)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)36371)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (signed char)79)) + (1162217610))) : (((/* implicit */int) (unsigned short)27894))))) : (var_11)));
                var_25 -= ((/* implicit */_Bool) ((((var_18) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_2] [i_1])))) : (((arr_3 [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                /* LoopSeq 4 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] = ((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1]);
                    var_26 = ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)49940))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))) : (((unsigned long long int) 10152248986482617892ULL)));
                    arr_16 [i_0] [i_3] = ((/* implicit */signed char) arr_9 [(_Bool)1]);
                    var_27 = ((/* implicit */unsigned short) var_9);
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_28 += ((((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5 + 1] [i_2])) & (var_12));
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_14 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (short)-76)))))) == (((/* implicit */int) arr_13 [i_5 + 1] [i_1] [i_4] [i_0] [i_1] [i_0]))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59731)) ^ (((/* implicit */int) (short)80))));
                    }
                    var_29 = ((/* implicit */unsigned short) 71916856549572608ULL);
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 3; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_26 [(signed char)20] [i_0] [(signed char)20] [i_1] [i_0] [i_0] = (+(((var_8) / (((/* implicit */int) (_Bool)1)))));
                        var_30 -= ((/* implicit */long long int) 18446744073709551615ULL);
                    }
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        var_31 *= ((/* implicit */long long int) ((((2508462246U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [12U] [i_2] [(_Bool)1] [i_2]))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) 9217826704622444750ULL))))));
                        arr_29 [i_0] [i_1] = (-(arr_27 [i_7 - 1] [i_7 + 3] [i_7 - 2] [i_0] [i_7 - 1] [i_7 - 3] [i_7 + 1]));
                        arr_30 [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_7] [i_7 - 1] [i_7] [i_0] [i_7 - 2] [i_7 + 3] [i_7])) ? (var_8) : (((/* implicit */int) arr_13 [i_7] [i_7 + 3] [(unsigned char)20] [i_7 + 2] [i_7 - 1] [i_7 - 3]))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51953))) : (7136813529686882757ULL)))));
                    }
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */short) (+(arr_9 [i_2])));
                        arr_36 [i_0] [i_0] [16ULL] [16ULL] [i_0] [i_8] [i_9] = ((/* implicit */int) 1513879954U);
                    }
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        var_33 -= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_32 [20LL] [2ULL] [2ULL])) - (((/* implicit */int) arr_37 [i_0] [8] [i_2] [i_2] [i_8] [i_8] [i_10]))))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : ((-(var_6)))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) (+((+(10464097486400062721ULL)))));
                        arr_43 [i_0] [i_0] = ((/* implicit */short) ((((var_16) | (arr_25 [i_11] [i_2]))) * (var_13)));
                        var_35 = var_13;
                        arr_44 [i_0] [i_0] [i_0] [(short)14] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                    }
                    arr_45 [i_8] [i_2] [i_0] [(unsigned short)18] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2]))) < (15435197552940413553ULL))))));
                }
                for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    arr_50 [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        var_36 += ((/* implicit */unsigned short) var_9);
                        arr_54 [i_0] [i_0] [i_2] [i_12] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-30590)) == (((/* implicit */int) var_17))))) : (((/* implicit */int) ((unsigned char) var_11)))));
                        arr_55 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_32 [i_1] [i_1] [i_13]);
                        var_37 = ((/* implicit */_Bool) (~(((var_0) | (2820576489329499513ULL)))));
                    }
                }
            }
            arr_56 [(unsigned char)13] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) ((2317805523066086009ULL) ^ (var_13)))) : (((4398046511103ULL) * (var_11))));
            arr_57 [i_0] [i_0] = ((/* implicit */signed char) max(((-(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (short)-13170))));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                arr_61 [i_0] = ((/* implicit */_Bool) (-(var_0)));
                var_38 -= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -1794481082)) : (15449721784615086221ULL))));
                var_39 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)169))))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) (short)-21043))))))));
                var_40 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_14] [i_14] [i_0] [i_14] [(_Bool)1] [i_14] [i_14])) + (((/* implicit */int) arr_37 [22ULL] [i_0] [i_0] [i_0] [22ULL] [i_1] [i_14]))))) - (min((761762278153127454ULL), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                arr_62 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(-4232940300278642053LL))) / (3169342478337724920LL)));
            }
        }
        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_16 = 1; i_16 < 22; i_16 += 1) 
            {
                var_41 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 3541495676155564883ULL)) || (((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) var_9)))))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    for (long long int i_18 = 1; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */long long int) (short)15360);
                            arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((signed char) arr_49 [i_18 + 1] [i_18 + 1] [i_16 - 1] [i_17] [i_0]))) ? (((int) var_5)) : (((/* implicit */int) ((_Bool) arr_49 [i_0] [i_17] [i_15] [i_15] [i_0]))));
                            arr_74 [i_0] [i_0] = arr_25 [i_0] [i_0];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_19 = 3; i_19 < 22; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_79 [i_15] [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 2] &= ((/* implicit */int) (!(((/* implicit */_Bool) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)47)) - (47))))))));
                            arr_80 [i_0] [i_0] [i_16 + 1] [i_19] = ((/* implicit */unsigned char) ((int) -2753645118397593193LL));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_21 = 1; i_21 < 22; i_21 += 4) 
            {
                for (int i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)75))))) : ((~(min((2756548352U), (((/* implicit */unsigned int) 1868287786))))))));
                            arr_90 [i_0] [i_0] = ((/* implicit */_Bool) var_18);
                        }
                        arr_91 [i_0] [i_15] [i_0] [i_15] [i_0] [i_0] = ((/* implicit */unsigned short) arr_38 [i_21 - 1] [10U] [i_21] [i_21 + 1] [i_21] [i_21 - 1]);
                        var_44 = ((/* implicit */unsigned short) (short)3313);
                    }
                } 
            } 
        }
    }
}
