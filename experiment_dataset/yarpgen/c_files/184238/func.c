/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184238
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
    var_13 = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((294466538294877444ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))))) - (294466538294877475ULL))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 294466538294877437ULL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))) : ((+(18152277535414674179ULL)))));
            var_14 = ((/* implicit */unsigned char) 18152277535414674170ULL);
        }
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -10)) || (((/* implicit */_Bool) (unsigned char)112))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) == (arr_7 [i_2] [i_2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_0 [(_Bool)1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (unsigned char)87)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) < (((/* implicit */int) arr_1 [i_2]))))) : (((((/* implicit */_Bool) ((6066481754952867329ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))))) ? (min((((/* implicit */int) var_10)), (-1420697574))) : ((+(((/* implicit */int) var_4))))))));
            var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1480794105U))))));
            arr_10 [i_2] [(unsigned char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_0 + 1] [i_2])) * (((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) arr_6 [i_2] [i_0 + 1] [(unsigned short)4])))) : ((~(((/* implicit */int) arr_6 [i_2] [i_0 - 1] [i_2]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((unsigned int) arr_0 [i_3]))))), (((((((/* implicit */_Bool) (signed char)5)) ? (1117103813820416ULL) : (8581376657355854293ULL))) & (((/* implicit */unsigned long long int) arr_5 [i_3]))))));
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)51254))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((var_8), (var_8)))) + (((arr_2 [2ULL]) ? (((/* implicit */int) var_5)) : (776440066)))))) : ((-(arr_7 [(signed char)6] [i_0 + 1])))));
            arr_14 [i_0 - 1] [i_3] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_0 - 2] [i_0 - 2])), (294466538294877439ULL))) + (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)177)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))))))))));
            var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [4])) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [(unsigned short)8]))))) : (arr_0 [i_0 - 1])));
            arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))) != (arr_7 [i_3] [4ULL]))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            arr_18 [(_Bool)1] [(unsigned char)9] [i_4] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0 - 1]));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_21 [i_4] [i_4] [(unsigned short)8] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_0 - 2] [i_0 - 2])) < (((/* implicit */int) arr_6 [i_4] [i_0 + 1] [i_0 + 1]))))), (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_6 [i_4] [i_0 + 1] [i_4]))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    arr_26 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)164)) & (((-2147483641) % (776440066)))));
                    var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) (unsigned char)112))), (max((((-2802437116296375978LL) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_6 + 1]))))), (((/* implicit */long long int) arr_17 [i_0 + 1] [i_5] [i_5]))))));
                    arr_27 [i_0 - 2] [(signed char)1] [i_4] [i_5] [(unsigned char)6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? ((((_Bool)1) ? (776440041) : (((/* implicit */int) (signed char)-110)))) : ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_4] [i_4] [i_4])), (3784778245U)))), (((((/* implicit */_Bool) 18152277535414674172ULL)) ? (3878549380300182820LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183)))))))) : (((((/* implicit */_Bool) 541447533U)) ? (min((((/* implicit */unsigned long long int) (unsigned char)112)), (13674203040730150129ULL))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_16 [i_4]))))))));
                }
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    arr_32 [i_0] [i_0] [i_0 - 1] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_0 - 1] [i_0 - 2])) ? (arr_5 [i_4]) : (arr_5 [i_4]))))));
                    var_20 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) : (18152277535414674171ULL)));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (unsigned char)196))));
                }
                arr_33 [i_4] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_28 [i_4])) - (((/* implicit */int) (signed char)28)))));
            }
        }
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
        {
            arr_37 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned char) ((_Bool) (signed char)-106));
            var_22 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0]));
        }
        var_23 = ((/* implicit */long long int) ((_Bool) (short)19726));
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_40 [i_0] [i_9] [i_9] = ((/* implicit */signed char) (((-(-8482380870352066791LL))) + (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0 + 1] [i_9])) ? (((arr_8 [i_9] [i_0 - 1] [i_0 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((arr_8 [i_9] [i_0 - 2] [i_0 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
            {
                arr_44 [i_10] = arr_11 [i_0 - 2];
                var_25 = ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-25496)) : (((/* implicit */int) arr_6 [i_9] [i_9] [(signed char)2])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            arr_51 [2ULL] [i_9] [2ULL] [2ULL] [i_9] [2ULL] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */unsigned int) -1214524584)) : (arr_0 [i_0])))) ? (932947500U) : (((unsigned int) 8437263261518359041ULL)))));
                            arr_52 [i_0] [i_0] [i_0] [i_0] [(signed char)6] = ((/* implicit */unsigned int) ((signed char) max(((~(((/* implicit */int) arr_45 [i_10] [i_10])))), ((~(((/* implicit */int) var_12)))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (((((/* implicit */_Bool) arr_24 [i_0] [i_9] [i_10] [i_11] [i_12] [i_12])) ? (14538811698488056384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5)))))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_27 = ((/* implicit */signed char) min((max((2340800312056050163ULL), (arr_30 [i_9]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(signed char)6] [i_9] [i_13]))))))))));
                    arr_57 [i_0] [i_9] [i_13] [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(3878549380300182806LL)))) - (((((/* implicit */_Bool) var_5)) ? (var_1) : (arr_30 [i_9])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [2U] [(signed char)2] [i_13] [i_13] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_9] [i_9] [i_14] [i_0 - 1] [i_14]))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-25496))) ^ (arr_56 [i_9] [1LL]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_14])) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_58 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */int) arr_20 [i_14])), (arr_19 [i_14]))), (((/* implicit */int) arr_53 [i_0 - 1] [i_9]))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_24 [i_9] [i_14] [i_13] [(signed char)6] [i_9] [i_9])) ? (((/* implicit */int) (short)17)) : (((/* implicit */int) (signed char)10)))))) : (((/* implicit */int) var_7))));
                    arr_59 [(unsigned char)0] [(_Bool)1] = ((/* implicit */unsigned short) (+((~(((((/* implicit */int) (unsigned char)71)) & (((/* implicit */int) (signed char)-117))))))));
                }
                for (signed char i_15 = 1; i_15 < 6; i_15 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) (-(294466538294877437ULL)));
                    var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) && ((_Bool)1)));
                    arr_62 [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) 1707306658)) < (2713018623U)));
                    arr_63 [i_0] [i_0] [i_13] [i_15] = ((/* implicit */unsigned char) (((-((+(arr_30 [i_15]))))) * (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_36 [i_0] [i_0] [i_13])))) & (((/* implicit */int) (!(arr_39 [i_9] [i_15])))))))));
                    arr_64 [i_0] [i_0] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -5345593480918561367LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_47 [2LL] [2LL] [i_9] [i_9] [2LL] [i_9])))))) ? (((int) min((((/* implicit */short) arr_41 [i_0] [i_0] [(short)1])), (var_2)))) : (((/* implicit */int) (!((!((_Bool)1))))))));
                }
                arr_65 [i_0] [0LL] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_2 [i_13]));
                var_30 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_6)))) : (((arr_2 [i_9]) ? (((/* implicit */int) arr_41 [i_0 + 1] [i_0] [3])) : (((/* implicit */int) (signed char)18)))))), (((((/* implicit */int) var_8)) & (min((arr_17 [i_13] [i_9] [i_0]), (((/* implicit */int) arr_2 [i_9]))))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                arr_68 [i_0] [i_9] [i_16] = ((/* implicit */int) min(((unsigned short)29245), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)29249)) <= (((/* implicit */int) (_Bool)1)))))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_16] [i_16]))))) ? (((/* implicit */int) arr_22 [i_0] [i_0 - 2] [i_16] [i_9] [i_9] [i_0 - 2])) : (((((/* implicit */int) arr_39 [0] [0])) & (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_0])) ? (((/* implicit */int) arr_49 [i_0] [(signed char)5] [i_0] [i_0 - 1] [i_0] [(signed char)5] [i_0])) : (((/* implicit */int) var_5))))) ? (0ULL) : (((((/* implicit */_Bool) 3573191244U)) ? (22ULL) : (((/* implicit */unsigned long long int) 3643045180U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_16] [i_9] [i_16])) : (((/* implicit */int) arr_6 [i_16] [i_9] [i_16])))))));
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (max((((((/* implicit */_Bool) (signed char)43)) ? (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (3213615542373391978ULL))) : (((/* implicit */unsigned long long int) arr_54 [i_0] [i_0 + 1] [i_16])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0 - 1])) ? ((~(((/* implicit */int) arr_16 [i_9])))) : ((~(((/* implicit */int) var_0)))))))))));
            }
            arr_69 [i_9] = ((/* implicit */long long int) arr_54 [i_0] [i_0] [i_0 + 1]);
        }
    }
    for (unsigned short i_17 = 2; i_17 < 9; i_17 += 1) /* same iter space */
    {
        arr_72 [i_17] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) & (min((((/* implicit */unsigned int) -1707306659)), (arr_70 [i_17 - 2] [i_17])))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_17])) ? (((/* implicit */int) min((arr_11 [i_17 + 1]), (arr_11 [i_17 + 1])))) : (((/* implicit */int) var_11))));
        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_17 + 1] [i_17]))));
        arr_73 [i_17] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_42 [i_17 + 1] [i_17] [0U] [i_17 - 2]))));
    }
    for (unsigned short i_18 = 2; i_18 < 9; i_18 += 1) /* same iter space */
    {
        arr_77 [i_18] = ((/* implicit */short) (+(((/* implicit */int) (short)24726))));
        var_36 = ((/* implicit */unsigned int) arr_74 [i_18]);
        var_37 = ((/* implicit */short) (+(max((((/* implicit */int) arr_25 [4] [i_18 - 1])), (min((1707306658), (((/* implicit */int) arr_22 [i_18 - 1] [4] [(unsigned short)4] [2U] [2U] [4]))))))));
        var_38 = ((/* implicit */short) arr_20 [6LL]);
        arr_78 [i_18] [i_18] = ((((/* implicit */_Bool) min((((int) arr_53 [i_18] [i_18])), (((/* implicit */int) ((unsigned char) arr_55 [i_18] [i_18] [i_18 - 2] [(unsigned char)0] [i_18])))))) ? (((/* implicit */int) arr_25 [i_18 - 2] [i_18 + 1])) : (((/* implicit */int) (signed char)-37)));
    }
}
