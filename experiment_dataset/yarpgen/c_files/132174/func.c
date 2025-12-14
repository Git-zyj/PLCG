/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132174
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (-(max((max((((/* implicit */long long int) var_8)), (var_10))), (var_5))))))));
    var_19 -= ((/* implicit */short) ((var_6) < ((-(max((18446744073709551590ULL), (((/* implicit */unsigned long long int) 2822493721024286426LL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 4; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4252450648U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (((18446744073709551611ULL) / (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_3 - 2]))))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+((+(arr_3 [i_1] [i_1] [i_3 + 1]))))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */long long int) var_1)) + ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) var_4)))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (short)32761))));
        var_24 -= ((/* implicit */unsigned long long int) ((((var_12) + (9223372036854775807LL))) << (((((-1) & (var_7))) - (1891727166)))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_3 [i_6] [i_5] [i_6]))));
                    var_26 = ((/* implicit */int) var_0);
                    /* LoopSeq 3 */
                    for (short i_7 = 3; i_7 < 10; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) max(((short)3), (((/* implicit */short) arr_2 [i_4 - 1])))))))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) max(((~(26ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_5] [2U])) ? (((/* implicit */long long int) arr_17 [i_4] [i_4] [i_4])) : (-1LL))))))) ? (max((((((/* implicit */_Bool) 9526974560195976610ULL)) ? (6604884399450634805LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) var_11)))) : (((((/* implicit */long long int) var_15)) & (-6604884399450634819LL)))))));
                        }
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) max((((short) (+(arr_21 [i_4] [i_4] [8ULL] [i_4])))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_7] [i_9]))))))))));
                            var_30 = ((/* implicit */int) min((arr_8 [i_4 + 1]), (arr_1 [i_6])));
                            var_31 ^= ((/* implicit */unsigned char) var_16);
                        }
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_32 ^= ((/* implicit */short) arr_10 [i_6] [i_10]);
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) 7273459490636463873ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_11 [i_5]))) + (min((arr_27 [i_4 + 1] [i_4 + 1] [(unsigned short)4]), (var_0)))))))));
                            var_34 ^= ((/* implicit */signed char) (-(var_1)));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_4] [i_4] [8ULL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((((var_12) + (8624690370209650207LL))) - (17LL))))))))) : (min((((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_2 [i_6])) : (var_11))), (((/* implicit */int) ((unsigned char) var_14))))))))));
                        }
                        var_36 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_20 [i_4 - 1] [i_4 - 1] [i_5 + 1]) + (arr_20 [i_4 - 1] [i_4 + 1] [i_5 - 1])))) - (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (var_11)))) - (max((-7906378503012975378LL), (((/* implicit */long long int) (short)-6855))))))));
                        var_37 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_13))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_5)))) ? (min((arr_22 [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) 511)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    }
                    for (long long int i_11 = 4; i_11 < 10; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((max((((var_0) << (((8663213751161217990LL) - (8663213751161217990LL))))), (((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_6] [i_4] [i_6])) ? (var_5) : (((/* implicit */long long int) var_7)))))) < (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                            var_39 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_28 [(signed char)0])))));
                            var_40 ^= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) min((arr_33 [i_12] [i_11] [i_11] [i_6] [i_4] [i_4]), (((/* implicit */int) (unsigned char)100))))), (min((((/* implicit */long long int) (unsigned char)90)), (var_12)))))));
                            var_41 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) min((arr_19 [i_11 + 2]), (((/* implicit */unsigned char) var_14))))) : (((/* implicit */int) (unsigned char)80))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (unsigned short)65281))))));
                        }
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (short)-8337)) < (((/* implicit */int) (unsigned short)26623))))), (min((var_7), (((/* implicit */int) (signed char)10))))))) ? (((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_11] [0] [i_4])) && (((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) arr_1 [(unsigned short)5])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                        /* LoopSeq 1 */
                        for (int i_13 = 2; i_13 < 11; i_13 += 3) 
                        {
                            var_43 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1180049738))));
                            var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_13 - 2] [i_13 - 2] [i_11 - 3] [i_11 - 3]))))) : (min((var_12), (((/* implicit */long long int) var_2)))))))));
                            var_45 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (arr_27 [i_5 - 1] [i_11 + 2] [(unsigned char)6]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) < (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) arr_1 [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6611242086611387449LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) : (var_9)))));
                            var_46 -= ((/* implicit */unsigned char) var_8);
                        }
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_47 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [i_14] [i_14])) : (arr_29 [i_6] [i_6] [i_6] [i_6])))))), (max((max((-5450291528625463063LL), (((/* implicit */long long int) (_Bool)0)))), ((-(arr_15 [i_4] [i_4] [i_4])))))));
                        var_48 = ((/* implicit */_Bool) max((var_48), ((!(((/* implicit */_Bool) min((max((var_9), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))));
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (max(((-(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 25ULL)) ? (var_11) : (arr_29 [i_4 + 2] [i_5] [i_6] [i_4 + 2])))))))))));
                    }
                    var_50 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) / (-5930231819637264492LL)))) || (((/* implicit */_Bool) max((520093696), (((/* implicit */int) (short)-7614)))))))), (min((var_10), (((/* implicit */long long int) ((arr_24 [i_4] [i_4] [i_4] [i_5] [i_6]) < (0U))))))));
                }
            } 
        } 
        var_51 ^= ((/* implicit */signed char) var_7);
        /* LoopSeq 1 */
        for (short i_15 = 2; i_15 < 9; i_15 += 1) 
        {
            var_52 -= (unsigned char)159;
            var_53 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_4 [i_4 - 1]) || (((/* implicit */_Bool) var_7))))) / (((/* implicit */int) max(((_Bool)1), (arr_4 [i_4 - 1]))))));
            var_54 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) / (2752422967650399729ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-(var_12))) : (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_4])), ((-2147483647 - 1)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned char)100))))), (((9526974560195976610ULL) * (8919769513513575002ULL)))))));
        }
    }
    var_55 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_17))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-7906378503012975378LL) : (((/* implicit */long long int) var_11)))))))), (var_5)));
}
