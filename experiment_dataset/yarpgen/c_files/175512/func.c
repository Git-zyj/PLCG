/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175512
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (short)30744);
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [(unsigned short)19] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_9 [i_0] [i_1]))))) ^ (0U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967290U)) > (var_9)))))));
                    arr_11 [i_1] [i_2] = ((/* implicit */unsigned char) 15660769300360248741ULL);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_11)), (arr_5 [i_3 - 2] [i_3 + 1] [i_3 - 3]))) != (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (8663108515858821276ULL)))))));
            arr_16 [i_3] = ((/* implicit */signed char) var_14);
            arr_17 [(signed char)11] [i_3] [i_3 - 1] = ((/* implicit */_Bool) max((((arr_13 [i_3]) + (arr_13 [i_3]))), (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_3] [i_3 + 1] [(unsigned char)4]), (arr_7 [(unsigned short)7] [i_3 - 1] [i_3 - 1] [i_0]))))));
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL));
                var_20 -= ((/* implicit */signed char) ((long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((+(((/* implicit */int) var_5)))))));
                var_21 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]);
            }
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_22 = ((/* implicit */short) arr_8 [i_3 - 3] [i_3 - 2] [i_3 - 1]);
                    arr_29 [i_3] = (i_3 % 2 == 0) ? (((((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_3 - 1])) << (((((var_9) << (((((/* implicit */int) arr_14 [i_3] [16] [(unsigned char)1])) - (162))))) - (13939217609498034172ULL))))) : (((((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_3 - 1])) << (((((((var_9) << (((((((/* implicit */int) arr_14 [i_3] [16] [(unsigned char)1])) - (162))) + (67))))) - (13939217609498034172ULL))) - (14505924510232674289ULL)))));
                    var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                }
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(_Bool)1]))) <= (arr_23 [i_0] [i_3] [(unsigned short)17]))) ? (((/* implicit */int) arr_28 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_3 - 1])) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_14 [i_3] [i_3] [i_5])))))))) * (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) + (2124225776617142467LL)))))));
            }
            for (int i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                arr_32 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 2124225776617142447LL))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (arr_22 [i_3] [i_7 + 1] [i_7 - 1]))))));
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    arr_35 [(_Bool)1] [i_3] [i_7] [i_7 - 1] [i_7 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_31 [i_3 - 1] [i_7 + 1] [(signed char)6]) | (arr_31 [i_3 + 1] [i_7 + 1] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))) : (min((((/* implicit */unsigned int) ((arr_27 [i_3] [16]) == (0ULL)))), (min((var_12), (((/* implicit */unsigned int) var_4))))))));
                    var_25 = ((/* implicit */unsigned long long int) var_13);
                }
                for (unsigned int i_9 = 3; i_9 < 18; i_9 += 1) /* same iter space */
                {
                    arr_39 [i_3] [i_3] [i_7 - 1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_3 - 2] [i_7]))))), (max((((/* implicit */long long int) arr_18 [15U] [15U])), (arr_25 [i_0] [i_0] [i_3] [i_0] [i_0] [i_9]))))) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) - (arr_34 [i_0] [i_3] [i_7] [i_9])))) ? ((+(arr_3 [(short)1] [i_3 - 2] [i_3 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 + 1] [i_3 + 1]))))) < (((/* implicit */unsigned int) 1879048192)))))));
                    var_27 = (i_3 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((arr_22 [i_3] [i_7 - 1] [i_9]) / (arr_22 [i_3] [i_7 + 1] [i_3]))) << (((max((arr_22 [i_3] [i_7 + 1] [i_0]), (arr_22 [i_3] [i_7 - 1] [2]))) + (137379704)))))) : (((/* implicit */unsigned long long int) ((((arr_22 [i_3] [i_7 - 1] [i_9]) / (arr_22 [i_3] [i_7 + 1] [i_3]))) << (((((max((arr_22 [i_3] [i_7 + 1] [i_0]), (arr_22 [i_3] [i_7 - 1] [2]))) + (137379704))) + (1243869587))))));
                    arr_40 [i_0] [i_0] [i_0] [i_3] [15U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((13U), (((/* implicit */unsigned int) arr_14 [i_3] [(short)3] [(signed char)16])))), (((/* implicit */unsigned int) ((var_17) < (((/* implicit */int) arr_12 [i_9 + 1])))))))) || ((!(((/* implicit */_Bool) 10U))))));
                }
                for (unsigned int i_10 = 3; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    arr_45 [i_0] [i_3] [i_7] [14] [i_10] = ((/* implicit */signed char) ((((arr_22 [i_3] [i_7] [i_3]) - (((/* implicit */int) (unsigned char)243)))) % (((((/* implicit */int) var_7)) | (((arr_22 [i_3] [i_7 - 1] [i_3]) ^ (((/* implicit */int) arr_43 [i_0] [12LL] [i_0] [i_10]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        var_28 += ((/* implicit */unsigned short) (-(arr_7 [i_7 - 1] [i_10 - 3] [9U] [i_3 - 2])));
                        arr_48 [i_0] [i_3 + 1] [i_11] [i_10] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_10 - 3] [i_10 - 1] [i_7 + 1] [i_3])) & (((/* implicit */int) arr_20 [i_10 - 3] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) var_8))), (((arr_31 [i_3 - 1] [(unsigned char)9] [17ULL]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)48998)) ? (5703540679895460987ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (signed char)4)))))));
                    }
                    arr_52 [i_3] [(unsigned short)4] = min((arr_47 [i_0] [i_3] [i_0] [i_3]), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_3 + 1] [14ULL]))))) && (((/* implicit */_Bool) ((222146451263097297LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 4) 
                    {
                        {
                            arr_59 [i_0] [i_3] [i_13] [i_14] = (i_3 % 2 == zero) ? (((/* implicit */unsigned char) ((((((int) var_13)) << (((((/* implicit */int) max((var_0), (arr_50 [i_3] [i_3] [i_3] [i_3] [i_14])))) - (65128))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [i_3 - 1] [i_0])))))) == (min((((/* implicit */unsigned long long int) (unsigned short)65517)), (arr_34 [i_14 - 1] [i_14 - 1] [20LL] [i_14 - 1]))))))))) : (((/* implicit */unsigned char) ((((((int) var_13)) << (((((((/* implicit */int) max((var_0), (arr_50 [i_3] [i_3] [i_3] [i_3] [i_14])))) - (65128))) + (14343))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [i_3 - 1] [i_0])))))) == (min((((/* implicit */unsigned long long int) (unsigned short)65517)), (arr_34 [i_14 - 1] [i_14 - 1] [20LL] [i_14 - 1])))))))));
                            arr_60 [i_3] [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((arr_22 [i_3] [(signed char)12] [i_14]) >= (((/* implicit */int) var_7))))), (((arr_19 [i_7] [i_13] [i_13]) ? (arr_0 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1] [i_3] [i_7] [i_13]))))))) <= (((/* implicit */unsigned int) arr_7 [(unsigned short)11] [(unsigned char)10] [i_13] [i_14 - 1]))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_15 = 1; i_15 < 18; i_15 += 2) /* same iter space */
        {
            var_31 &= ((/* implicit */unsigned short) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_51 [i_0] [i_0] [i_15] [i_15] [i_15])) | (((/* implicit */int) arr_9 [(unsigned short)14] [i_15 - 1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 646199377U)))))));
            arr_65 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_15] [i_15]))) < (var_12)))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) & (((/* implicit */unsigned int) (-2147483647 - 1)))))))))));
        }
        for (long long int i_16 = 1; i_16 < 18; i_16 += 2) /* same iter space */
        {
            var_32 = min((arr_37 [i_16 - 1] [i_16] [(unsigned char)14] [i_16 + 2] [i_16 + 1]), (((/* implicit */unsigned long long int) ((arr_37 [i_0] [i_0] [(short)18] [i_16 + 2] [i_16 + 1]) < (arr_37 [i_16] [i_16 + 2] [8U] [i_16 + 2] [i_16 + 1])))));
            arr_68 [i_0] [i_0] = ((/* implicit */short) (+(((arr_0 [i_16 + 3]) | (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
        }
        for (long long int i_17 = 1; i_17 < 18; i_17 += 2) /* same iter space */
        {
            var_33 += ((/* implicit */unsigned short) ((unsigned int) (signed char)4));
            var_34 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (5ULL))));
        }
    }
    var_35 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_5)) + (117))))), (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))));
    var_36 = ((/* implicit */unsigned short) (-(var_17)));
}
