/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159122
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        arr_3 [15ULL] = ((/* implicit */long long int) (-(arr_0 [i_0])));
        var_10 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
        arr_4 [(signed char)7] [i_0] = ((/* implicit */long long int) (~(arr_0 [i_0])));
    }
    var_11 = ((/* implicit */unsigned char) var_7);
    var_12 = ((/* implicit */_Bool) min(((~(((var_9) | (((/* implicit */unsigned long long int) 3420205056U)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) < (min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned int) 16777215))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_13 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) var_6))))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+((+(arr_7 [i_1]))))))));
        arr_9 [i_1] [i_1] = (_Bool)0;
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) var_4);
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_3] [(signed char)3] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> ((((((_Bool)1) ? (7802602783741772011LL) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) - (7802602783741772002LL)))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) arr_13 [i_4]))))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) min((arr_1 [i_4]), (arr_17 [i_3] [i_3] [i_3] [i_2])))) : ((-(4ULL))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))))))));
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(var_9)));
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551613ULL) >= (((/* implicit */unsigned long long int) 1526837702U)))))) & (arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1])))), (3686279431896980111ULL)));
                        }
                    } 
                } 
                arr_24 [i_2] [i_3] [0LL] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (-(arr_1 [i_2])))), (arr_22 [14LL] [i_3] [i_4] [(unsigned char)4]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [1U])))))));
            }
            for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                var_19 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_2])))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((874762238U), (arr_6 [i_3] [i_3])))) ? ((~((-(-7802602783741772011LL))))) : (((/* implicit */long long int) arr_15 [(unsigned char)13]))));
                arr_28 [i_3] [i_7] |= 874762240U;
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) 1103321013U))))), (max((max((((/* implicit */int) var_7)), (arr_7 [i_2]))), (((/* implicit */int) ((10297769267938142812ULL) > (18446744073709551606ULL))))))));
                arr_29 [i_7] [i_3] [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_7]);
            }
            var_22 = ((/* implicit */signed char) var_4);
        }
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    var_23 = ((/* implicit */long long int) arr_26 [i_8]);
                    var_24 = ((((/* implicit */_Bool) arr_27 [i_10] [i_8] [i_8])) ? (((/* implicit */int) var_2)) : (arr_27 [i_10] [i_8] [i_10]));
                }
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_27 [i_9] [(_Bool)1] [i_9]))));
                var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4637)) ? (arr_38 [i_2] [i_8] [i_2] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [(unsigned char)4] [i_9])))));
            }
            /* LoopSeq 2 */
            for (signed char i_11 = 2; i_11 < 11; i_11 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) var_4);
                var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(-2475210888112617179LL)))), ((~(arr_21 [i_11 + 4])))));
                arr_42 [i_8] = ((/* implicit */long long int) ((((((/* implicit */int) min((var_7), (((/* implicit */signed char) (_Bool)0))))) + (2147483647))) >> (min((arr_20 [i_11] [i_8] [i_11 - 1]), (0U)))));
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    arr_45 [i_12] [i_11 + 2] [(unsigned short)1] [(unsigned short)1] = min((min((min((7473815187248871616LL), (7802602783741772009LL))), (((/* implicit */long long int) arr_32 [i_2] [i_8])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_8)))) ? (min((arr_14 [i_12] [(unsigned short)12] [11U]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) max((3420205062U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    arr_46 [i_12] [i_11] [i_8] [i_2] = ((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_11] [(_Bool)1]);
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        arr_50 [i_2] [i_8] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1100238851U)))) ? (((/* implicit */int) arr_10 [i_11])) : (((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */_Bool) (-((-(arr_47 [i_11 + 3] [i_11 + 3] [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_2])))));
                    }
                }
                for (signed char i_14 = 4; i_14 < 14; i_14 += 3) 
                {
                    var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (18446744073709551611ULL))))));
                    var_31 = ((/* implicit */long long int) arr_15 [i_8]);
                }
            }
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                arr_57 [i_2] [(unsigned short)10] [i_15] = ((/* implicit */_Bool) (+((-((-(-11273155332408241LL)))))));
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_54 [i_2]))))) : ((-(var_3)))));
            }
        }
        var_33 = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_3) - (16608024405603962119ULL)))))));
    }
    for (unsigned short i_16 = 4; i_16 < 16; i_16 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            var_34 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 7627237844937883901LL)) ? (((/* implicit */int) ((8759832475427043944ULL) != (8759832475427043943ULL)))) : (((/* implicit */int) max((var_1), ((_Bool)1))))))));
            var_35 = (!(((/* implicit */_Bool) (-(-7802602783741772006LL)))));
        }
        var_36 |= ((/* implicit */unsigned int) var_6);
        var_37 = ((/* implicit */_Bool) (~((-(8759832475427043944ULL)))));
        /* LoopNest 3 */
        for (unsigned short i_18 = 2; i_18 < 13; i_18 += 3) 
        {
            for (long long int i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                for (unsigned char i_20 = 0; i_20 < 17; i_20 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_21 = 2; i_21 < 13; i_21 += 2) 
                        {
                            var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_70 [i_16 - 3] [i_16 - 3] [i_21 + 2] [i_18 - 2] [i_16 - 3])) ? (-1LL) : (((/* implicit */long long int) arr_61 [i_16 + 1] [(unsigned char)10] [i_21 - 1]))))));
                            var_39 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_21 + 2] [i_18 + 1] [i_19]))))));
                        }
                        arr_74 [i_20] [i_19] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (unsigned char)157)), (((((/* implicit */unsigned long long int) arr_7 [i_19])) | (var_9)))))));
                    }
                } 
            } 
        } 
    }
}
