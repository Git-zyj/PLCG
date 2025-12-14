/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162102
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
            var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9864863816518289316ULL)) ? (((/* implicit */int) (short)32767)) : (-1144688595)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)32744))))) : (((((/* implicit */_Bool) (short)32767)) ? (-8050090381150467926LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32745)))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-6702))));
        }
        for (int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = (short)6706;
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    var_18 &= ((/* implicit */signed char) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((((/* implicit */int) (short)6694)) > (((/* implicit */int) var_1)))))));
                    arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)6701);
                }
                for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (-9223372036854775807LL - 1LL)));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_14 [i_0] [i_0] [i_0 - 3] [0LL]) : (((/* implicit */long long int) 4294967295U))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32744)) ? (151060674) : (((/* implicit */int) (short)32750)))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5 + 1] [i_5 - 1] [i_2 - 1] [i_0 - 2] [i_0]))) : (arr_6 [i_5 - 1] [i_2 - 1])));
                }
                var_23 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)82)) ? (-1) : (((/* implicit */int) (signed char)10)))));
            }
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_2]) ? (var_2) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) var_6)) ? (274877906943ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            arr_16 [4] [4] [i_0] |= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (long long int i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 8; i_7 += 3) 
            {
                for (short i_8 = 2; i_8 < 8; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)127))))) ? (((((/* implicit */_Bool) (short)32744)) ? (274877906921ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32750))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                        arr_24 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)-1);
                    }
                } 
            } 
            var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) 68719476735LL)) ? (((/* implicit */unsigned int) var_2)) : (0U))) : (((/* implicit */unsigned int) arr_22 [i_0 - 1]))));
        }
        arr_25 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (var_5)));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (short i_10 = 2; i_10 < 8; i_10 += 2) 
            {
                for (short i_11 = 2; i_11 < 7; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)0)) : (-464374721)));
                            var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10 - 1] [i_10 + 2])) ? (((((/* implicit */_Bool) arr_9 [i_0 - 2] [(unsigned char)3] [i_0] [i_0 - 3] [i_0])) ? (((/* implicit */int) (short)6701)) : (((/* implicit */int) (short)511)))) : ((+(((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_29 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-24569))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27568))) : (((((/* implicit */_Bool) (short)-6699)) ? (-3015608046983486561LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_13] [i_11] [i_10 - 2] [i_9] [i_0])))))));
                            var_30 = ((/* implicit */long long int) arr_17 [i_0] [3ULL]);
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-6707)) > (((/* implicit */int) var_9))));
                        }
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)103)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_14 = 2; i_14 < 15; i_14 += 3) 
    {
        var_32 = ((/* implicit */unsigned short) ((((long long int) arr_41 [i_14 + 4] [i_14])) >= (max((((/* implicit */long long int) (_Bool)1)), (-8551509150681757814LL)))));
        var_33 = ((/* implicit */short) ((((((var_5) > (((/* implicit */int) (short)32756)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)64)))) <= (((((_Bool) (short)-3)) ? (var_5) : (((((/* implicit */_Bool) arr_40 [i_14])) ? (((/* implicit */int) (short)6684)) : (((/* implicit */int) (short)11314))))))));
    }
    for (short i_15 = 4; i_15 < 15; i_15 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (3463057711309229342LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_15 + 1])))));
        arr_44 [i_15] = ((/* implicit */long long int) (!(((_Bool) arr_42 [(_Bool)1] [i_15 - 2]))));
        var_35 = ((/* implicit */unsigned char) (_Bool)1);
        arr_45 [i_15] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)24569)) : (((/* implicit */int) (_Bool)1))));
    }
    for (short i_16 = 4; i_16 < 15; i_16 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_17 = 1; i_17 < 14; i_17 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_18 = 1; i_18 < 17; i_18 += 1) 
            {
                var_36 = ((/* implicit */short) ((0U) - (((/* implicit */unsigned int) var_11))));
                arr_55 [i_16] [i_17] [i_17 + 4] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_16 - 2])) ? (((/* implicit */int) arr_43 [i_16 + 1])) : (((/* implicit */int) arr_43 [i_16 - 3]))));
            }
            for (short i_19 = 3; i_19 < 14; i_19 += 3) 
            {
                var_37 = ((/* implicit */signed char) 67107840LL);
                var_38 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_19 + 4] [i_19] [i_16 + 1]))));
                var_39 = ((/* implicit */unsigned char) ((15548405176329295235ULL) & (((/* implicit */unsigned long long int) var_2))));
            }
            for (long long int i_20 = 1; i_20 < 16; i_20 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1621978860645992525ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 24U)) ? (-4394178694134754025LL) : (((/* implicit */long long int) var_2))))) ? (((var_6) ^ (((/* implicit */unsigned long long int) 2147483647)))) : (0ULL)));
            }
            for (long long int i_21 = 1; i_21 < 16; i_21 += 1) /* same iter space */
            {
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-3586)) ? (((/* implicit */unsigned long long int) (~(0LL)))) : (((((/* implicit */_Bool) (signed char)127)) ? (15548405176329295235ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                var_43 = ((((/* implicit */_Bool) arr_40 [i_17 + 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
            }
            arr_63 [i_17 + 3] [i_17] = ((/* implicit */_Bool) var_3);
        }
        /* vectorizable */
        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
        {
            /* LoopNest 2 */
            for (short i_23 = 4; i_23 < 16; i_23 += 2) 
            {
                for (long long int i_24 = 1; i_24 < 16; i_24 += 2) 
                {
                    {
                        var_44 = ((/* implicit */short) var_8);
                        arr_71 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (202479206U)));
                    }
                } 
            } 
            arr_72 [i_16] [2] = ((/* implicit */signed char) (short)3);
            var_45 &= ((((/* implicit */_Bool) var_4)) ? (arr_51 [i_16 - 2]) : (arr_51 [i_16 + 2]));
        }
        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -19LL)) ? (arr_47 [i_16 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6839)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_16 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (12U)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (var_13)))));
    }
    var_47 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (short i_25 = 0; i_25 < 25; i_25 += 1) /* same iter space */
    {
        arr_76 [i_25] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) arr_74 [i_25])) : (((/* implicit */int) arr_73 [i_25]))))) ? (max((((/* implicit */unsigned long long int) arr_74 [i_25])), (var_6))) : (min((var_6), (((/* implicit */unsigned long long int) (unsigned char)180)))));
        var_48 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) var_12))), ((+(((/* implicit */int) (unsigned char)22))))));
        var_49 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (short i_26 = 0; i_26 < 25; i_26 += 1) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -2034911435)) ? (((/* implicit */int) arr_75 [i_26] [i_26])) : (var_2)))));
        var_51 = ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3898))))));
    }
}
