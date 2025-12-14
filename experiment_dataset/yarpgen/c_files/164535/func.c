/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164535
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
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) arr_1 [i_0 - 3])) : (var_2)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)76);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (~(((int) arr_6 [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned int) var_13);
        var_20 = ((/* implicit */signed char) var_1);
        var_21 |= ((/* implicit */_Bool) (+(((arr_4 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16321)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned int) ((arr_6 [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))));
                    arr_20 [i_2] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) ((short) (~(((/* implicit */int) arr_0 [i_3])))))), (-202475166)));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                for (unsigned char i_7 = 4; i_7 < 9; i_7 += 1) 
                {
                    {
                        arr_29 [i_7 - 1] [i_6 + 1] [i_5] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                        var_22 = ((/* implicit */_Bool) arr_11 [i_5]);
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) 14436241280381514830ULL);
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned short) ((int) 4LL));
                            var_24 = ((/* implicit */signed char) arr_5 [i_7]);
                        }
                        for (int i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            arr_36 [i_2] [i_5 + 1] [i_6 + 1] [i_7 - 2] [i_9 - 1] [i_2] = ((/* implicit */unsigned char) arr_9 [i_6 - 2] [i_5 + 1]);
                            var_25 = ((arr_4 [i_2]) < (arr_4 [i_6 - 2]));
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_41 [i_2] [i_5 - 1] [i_2] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_39 [i_7 - 4] [i_6 - 1] [i_6] [i_6 - 1] [i_5 - 1])) : (((/* implicit */int) arr_39 [i_7 - 1] [i_6 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]))));
                            arr_42 [i_2] [i_2] [i_2] [i_2] = (+(arr_26 [i_2] [i_5 - 1] [i_5 + 1] [i_6 - 1] [i_5 - 1] [i_7 - 2]));
                            var_26 = ((/* implicit */signed char) (-(arr_40 [i_10] [i_10] [i_7 - 4] [i_6 + 1] [i_5] [i_5 + 1] [i_5 - 1])));
                            arr_43 [i_10] [i_7 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 36028797018963960LL)) ? (arr_33 [i_5 - 1] [i_5 - 1] [i_5] [i_6 - 1] [i_7 - 1] [i_7]) : (var_1)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_34 [i_2] [i_5 + 1])) ? (((/* implicit */unsigned long long int) 1267888575)) : (arr_28 [i_2] [i_2] [i_2] [i_2]))));
                            arr_46 [i_2] [i_5 + 1] [i_6 - 2] [i_7 - 2] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_6 + 1] [i_5 + 1])) | (((/* implicit */int) arr_13 [i_6 + 1] [i_5 - 1]))));
                            arr_47 [i_11] [i_7 - 4] [i_6 - 1] [i_5] [i_2] = ((/* implicit */int) (+(-5LL)));
                        }
                    }
                } 
            } 
            arr_48 [i_5 + 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7589845044477330659LL)) ? (((/* implicit */int) (short)2040)) : (((/* implicit */int) (unsigned short)0))))) ? (arr_34 [i_2] [i_5 + 1]) : (arr_32 [i_2] [i_5 + 1] [i_2] [i_2] [i_2] [i_2] [i_2])));
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_37 [i_2] [i_2] [i_12] [i_12]))) ? (((/* implicit */unsigned long long int) 599408765U)) : (arr_4 [i_2])));
                var_29 = ((/* implicit */unsigned int) var_4);
                arr_52 [i_2] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5LL)) ? (14436241280381514830ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
            }
        }
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            arr_57 [i_2] [i_2] [i_2] = var_12;
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_13] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_13] [i_2])))))) || ((!(((/* implicit */_Bool) 1514948602U))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        arr_65 [i_2] [i_14] [i_14] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2]))))) >= (arr_22 [i_14] [i_15])));
                        arr_66 [i_2] [i_14] [i_14] [i_16] = ((/* implicit */unsigned int) min((max((((int) var_11)), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_14]))) > (var_0)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)0))))));
                        var_31 = ((/* implicit */_Bool) ((((int) (-(((/* implicit */int) (short)16325))))) / (((/* implicit */int) ((unsigned short) (short)8183)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) arr_45 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            arr_74 [i_19] [i_14] [i_14] [i_18] [i_19] [i_14] = ((/* implicit */long long int) min((((/* implicit */int) (short)16321)), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)57))) - (10LL)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)129))) : (((/* implicit */int) ((var_7) >= (arr_58 [i_14] [i_14]))))))));
                        }
                    } 
                } 
            } 
            var_33 = arr_73 [i_14] [i_14] [i_14] [i_14] [i_14] [i_2] [i_2];
            var_34 = ((/* implicit */_Bool) -3913979405944344119LL);
            /* LoopNest 2 */
            for (long long int i_20 = 3; i_20 < 9; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    {
                        arr_81 [i_14] [i_14] [i_20 - 1] [i_14] [i_14] = ((/* implicit */unsigned int) ((long long int) max((arr_54 [i_20 - 2] [i_14] [i_2]), (arr_54 [i_20 - 2] [i_20 - 2] [i_14]))));
                        arr_82 [i_14] [i_20 - 1] [i_2] [i_14] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((((_Bool)1) ? (16777215) : (arr_73 [i_2] [i_2] [i_20 - 2] [i_21] [i_14] [i_14] [i_2]))), (arr_71 [i_14] [i_20] [i_20 - 2] [i_20] [i_14])))), (9151314442816847872ULL)));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_22 = 0; i_22 < 15; i_22 += 1) 
    {
        arr_86 [i_22] [i_22] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_22]))))) ? (arr_84 [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5)))))))));
        var_35 &= ((/* implicit */unsigned short) ((arr_84 [i_22]) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65280)))))));
        arr_87 [i_22] [i_22] = -988503716;
        arr_88 [i_22] = ((/* implicit */long long int) var_6);
        arr_89 [i_22] [i_22] = ((/* implicit */long long int) ((min((((/* implicit */long long int) -18)), (arr_83 [i_22]))) > (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
    }
    var_36 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -30LL)) ? (13296080134162318259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) -6358690356151043479LL)))));
}
