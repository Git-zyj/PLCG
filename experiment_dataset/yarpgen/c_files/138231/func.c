/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138231
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) - (((((/* implicit */_Bool) max((1064767228U), (var_5)))) ? (((3230200067U) >> (((1064767228U) - (1064767223U))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) % (1064767228U)))))));
        var_14 = ((/* implicit */long long int) (~(1064767212U)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) (+(3230200081U)));
            var_15 -= ((/* implicit */unsigned int) arr_1 [i_1]);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) 1064767228U);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_10 [i_4] [i_2] [i_2]), (((/* implicit */short) (signed char)-13))))) | (((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-108)))) : (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_4])) : (((/* implicit */int) (signed char)-63))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4239995192U)) ? (((((/* implicit */_Bool) min((54972103U), (((/* implicit */unsigned int) -1155895532))))) ? (((/* implicit */unsigned int) -1501744159)) : ((-(54972103U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)13)) <= (((((/* implicit */_Bool) 13983192723912151691ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-12156))))))))));
                                var_18 = ((/* implicit */unsigned long long int) var_4);
                                var_19 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(4239995193U)))), (max((((/* implicit */long long int) (short)32766)), (9223372036854775807LL)))));
                                arr_21 [i_2] [i_3] [i_2] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 54972103U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14986))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4239995193U)) && (((/* implicit */_Bool) 4239995193U))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [(short)2] [i_3])) : (((/* implicit */int) arr_6 [i_2]))))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_6 [8U])), ((~(((/* implicit */int) (unsigned char)199))))))) : ((((~(arr_8 [i_6]))) % (((/* implicit */long long int) ((/* implicit */int) (short)27803)))))));
                                var_20 *= ((/* implicit */short) (signed char)-29);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) var_8);
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2] [i_2] [i_8]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (signed char)98)) <= (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) min((54972081U), (((/* implicit */unsigned int) (signed char)101))))))));
                                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_19 [i_2]))));
                                arr_31 [i_2] [i_8] [i_9] = ((unsigned short) min((((/* implicit */unsigned char) (signed char)-71)), ((unsigned char)202)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((7) >> (((arr_3 [i_11]) - (3384810488U)))));
        var_26 = ((/* implicit */signed char) ((unsigned char) arr_0 [i_11]));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((54972103U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_4)))) : (1433082348U)))) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) var_12))));
}
