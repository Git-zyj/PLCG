/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186657
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
    var_13 = ((/* implicit */_Bool) (unsigned char)0);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */long long int) arr_2 [i_0]);
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (arr_6 [i_1] [i_0]) : (arr_6 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3869194637804575911LL)) ? (131064LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 3869194637804575893LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (arr_6 [i_0] [i_0]))))))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) 8927397999528773716LL);
            var_16 = 18446744073709551615ULL;
        }
        var_17 ^= (-((-(((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)17))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (arr_15 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) 3869194637804575910LL)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) 0U)) : (3869194637804575893LL))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [i_2] [i_3] [i_2]) * (((/* implicit */unsigned long long int) 3869194637804575893LL))))) ? (arr_15 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_3] [i_4])) + (((/* implicit */int) (short)-1)))))));
                    arr_16 [i_3] [i_4] = ((/* implicit */unsigned char) 32767U);
                    var_21 &= ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) + (-5247502532812611003LL)))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_22 = (_Bool)0;
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14366)) ? (931394815) : (((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_20 [i_5]) + (arr_20 [i_5])))) ? ((+(-3869194637804575900LL))) : ((+(((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) 538085169)) : (arr_19 [(unsigned char)1] [15ULL])))))));
                        arr_29 [i_5] [i_5 - 1] [i_6] [i_7 - 1] [i_5] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((13464852094057832058ULL) + ((-(4981891979651719558ULL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)64))))) : (((arr_20 [i_5]) << (((arr_20 [i_5]) - (2189472412983974615LL)))))));
                        arr_30 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -538085169)) ? (((((/* implicit */_Bool) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [(unsigned char)14])))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9509147772367821608ULL) : (arr_28 [i_5]))) : (((/* implicit */unsigned long long int) 4178481440U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_7 - 1]))) : (((((/* implicit */_Bool) (unsigned char)135)) ? (arr_20 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((((/* implicit */_Bool) (short)4424)) ? (3869194637804575899LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))) : (((/* implicit */long long int) arr_17 [i_6]))))) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_5 + 2])) ? (131072U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_5] [i_5 + 1]))))) : (((arr_22 [i_5 - 1] [i_7 - 1] [10LL]) + (arr_22 [i_5 + 2] [i_7 - 1] [10U])))));
                        var_26 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)148)) ? (arr_25 [i_5 + 1] [7LL]) : (arr_25 [i_6] [i_5])))) ? (((((/* implicit */_Bool) arr_23 [i_5])) ? (arr_25 [i_5] [i_6]) : (((/* implicit */int) (unsigned short)40739)))) : (301852492)))));
                        var_27 = ((((((/* implicit */int) (unsigned short)71)) == (arr_31 [i_7 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 2]))) ? (((/* implicit */unsigned int) ((arr_31 [i_7 - 1] [i_5 + 2] [i_5 + 1] [i_5 - 1]) << (((arr_31 [i_7 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 1]) - (2046546381)))))) : (((((/* implicit */_Bool) arr_31 [i_7 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */unsigned int) arr_31 [i_7 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 2])) : (4294967282U))));
                    }
                    var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3869194637804575900LL)) ? (((/* implicit */int) (short)-2197)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)16660)) : (((/* implicit */int) (unsigned short)48875))))));
                }
            } 
        } 
        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3968176120139648453ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (0U)))) ? (((((/* implicit */_Bool) arr_28 [(_Bool)1])) ? ((+(-5402563443589047241LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)32763)) / (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2611875984416641627ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) : (((((/* implicit */_Bool) 8693566238030697312LL)) ? (-3869194637804575900LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18058))))))));
    }
}
