/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183791
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
    var_10 ^= 11488906845643059652ULL;
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(915373867591830794LL)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [21U] [(unsigned short)20] [i_1] &= ((/* implicit */int) (((~(var_3))) != (arr_0 [i_0])));
            var_12 = ((/* implicit */signed char) ((((unsigned long long int) -915373867591830795LL)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) 915373867591830794LL);
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1]))));
            var_14 ^= ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((_Bool) var_0)))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) var_6)) : (-570893570))))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_2] [i_0])) % (((/* implicit */int) arr_2 [i_0] [i_2] [i_0])))))));
            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_0]))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        var_20 = var_7;
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_1 [i_4 - 2] [i_5]))));
                        var_22 &= ((/* implicit */unsigned short) arr_0 [i_4]);
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_3] [i_3] [i_4 - 1])) << (((((/* implicit */int) ((short) (signed char)-110))) + (122))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_24 -= ((/* implicit */unsigned short) ((signed char) (-(arr_20 [1U] [i_0] [i_3] [i_6]))));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_8))));
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_7]))) : (18446744073709551602ULL))) : (((1152921504606846976ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110)))))));
                var_27 = ((/* implicit */unsigned char) (+((+(arr_23 [i_3] [i_3] [i_3] [i_0])))));
                var_28 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_0] [i_7] [i_7] [i_7]) : (var_2))))));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_7] [i_3] [i_0])) ? (((/* implicit */int) arr_24 [i_7] [i_3])) : (((/* implicit */int) arr_24 [i_0] [i_3]))));
            }
        }
        arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))));
        var_30 = ((/* implicit */unsigned long long int) var_6);
    }
    /* LoopSeq 2 */
    for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
    {
        var_31 &= ((/* implicit */unsigned int) max((((short) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((/* implicit */short) arr_22 [i_8] [i_8] [i_8]))));
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */int) ((-915373867591830773LL) < (0LL)))) | (max((var_0), (((/* implicit */int) var_8)))))) % (min((((/* implicit */int) var_1)), (arr_18 [i_8 + 2] [i_8])))));
    }
    for (unsigned short i_9 = 3; i_9 < 11; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_10] [i_9 - 1] [i_9]), ((+(((/* implicit */int) arr_24 [i_12] [i_9]))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((_Bool) min((var_3), (((/* implicit */unsigned long long int) 0LL))))))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_12] [i_10])) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_9] [i_11 - 1])), (arr_4 [i_9])))), (min((3640694118988087833ULL), (((/* implicit */unsigned long long int) 123875704)))))) : (((/* implicit */unsigned long long int) ((long long int) (short)32752))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) -5146735992679370022LL);
                            var_35 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) (unsigned short)33335)))) : (((/* implicit */int) var_6)))));
                            var_36 += ((/* implicit */unsigned int) ((max((arr_35 [i_12] [i_11 - 1] [i_12]), (arr_35 [i_12] [i_12] [i_13]))) > (((arr_35 [i_12] [i_11 + 2] [i_13]) - (arr_35 [i_13] [i_13] [i_12])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 4) 
        {
            for (signed char i_15 = 2; i_15 < 12; i_15 += 2) 
            {
                {
                    var_37 = max(((-(((arr_36 [i_9 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_15 + 1] [i_9] [i_14 - 1] [i_9] [i_9 + 1]))))))), (((/* implicit */unsigned long long int) (short)-32764)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) /* same iter space */
                    {
                        var_38 &= ((/* implicit */long long int) arr_23 [i_14] [i_14] [(unsigned short)4] [i_14]);
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_7))));
                        var_40 = ((/* implicit */unsigned short) min((var_40), ((unsigned short)27930)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            var_41 ^= ((/* implicit */unsigned int) var_3);
                            var_42 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15818816332345821323ULL)))) ? (min((((/* implicit */long long int) (signed char)102)), (-915373867591830794LL))) : (((/* implicit */long long int) ((unsigned int) var_8))))), (((/* implicit */long long int) ((signed char) 9223372036854775807LL)))));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (~(((long long int) arr_8 [i_15 - 1])))))));
                            arr_57 [i_17] [i_9] [i_15] [i_14] [i_14 - 1] [i_9] [i_9 - 2] = ((/* implicit */signed char) arr_42 [i_17] [i_16] [i_15] [i_14] [i_9]);
                        }
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
                    {
                        var_44 &= (((_Bool)0) ? (17293822569102704640ULL) : (((/* implicit */unsigned long long int) 915373867591830787LL)));
                        arr_60 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                        var_45 = ((/* implicit */unsigned long long int) 4294967284U);
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
                    {
                        var_46 += ((/* implicit */signed char) (unsigned short)27942);
                        var_47 *= ((/* implicit */unsigned int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_3), (var_3))))))));
                        var_48 *= ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned long long int) arr_9 [i_9 + 1])), (((unsigned long long int) 1892261779U)))));
                        var_49 = ((/* implicit */long long int) (_Bool)1);
                    }
                    var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)41600)), (4174371409U))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
                {
                    var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_64 [i_21 - 1]))))))));
                    var_52 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_21 - 1])) ? ((+(var_4))) : (((((/* implicit */_Bool) 17293822569102704639ULL)) ? (arr_64 [i_21 - 1]) : (arr_64 [i_21 - 1])))));
                    var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6053253632363782748LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(-4495678165846267012LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    arr_71 [i_20] [i_22] [i_22] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_69 [i_22] [i_21 - 1] [i_20] [i_20]))))) : (max((((/* implicit */long long int) var_9)), (arr_66 [i_21 - 1] [i_21 - 1])))));
                }
                var_54 += ((/* implicit */unsigned long long int) var_5);
                arr_72 [i_20] [i_21 - 1] [i_21 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -915373867591830788LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 683335658)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_21] [i_21] [i_20]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((876637235) + (-14290328)))) > (((unsigned int) var_9)))))));
                var_55 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) (~(arr_66 [i_20] [i_21]))))), (max((arr_68 [i_21 - 1] [i_21 - 1]), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))))));
                arr_73 [i_20] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) 0LL)), (((1152921504606846972ULL) << (((/* implicit */int) (short)1))))));
            }
        } 
    } 
}
