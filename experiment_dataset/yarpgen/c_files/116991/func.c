/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116991
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 |= ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0 + 1]));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned long long int) (unsigned char)114)))));
        /* LoopSeq 3 */
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((8718608898552021899LL) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1246007512))))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (unsigned char)0))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_11 [i_4] [i_2] [i_4] = ((/* implicit */_Bool) -1915815994);
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) -1364591615)))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                    var_23 -= (!(((/* implicit */_Bool) var_14)));
                    var_24 *= ((/* implicit */unsigned long long int) (signed char)32);
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) (+((+(arr_7 [(signed char)1] [(signed char)1] [i_2])))));
                    var_26 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_27 -= ((/* implicit */long long int) (unsigned short)57376);
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)5125)))))))));
                        var_29 = ((/* implicit */long long int) -1094364695);
                        var_30 = ((/* implicit */int) min((var_30), ((((+(arr_3 [i_0 + 1] [i_2]))) % (((/* implicit */int) var_10))))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_0 [i_7]))));
                    }
                    var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0 + 1] [i_2]) : (((/* implicit */int) (unsigned char)103))));
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65531)) > (((/* implicit */int) (short)25756)))))));
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) var_11))));
                arr_26 [i_8] [i_2] [14ULL] [i_8] = ((/* implicit */signed char) ((long long int) ((unsigned long long int) var_3)));
                var_35 = ((int) (~(((/* implicit */int) arr_15 [i_0 + 1] [(unsigned short)10] [i_8] [(unsigned char)19]))));
            }
            for (int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_8))));
                var_37 = (+(((((/* implicit */int) (unsigned short)51097)) >> (((((/* implicit */int) var_5)) - (5430))))));
                arr_29 [i_0] [i_2] [i_9] [i_2] = ((/* implicit */signed char) ((_Bool) arr_5 [i_0]));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    {
                        var_38 ^= ((/* implicit */unsigned char) ((int) var_5));
                        arr_34 [i_10] [i_10] [i_10] [i_11] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (+((-(var_12)))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned long long int) var_11);
        }
        for (signed char i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((long long int) arr_19 [i_0 + 1])))));
            arr_38 [i_0 + 1] [(unsigned short)2] [i_12] = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0 + 1]));
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                arr_41 [i_0] [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0 + 1] [i_12] [i_12] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_13] [i_12] [i_0 + 1] [i_13] [i_12]))) : (arr_9 [i_0] [(signed char)12] [i_12] [i_12])))));
                /* LoopSeq 4 */
                for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 596952473)) ? (var_13) : (((/* implicit */int) (!(((/* implicit */_Bool) -1851365362)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
                        var_43 ^= ((/* implicit */_Bool) (+(arr_40 [i_0 + 1] [i_12] [i_13] [i_0 + 1])));
                        arr_46 [i_0] [i_15] [i_13] [i_15] = ((/* implicit */long long int) ((unsigned char) ((unsigned int) var_10)));
                    }
                    for (long long int i_16 = 3; i_16 < 18; i_16 += 1) 
                    {
                        arr_49 [i_0 + 1] [i_12] [i_16] [i_14] [i_14] = (-(((((/* implicit */_Bool) var_6)) ? (arr_23 [i_12]) : (((/* implicit */unsigned long long int) arr_33 [i_16 + 3] [i_16 - 2] [i_14] [i_12])))));
                        arr_50 [i_0] [i_12] [i_13] [i_14] [i_16] &= ((/* implicit */unsigned char) 1851365362);
                        arr_51 [i_0] [(unsigned char)1] [i_13] [i_14] [i_0 + 1] [i_13] = ((/* implicit */long long int) 3856617690834909939ULL);
                    }
                    for (short i_17 = 1; i_17 < 20; i_17 += 4) 
                    {
                        arr_54 [i_17] [i_12] [i_13] [2LL] [11U] [i_17 - 1] [(_Bool)1] = ((/* implicit */unsigned int) 65535);
                        var_44 *= ((/* implicit */unsigned short) ((var_8) % (var_0)));
                        arr_55 [(unsigned short)1] [i_12] [10ULL] [i_14] [i_17 - 1] = ((/* implicit */_Bool) var_13);
                    }
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((unsigned long long int) (-(-1179096624))))));
                }
                for (int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    arr_59 [i_13] [i_0 + 1] [i_13] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_18] [i_13] [i_13] [i_18])) ? (((/* implicit */int) var_5)) : (arr_53 [13U] [i_12] [i_18] [i_0]))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_62 [i_12] [i_12] [i_19] [i_13] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -601100566)) ? (((/* implicit */int) ((_Bool) -1851365362))) : (1179096618)));
                        var_46 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-2007739215)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_11))) : (((/* implicit */int) var_10))));
                        var_47 = ((/* implicit */int) min((var_47), ((~(((/* implicit */int) arr_57 [i_0] [i_12] [i_13] [i_18] [i_19]))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_66 [i_20] [i_12] [i_13] [i_18] [i_20] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0 + 1]) : (569759749U)));
                        var_48 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_12])) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_64 [i_0] [i_20] [i_13] [i_18] [(signed char)14] [i_13])) - (54217))))) : (((/* implicit */int) arr_43 [i_0 + 1] [6]))));
                    }
                    var_49 ^= ((/* implicit */short) (+(((/* implicit */int) var_2))));
                }
                for (short i_21 = 1; i_21 < 20; i_21 += 2) /* same iter space */
                {
                    arr_69 [i_21 + 1] [i_12] [i_21] [6U] [i_21] = ((/* implicit */unsigned char) ((((_Bool) 387096375)) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_67 [i_0] [i_12] [i_13] [i_12])) >> (((((/* implicit */int) arr_35 [i_0] [i_12] [i_13])) - (193)))))));
                    var_50 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -1851365362)) ? (((/* implicit */unsigned int) var_9)) : (var_7)))));
                    arr_70 [i_0] [(signed char)20] [i_13] [i_21 + 1] [(unsigned char)2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_47 [i_0] [(_Bool)1] [i_0] [8] [i_12] [i_12])) ? (4285653472420256930LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                }
                for (short i_22 = 1; i_22 < 20; i_22 += 2) /* same iter space */
                {
                    var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) var_12))));
                    arr_74 [i_0 + 1] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_0 + 1] [(_Bool)0] [i_0 + 1] [i_0] [i_12] [i_0 + 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(signed char)0] [i_12])))))) || (((/* implicit */_Bool) arr_4 [i_0 + 1]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    for (unsigned short i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        {
                            arr_79 [i_0 + 1] [i_12] [i_13] [(unsigned char)17] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * ((+(((/* implicit */int) var_1))))));
                            var_52 = ((/* implicit */unsigned char) 1851365358);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 4) 
            {
                var_53 = ((/* implicit */unsigned short) (-(1179096624)));
                arr_82 [i_12] [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1179096616))));
                arr_83 [i_0] [i_12] [i_12] [i_12] = (_Bool)1;
            }
        }
        var_54 += ((/* implicit */int) (~((+(var_0)))));
    }
    for (int i_26 = 0; i_26 < 20; i_26 += 1) 
    {
        arr_86 [i_26] &= max(((~(((((/* implicit */_Bool) -1179096624)) ? (var_3) : (((/* implicit */unsigned int) 1851365361)))))), (((/* implicit */unsigned int) ((_Bool) var_8))));
        /* LoopNest 2 */
        for (unsigned short i_27 = 0; i_27 < 20; i_27 += 1) 
        {
            for (unsigned int i_28 = 2; i_28 < 19; i_28 += 2) 
            {
                {
                    var_55 ^= ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */int) var_2)) & (-1851365362)))), (((/* implicit */unsigned long long int) var_10))));
                    arr_91 [i_28] [i_27] [i_28] [15U] = (+(arr_1 [i_26]));
                    arr_92 [i_26] [i_27] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (arr_45 [i_26] [i_27] [i_26] [i_28 - 1] [i_28 + 1] [i_27]) : (((/* implicit */unsigned long long int) var_8))))))) ? (1681986705U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))))));
                }
            } 
        } 
    }
    var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1179096624)), (3719595571U)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 11306751446245393158ULL)) ? (2147483647) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) max((var_14), (var_14))))));
    var_57 = ((/* implicit */_Bool) (-(2147483647)));
}
