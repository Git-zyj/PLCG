/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187781
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_4 [i_0] [i_0] = arr_1 [i_0];
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 &= ((/* implicit */_Bool) min((((/* implicit */long long int) min(((!(((/* implicit */_Bool) (unsigned char)0)))), (arr_5 [14] [i_1])))), (255LL)));
            var_16 = ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((arr_5 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (var_9))) : (((long long int) (_Bool)1)));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(short)8])) ? (((((/* implicit */long long int) 2498132987U)) + (arr_0 [(short)4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [14U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))))));
            var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)9]))) <= (255LL)))), (((int) arr_0 [i_0]))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1659475523U), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : (min((var_12), (((/* implicit */unsigned long long int) var_14))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1659475523U) : (1981717924U)))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) 2283543416U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3933)) ? (2635491751U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38847)))))) ? (arr_2 [i_0]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2])) < (var_12)))))))));
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)79)) ? (-256LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (_Bool)0)))))));
                var_21 = ((/* implicit */_Bool) min((12313291914218089226ULL), ((-(arr_1 [i_0])))));
                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) -1505564072);
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_14 [i_4] [i_0] [i_0] [i_0])))) : ((~(4000644813U)))));
                var_23 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0]);
                arr_15 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_0]))));
            }
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) 8431011514938164289ULL));
                    var_24 += (!(((/* implicit */_Bool) -261LL)));
                    arr_23 [i_0] [(unsigned short)14] [i_5] [(unsigned short)14] = ((/* implicit */unsigned char) var_14);
                }
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    arr_26 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (~((~(var_14)))));
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)53))));
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        var_26 &= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_5))))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_5])) ? (arr_17 [i_5] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                        arr_31 [i_7] [i_2] [i_5] [i_7] [i_8] &= ((/* implicit */_Bool) ((long long int) var_10));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */int) arr_30 [i_5] [i_5 + 3] [i_7] [i_5 - 1] [i_5 + 2])) <= ((-(((/* implicit */int) (signed char)31)))))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4011375414U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11002))) : (5542655363526927008ULL)));
                        arr_36 [i_2] [9LL] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)175))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) var_9))));
                        var_29 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [i_2] [i_5] [i_2] [(_Bool)1] [i_9])))))));
                        var_30 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned short)37614)) : (((/* implicit */int) var_8))))));
                        var_31 = ((/* implicit */_Bool) var_2);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_40 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)235))));
                        arr_41 [i_0] [i_7] [i_0] = ((/* implicit */short) var_1);
                    }
                    for (short i_11 = 2; i_11 < 14; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_5] [i_0] [i_0] [i_11 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((_Bool) var_7)))));
                        var_33 = ((/* implicit */long long int) (-(var_12)));
                    }
                }
                var_34 &= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (!(var_10)))) : (((/* implicit */int) (_Bool)1))));
                var_35 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 88751595U))));
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 15; i_12 += 4) 
                {
                    var_36 = ((/* implicit */unsigned int) var_7);
                    var_37 = ((/* implicit */short) (unsigned char)16);
                }
            }
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) -287LL)) : (((unsigned long long int) -6952816611726595282LL))));
            var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_33 [i_0] [i_13] [i_13] [i_13] [(_Bool)1]))));
        }
        arr_48 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12))))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_40 = ((/* implicit */_Bool) min((var_40), ((!(((/* implicit */_Bool) ((short) 7337197245045637702ULL)))))));
            arr_53 [2U] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [4LL] [4LL] [4LL]))));
            /* LoopNest 3 */
            for (unsigned char i_16 = 3; i_16 < 13; i_16 += 2) 
            {
                for (signed char i_17 = 1; i_17 < 14; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        {
                            arr_63 [i_14] [i_16] [i_16] [i_16 + 3] [i_16] [i_18] = ((/* implicit */_Bool) var_2);
                            var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_17 + 2] [i_16 + 3]))));
                            arr_64 [i_18] [i_18] [i_16] [i_18] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                            arr_65 [i_18] [i_16] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((var_8) ? (((((/* implicit */_Bool) (short)0)) ? (arr_13 [i_14] [i_14] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_66 [i_16] [i_16] [i_16] [i_17] [i_18] [(signed char)11] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_67 [(unsigned char)3] [(_Bool)1] = ((/* implicit */unsigned short) ((var_3) ? (arr_8 [(short)0] [i_15] [0ULL]) : (arr_8 [(unsigned char)10] [(unsigned char)10] [i_15])));
        }
        var_42 = ((/* implicit */_Bool) var_2);
    }
    var_43 = ((/* implicit */unsigned char) 2251799813685247LL);
}
