/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107214
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
    var_12 = ((/* implicit */signed char) ((unsigned char) ((unsigned char) min(((signed char)114), (((/* implicit */signed char) var_3))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (-((+(max((12664952738369249708ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_13 *= ((/* implicit */short) 12664952738369249707ULL);
                            var_14 *= ((/* implicit */unsigned short) ((((arr_14 [i_4] [i_2] [i_2] [i_4]) | ((((_Bool)1) ? (12664952738369249697ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (9953440680588327224ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_4]))))) : (min((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_4] [i_3] [i_4] [i_0])), (var_2))))))));
                            var_15 *= ((/* implicit */short) arr_1 [i_4]);
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (short)5230);
            }
            for (signed char i_5 = 3; i_5 < 21; i_5 += 4) /* same iter space */
            {
                var_16 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1875620136)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483628)) > (arr_10 [(_Bool)1] [(_Bool)1])))) : (((/* implicit */int) arr_9 [(_Bool)1] [i_5 - 3] [i_5] [i_5]))))) < (max((((11049583850790865159ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [14ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (var_0)))))));
                /* LoopNest 2 */
                for (signed char i_6 = 4; i_6 < 21; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_17 &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (5781791335340301933ULL))))))));
                            var_18 = ((/* implicit */unsigned int) (signed char)34);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-5221))));
                            arr_27 [i_0] [i_1] [i_5] [i_8] [i_8] &= ((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_8] [i_8] [i_9])) ^ (((/* implicit */int) (short)-1))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((12664952738369249708ULL) != (3187511120260642777ULL)))))))));
                            arr_28 [i_0] [i_1] [i_0] [i_8] [i_9] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_8])))))), (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 1) 
                    {
                        {
                            arr_34 [i_10] [i_0] [i_5] [i_10] [i_11] = ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (arr_19 [i_0] [i_0] [i_5] [i_10] [i_11])))), (((arr_26 [i_11 + 1] [i_5] [i_5] [i_0] [i_1]) + (arr_26 [i_11 + 1] [i_10] [i_0] [i_0] [i_5])))));
                            arr_35 [i_0] [i_1] [i_5] [i_0] [i_10] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_10] [i_10])) ? (arr_22 [i_0] [i_1] [i_5] [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_4)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_10] [i_5] [i_1] [i_0]))) & (arr_26 [i_11] [i_0] [i_5] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(arr_29 [i_0] [i_0] [i_11] [i_11]))))))));
                            var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_14 [i_0] [i_5 - 2] [i_1] [i_0])) ? (arr_14 [i_0] [i_5 - 1] [i_5] [i_0]) : (12664952738369249672ULL)))));
                            var_21 = ((/* implicit */int) (unsigned char)155);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_40 [i_0] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_12 [i_5 + 1] [i_5] [i_0] [i_0] [i_1] [i_0])) * (((/* implicit */int) arr_12 [i_5 + 1] [i_5] [i_0] [i_0] [i_5] [i_0])))) <= (((/* implicit */int) (!(arr_2 [i_0]))))));
                    arr_41 [i_0] [i_1] [i_1] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)12855)))), (((/* implicit */int) ((((/* implicit */int) (short)25147)) < (arr_29 [i_0] [i_0] [i_5] [i_12]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_5 + 1] [i_0])) == (((int) (signed char)(-127 - 1))))))) : ((~(((((/* implicit */long long int) var_2)) ^ (6168485349171150556LL)))))));
                }
            }
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                arr_44 [i_0] [i_1] = ((/* implicit */short) ((int) max((max((((/* implicit */unsigned long long int) var_5)), (3506427199070799848ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0))))))));
                arr_45 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0])))))) : (max((14940316874638751778ULL), (((/* implicit */unsigned long long int) 2147483648U)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            arr_50 [i_0] [i_1] [i_13] [i_0] [i_15] = (((+(((((/* implicit */int) arr_24 [i_15] [i_14] [i_0] [i_1] [i_0])) << (((var_2) - (2361302317U))))))) << ((((-(max((((/* implicit */unsigned long long int) arr_46 [i_13] [i_1] [i_1] [i_0])), (12664952738369249693ULL))))) - (5781791335340301921ULL))));
                            var_22 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [20] [i_1] [i_13] [i_14] [i_15])) ? (arr_32 [i_15] [(unsigned char)0] [i_14] [i_13] [(unsigned char)0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 5781791335340301889ULL)) ? (((/* implicit */int) arr_43 [i_15] [(signed char)16] [(signed char)16] [i_0])) : (((/* implicit */int) var_6))))))))));
                            arr_51 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_32 [i_15] [i_0] [i_14] [i_13] [i_0] [i_0])) - (max((arr_14 [i_0] [i_1] [i_13] [i_14]), (((/* implicit */unsigned long long int) var_11)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */short) var_8)), ((short)5233)))) : (((arr_25 [i_0]) + (((/* implicit */int) (unsigned char)0)))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned char i_16 = 3; i_16 < 21; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_18 = 3; i_18 < 20; i_18 += 4) /* same iter space */
                        {
                            var_23 |= ((/* implicit */unsigned long long int) (+(arr_47 [i_17])));
                            var_24 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_22 [i_0] [i_1] [i_16] [i_17] [i_18])))) ? (arr_39 [i_17] [i_17] [i_17] [i_0] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))), (((((((/* implicit */unsigned long long int) var_2)) | (var_4))) >> (((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)255)))) - (1181623368U)))))))) : (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_22 [i_0] [i_1] [i_16] [i_17] [i_18])))) ? (arr_39 [i_17] [i_17] [i_17] [i_0] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))), (((((((/* implicit */unsigned long long int) var_2)) | (var_4))) >> (((((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)255)))) - (1181623368U))) - (3327109082U))))))));
                            var_25 = ((/* implicit */unsigned long long int) min(((unsigned char)255), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0])) ? (1048320LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1])))))))))));
                        }
                        for (unsigned long long int i_19 = 3; i_19 < 20; i_19 += 4) /* same iter space */
                        {
                            arr_62 [i_0] [i_1] [i_1] [i_17] [i_17] [i_0] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_55 [i_0] [i_1] [i_0]))))));
                            var_26 = var_9;
                            var_27 *= ((/* implicit */short) ((((/* implicit */long long int) (~((~(var_2)))))) == (max((((/* implicit */long long int) max(((-2147483647 - 1)), (var_0)))), (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_1] [i_17] [i_19]))) / (-3964822208436522760LL)))))));
                            var_28 ^= ((/* implicit */short) (~(((/* implicit */int) arr_33 [i_1] [i_17]))));
                            var_29 = (+(((/* implicit */int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) || ((!(((/* implicit */_Bool) 2147483647))))))));
                        }
                        for (unsigned long long int i_20 = 3; i_20 < 20; i_20 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_57 [i_17] [i_0] [i_0] [i_16] [i_20])) : (((/* implicit */int) var_7)))))))));
                            var_31 = ((/* implicit */unsigned long long int) (-((~(((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0])))))))));
                        }
                        for (unsigned long long int i_21 = 3; i_21 < 20; i_21 += 4) /* same iter space */
                        {
                            arr_67 [i_0] [i_1] [i_1] [i_0] [i_17] [i_21] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_16] [i_21 - 3] [i_21] [i_21])) ? (((/* implicit */int) arr_43 [i_21] [i_0] [i_0] [i_16])) : (((((/* implicit */_Bool) 12664952738369249687ULL)) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [i_17] [i_21])) : (((/* implicit */int) (short)-23323)))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_48 [i_0])), (arr_36 [i_0] [i_0] [i_21] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (15561537932249730657ULL))))))));
                        }
                        var_33 = ((/* implicit */signed char) (~((((~(var_4))) & ((~(var_10)))))));
                        var_34 -= ((((/* implicit */_Bool) (-(min((-2147483647), (((/* implicit */int) (short)-25729))))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_17] [i_16] [i_17] [i_17]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (5781791335340301906ULL))))) : (max(((+(var_10))), (((/* implicit */unsigned long long int) (+(var_5)))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) var_9);
            arr_68 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_1)))), (12664952738369249672ULL)));
            var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_57 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_57 [i_0] [i_0] [i_0] [i_1] [i_0]))))));
        }
    }
    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 22; i_23 += 4) 
        {
            for (unsigned long long int i_24 = 1; i_24 < 21; i_24 += 4) 
            {
                {
                    var_37 = ((/* implicit */short) arr_36 [i_24] [i_23] [i_24] [i_24]);
                    var_38 &= ((/* implicit */signed char) max((((arr_58 [i_24] [i_23] [i_23] [i_23] [i_22]) ? (arr_55 [i_23] [i_23] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_22] [i_23]) < (((/* implicit */int) arr_9 [i_23] [i_23] [i_24] [i_24])))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) var_2)) : (arr_42 [i_24] [i_23] [i_23] [i_23])))), (arr_26 [i_24 - 1] [i_23] [i_24] [i_23] [i_22])))));
                }
            } 
        } 
        arr_76 [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 82469821047055610ULL)) ? (12664952738369249670ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_22] [i_22] [(signed char)2] [i_22] [i_22])))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min(((_Bool)1), (var_8)))), (((unsigned short) -1996436667)))))) : (arr_72 [i_22] [i_22] [i_22])));
    }
    for (unsigned int i_25 = 0; i_25 < 22; i_25 += 3) /* same iter space */
    {
        var_39 -= ((/* implicit */unsigned long long int) ((arr_25 [(unsigned short)0]) / (min((((((/* implicit */_Bool) arr_77 [i_25])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_11))))))));
        var_40 = ((/* implicit */_Bool) 12097215502774190465ULL);
        /* LoopSeq 1 */
        for (unsigned char i_26 = 1; i_26 < 21; i_26 += 3) 
        {
            var_41 = arr_77 [i_26];
            /* LoopSeq 1 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_58 [i_25] [i_26] [i_27] [i_27] [i_27])), ((~(arr_59 [i_25] [i_27] [i_26] [i_27] [i_27])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (arr_0 [i_27] [i_27])))), (min((var_4), (((/* implicit */unsigned long long int) 543110304)))))))));
                var_43 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1996436675)))) ? (((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (signed char)127)))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_3)))))))));
            }
        }
        arr_83 [i_25] [i_25] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_25] [i_25] [i_25] [2])) ? (((((/* implicit */unsigned long long int) ((arr_0 [(signed char)16] [(signed char)16]) ^ (((/* implicit */unsigned int) var_0))))) & (max((18044462571102258903ULL), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [4U] [i_25] [i_25] [i_25] [i_25] [i_25]))) == (((arr_66 [i_25] [(signed char)10] [i_25] [i_25] [i_25] [i_25] [i_25]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
        var_44 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) var_5)) ? (17048290698207997794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [(signed char)4] [(signed char)4]))))))));
    }
}
