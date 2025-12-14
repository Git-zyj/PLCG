/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126402
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) min((6162462857718096035ULL), (((/* implicit */unsigned long long int) 270215977642229760LL))))) ? (((/* implicit */unsigned long long int) ((-270215977642229760LL) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) (unsigned short)45790)) ? (12284281215991455575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-64)), (1644276092U)))) ? (((/* implicit */int) (unsigned short)24865)) : (((/* implicit */int) arr_2 [i_0])))))));
        var_14 = ((/* implicit */int) 6162462857718096032ULL);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [5U] &= ((/* implicit */short) (~(((((/* implicit */_Bool) 12284281215991455607ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (12284281215991455563ULL)))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(6162462857718096053ULL))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_4 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) (((+(12284281215991455581ULL))) * (((/* implicit */unsigned long long int) -7041454587615430726LL))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (-270215977642229760LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) : (((((/* implicit */_Bool) 6162462857718096052ULL)) ? (270215977642229760LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) : ((~((~(12284281215991455563ULL)))))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */int) arr_9 [i_3] [i_2])) / (-171860665)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), ((signed char)95))))) : (min((-270215977642229761LL), (((/* implicit */long long int) (unsigned short)4377)))))) : (((/* implicit */long long int) ((2931256249U) * (1363711040U))))));
            var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_2)))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])) : (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        }
        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_23 [i_2] [0U] |= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)85))));
                        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_0 [i_5])))))))));
                        var_21 &= ((/* implicit */unsigned short) 2931256245U);
                    }
                } 
            } 
            arr_24 [i_2] [i_4] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) (_Bool)0)), (1132778186U)))))));
            arr_25 [i_4] [i_4] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)61147))));
            var_22 = ((/* implicit */_Bool) (-((~(max((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])), (171860664)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_23 &= ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (((var_8) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5226))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_22 [i_7] [i_7] [i_2] [i_2])), (min((4294967287U), (((/* implicit */unsigned int) (_Bool)0)))))))));
            /* LoopSeq 4 */
            for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2113621445U)) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)61158)) : (var_6)))));
                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_8]))));
            }
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_26 |= ((/* implicit */signed char) (short)-12953);
                    arr_36 [i_2] [i_2] [(signed char)11] [(signed char)11] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6162462857718096023ULL)) ? (((/* implicit */unsigned long long int) 171860665)) : (6162462857718096052ULL)));
                }
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                {
                    arr_40 [i_2] [3U] [3U] [3U] = ((/* implicit */unsigned short) (!((_Bool)1)));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)19), (((/* implicit */unsigned short) (short)-12953)))))))) >= (12284281215991455581ULL)));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 270215977642229774LL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)79))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_11)))) : (var_0)));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-47))))) : (max((var_0), (((/* implicit */unsigned long long int) arr_5 [i_9] [i_9]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_9] [(unsigned short)2]))))) : (((/* implicit */int) (short)12952))));
                }
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                {
                    arr_43 [i_2] [i_7] [i_7] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2931256249U)) ? (((/* implicit */int) (_Bool)0)) : (var_6))))));
                    var_30 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((2931256244U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (short)12953)) : (((/* implicit */int) var_2))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            var_31 += ((/* implicit */unsigned long long int) var_4);
                            var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (signed char)24))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) ^ ((~(arr_33 [i_2] [i_7] [i_2] [i_2] [i_13] [i_7])))))));
                            arr_50 [0ULL] [i_14] [(signed char)9] [i_14] [(signed char)9] = ((/* implicit */unsigned int) min((max((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_49 [(signed char)12] [0ULL] [8U] [i_13] [i_14])))))), (((/* implicit */int) ((min((arr_33 [i_2] [i_7] [i_9] [i_2] [(unsigned char)6] [(unsigned char)6]), (((/* implicit */unsigned long long int) 2931256256U)))) != (((/* implicit */unsigned long long int) arr_21 [i_9] [i_13 + 1] [i_13 + 2] [i_9])))))));
                        }
                    } 
                } 
                arr_51 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((3103138771U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25)))))))) ? (1363711039U) : (((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)229)))))))));
                var_33 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (arr_46 [i_2]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) ? (arr_0 [i_9]) : (((/* implicit */unsigned long long int) min(((-(var_11))), (((/* implicit */unsigned int) var_12))))));
            }
            for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                arr_54 [i_15] [i_2] [i_7] [i_2] = ((/* implicit */unsigned short) min(((signed char)-86), (((/* implicit */signed char) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_9))))))))));
                            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(171860672))))));
                            var_36 = ((/* implicit */unsigned short) (~(min((var_4), ((~(arr_55 [i_2])))))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_59 [i_2] [10] [4U] [i_2] [10] [i_15]))))) ? (max((((/* implicit */unsigned int) (~(-103580002)))), (((((/* implicit */_Bool) var_3)) ? (1363711039U) : (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                var_38 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_27 [i_7])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29285))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) var_3)))))));
                arr_61 [i_2] = var_10;
            }
            for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                arr_65 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_59 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) | (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_39 [i_2] [i_2] [i_2] [i_2])));
                arr_66 [i_2] [i_2] [i_7] [i_18] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) ^ (0ULL)));
            }
            var_39 = ((/* implicit */int) arr_17 [i_7] [i_7]);
        }
        /* vectorizable */
        for (unsigned char i_19 = 3; i_19 < 13; i_19 += 3) 
        {
            arr_69 [1LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [6LL] [i_19 - 1] [i_2] [i_19] [6LL] [i_19 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_59 [i_2] [i_19 - 1] [(signed char)3] [i_19 - 1] [(unsigned short)0] [(signed char)3]))));
            arr_70 [i_2] [12U] [i_19] = var_7;
        }
        var_41 += ((/* implicit */unsigned long long int) (signed char)-92);
    }
    /* vectorizable */
    for (unsigned int i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
    {
        var_42 = ((/* implicit */signed char) var_9);
        arr_74 [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_20] [i_20])) ? (((/* implicit */unsigned long long int) arr_4 [i_20])) : (var_5)));
    }
    var_43 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-86)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))))))))));
    /* LoopSeq 1 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_44 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
        var_45 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 171860643))))));
    }
    var_46 = ((/* implicit */short) (+(var_6)));
}
