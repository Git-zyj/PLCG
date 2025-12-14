/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124321
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)5] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5247284427338121040ULL))))), (13199459646371430576ULL))))));
                var_10 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((((_Bool) 5247284427338121029ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (13199459646371430570ULL))))) : (min((((/* implicit */long long int) var_9)), (arr_1 [7U] [i_0])))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)216))))), (13199459646371430576ULL)))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    arr_9 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 - 1])) : (13199459646371430575ULL)))) ? (((((/* implicit */_Bool) 13199459646371430587ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -829520055))))));
                    arr_10 [i_2] [i_0] [i_2 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((short) (short)-1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (0LL))) == (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) 829520055))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_1])) / (829520054)))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_3 [i_2 - 1])))) : (max((((33554431) * (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)83))))));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-15)) != (max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) arr_2 [i_3]))))))));
                    }
                    var_13 = ((/* implicit */signed char) var_7);
                    var_14 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 8; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_8 [i_1 - 3] [i_1 - 3]))) * (((((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_4] [i_4] [(unsigned char)4] [i_0])) ? (((/* implicit */unsigned long long int) max((1690318513U), (((/* implicit */unsigned int) (unsigned char)189))))) : (min((5247284427338121029ULL), (((/* implicit */unsigned long long int) var_8))))))));
                                arr_23 [i_0] [i_0] [4] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min(((unsigned char)20), (var_3)))) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (_Bool)1)))));
                                var_16 = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_32 [i_0] [i_0] [(unsigned char)8] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_1 - 2] [i_1] [i_1 + 1])))))));
                                var_17 &= ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_31 [i_1] [i_1 - 1] [(unsigned short)3] [i_1 + 1])))));
                                arr_33 [i_8] [i_8] [i_4] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) 5247284427338121028ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) (_Bool)1))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (3589726071U)))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (((13199459646371430604ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    arr_37 [i_0] [10ULL] [i_9] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (short)23062));
                    arr_38 [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) 3733400534199827793LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                arr_44 [i_11] [i_0] [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_16 [i_1] [i_1] [i_1 - 3] [i_1 + 1]))));
                                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) arr_28 [i_11] [i_10] [i_9] [i_1 + 2] [i_0])) ? (((/* implicit */int) arr_28 [i_0] [i_1 - 1] [i_9] [i_10] [i_11])) : (((/* implicit */int) (_Bool)0))))));
                                arr_45 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_11] = ((/* implicit */short) ((unsigned short) (signed char)127));
                                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-23062)) : (((/* implicit */int) arr_7 [i_10] [i_9]))));
                                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -829520055)) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7))))) ? (arr_46 [i_1 - 3] [i_12] [1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 5247284427338121040ULL))))));
                                arr_52 [i_0] [i_1] [i_9] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_19 [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 2]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((-829520046) & (((/* implicit */int) (short)8783)))) >= (-829520055)))) >= (((/* implicit */int) var_1))));
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    var_24 += ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 829520046)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (var_2))))))), (((unsigned int) min((((/* implicit */unsigned int) (short)27317)), (var_8))))));
    /* LoopNest 3 */
    for (signed char i_14 = 3; i_14 < 7; i_14 += 1) 
    {
        for (unsigned char i_15 = 3; i_15 < 7; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    arr_63 [i_14] [i_15] [i_16] = ((/* implicit */signed char) arr_1 [i_14] [i_14]);
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_30 [i_15] [5U]))));
                }
            } 
        } 
    } 
}
