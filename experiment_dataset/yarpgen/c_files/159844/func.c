/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159844
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (unsigned char)15);
        var_18 = ((/* implicit */unsigned short) var_13);
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) arr_0 [i_1]);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) 4294967295U);
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) == (var_4)))) == (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-21010)))))))));
                }
                /* LoopSeq 3 */
                for (short i_5 = 3; i_5 < 12; i_5 += 1) 
                {
                    var_21 ^= ((((((/* implicit */_Bool) -1824773788986918285LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_5 [i_1] [i_1]))) != (var_12));
                    arr_19 [i_5] [i_2] [i_2] [i_1 + 1] = ((/* implicit */unsigned long long int) ((short) arr_5 [i_1 - 1] [i_3 + 3]));
                    arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] [(signed char)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) : (arr_4 [i_1 - 1])));
                }
                for (long long int i_6 = 3; i_6 < 11; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) ((int) 16953938653545717702ULL));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */short) 1824773788986918285LL);
                        arr_27 [0U] [i_2] [i_3] [i_3] [i_3] [i_2] [0U] = ((/* implicit */long long int) var_2);
                        var_24 += ((/* implicit */long long int) ((arr_5 [i_2] [i_3 + 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))));
                        var_25 = ((/* implicit */int) ((arr_3 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74)))));
                    }
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_1] [i_2] [i_3 + 1] [i_3] [i_6])))))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (arr_17 [i_8 - 1] [i_1] [i_1 - 2] [i_1 - 2])));
                    arr_31 [0] [10] [i_3 - 1] &= ((((/* implicit */_Bool) 1824773788986918285LL)) ? (arr_4 [i_1 - 1]) : (1824773788986918294LL));
                }
                arr_32 [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_2]))));
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-21031)) : (((/* implicit */int) (signed char)123))));
            }
            for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 1) 
            {
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_6))));
                var_30 = ((/* implicit */signed char) (-(var_6)));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */unsigned long long int) var_13);
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_10])));
    }
    /* vectorizable */
    for (long long int i_11 = 3; i_11 < 19; i_11 += 3) 
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) <= (((/* implicit */int) arr_41 [i_11 + 4]))));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (0ULL)));
        var_34 += (signed char)-109;
        arr_43 [(short)22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) arr_41 [i_11 + 3])) : (((/* implicit */int) (signed char)-109))));
    }
    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) var_5))));
    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) - (min((var_12), (((/* implicit */long long int) var_13))))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (16065201687929146021ULL) : (((/* implicit */unsigned long long int) 4300339737306969905LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) -6597526737009754643LL))), (-7306135120397893329LL))))));
}
