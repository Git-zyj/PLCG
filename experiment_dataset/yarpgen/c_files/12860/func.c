/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12860
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
    var_10 = ((unsigned char) ((((3796448778U) ^ (1569267827U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1018875592))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_1 + 2] [i_1 - 3]))) | (((var_1) >> (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [16] [11] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (2725699463U)))) || (((/* implicit */_Bool) ((var_8) ? (var_6) : (1569267827U))))))));
                                var_12 = ((/* implicit */long long int) ((_Bool) -1018875593));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 231079867U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-10119))));
                                arr_14 [i_0] [9LL] [i_2] [(unsigned char)5] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) max((var_2), (var_2)))) + (((var_8) ? (-1018875593) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((2644056497U) << (((((/* implicit */int) (short)17222)) - (17198)))));
                                arr_19 [i_0] [i_0] [i_5] [i_5] [i_6] [i_6] = 3029754776U;
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((long long int) ((unsigned int) var_3))))));
                    arr_20 [i_0] [i_0] [i_0] = ((unsigned char) ((unsigned int) var_3));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            arr_24 [i_7] [i_7] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_23 [i_0])) ? (((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_23 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1569267822U)) ? (((/* implicit */int) (short)-32201)) : (1779157349))))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((var_2), (((/* implicit */short) var_7)))))));
            arr_25 [i_7] [(unsigned char)5] [i_7] = ((/* implicit */int) ((((/* implicit */int) ((short) var_3))) == (684511968)));
        }
    }
    for (signed char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
    {
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned char) min(((~(((unsigned int) arr_23 [i_8])))), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) min(((_Bool)0), (var_0))))))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((short) var_0));
                            arr_39 [i_12] [(short)0] [i_12] [i_11] = ((/* implicit */int) arr_12 [i_8] [i_8] [(short)11] [i_8]);
                            arr_40 [i_8] [i_11] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) ? (arr_18 [i_8] [i_9] [i_10]) : (((/* implicit */long long int) 1569267817U))))) ? (((/* implicit */unsigned long long int) 835705293)) : (var_1)));
                            var_18 = ((/* implicit */_Bool) (-(2477825396479986943LL)));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)511)) >> (((/* implicit */int) (_Bool)0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_9] [i_10]))) ^ (arr_27 [i_12] [(signed char)3]))))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (max((arr_9 [i_13] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) max((var_3), (var_2)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9])))));
                            var_21 = ((/* implicit */short) (unsigned short)34309);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((15U), (((/* implicit */unsigned int) (short)-32766))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))) : ((~(1265212519U)))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_46 [2] [i_9] [i_9] [i_10] [i_11] [i_11] [i_14] = ((/* implicit */unsigned int) max(((-((+(((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (unsigned short)0)) : (1341932237)))));
                            var_23 = ((/* implicit */short) ((((unsigned int) ((1837340663) | (1018875621)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) min((arr_31 [i_8] [i_10] [i_11]), (arr_3 [i_8] [i_8] [i_8])))) << (((((((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_9] [i_11])) ? (-7180918162088424282LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)55))))) + (7180918162088424313LL))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_31 [i_8] [i_8] [i_8])), ((unsigned char)148))))));
        arr_47 [i_8] &= ((/* implicit */signed char) (_Bool)1);
    }
    for (long long int i_15 = 2; i_15 < 13; i_15 += 1) 
    {
        arr_50 [i_15] [i_15] = ((/* implicit */short) var_4);
        arr_51 [i_15] = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)16007))))) ? (((/* implicit */int) (signed char)-79)) : ((-(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (short i_16 = 1; i_16 < 13; i_16 += 2) 
        {
            arr_56 [i_15] = ((/* implicit */_Bool) (~(-493798110693660151LL)));
            var_26 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_49 [i_15])))));
        }
        arr_57 [i_15] [(unsigned short)7] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3869255595215255543ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))));
        arr_58 [i_15] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) >= (max((((/* implicit */int) (short)9264)), (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) var_2)) - (22368)))))))));
    }
}
