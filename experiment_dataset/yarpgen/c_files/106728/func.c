/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106728
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_12 = min(((~(((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2 + 1] [i_3 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_3 + 1])) && (((/* implicit */_Bool) 983040))))));
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) 0ULL))), ((((((_Bool)1) ? (6ULL) : (((/* implicit */unsigned long long int) 1515644939U)))) ^ (((/* implicit */unsigned long long int) ((2779322336U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_14 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1])) ? ((-(2779322357U))) : (((/* implicit */unsigned int) (+(1154788681)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_4] [i_0] [i_1] = ((/* implicit */_Bool) var_2);
                                var_16 *= arr_6 [i_5 - 1];
                                var_17 = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_4] [i_5] [i_6]);
                                var_18 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)13022)), ((+(2779322357U)))))) ? (((/* implicit */int) arr_14 [i_0] [i_4] [i_5] [i_6])) : (((/* implicit */int) (_Bool)0)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (unsigned char)112);
                                var_20 += ((/* implicit */short) (-((~(((((/* implicit */_Bool) arr_36 [i_7] [i_8] [i_7] [i_10])) ? (((/* implicit */long long int) 2779322357U)) : (arr_38 [i_7] [i_7] [i_7] [i_7])))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_29 [i_7] [i_7] [i_7]))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)1792)), (arr_37 [i_11] [i_11] [i_11 - 1] [i_11] [i_11])))) != (5534414350053455112ULL)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) 2779322336U))));
                    arr_39 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7] [i_8] [i_7])) ? (((/* implicit */int) arr_36 [i_7] [i_8] [i_9] [i_9])) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)20987)))))) > (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_38 [i_9] [i_8] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */int) ((arr_25 [i_7]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9]))))))));
                }
                for (long long int i_12 = 3; i_12 < 15; i_12 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) (+(((arr_28 [i_7] [i_12 - 1] [i_12 - 3]) + (arr_28 [i_8] [i_12] [i_12 - 3])))));
                    arr_43 [i_12] [i_8] = (+((+(((/* implicit */int) (unsigned char)6)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 1; i_13 < 16; i_13 += 4) 
                    {
                        var_25 -= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_30 [i_7])) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (unsigned short)44521)))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551593ULL)) && (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_26 [i_8] [i_7]))))));
                    }
                    arr_47 [i_12] = ((((/* implicit */long long int) ((/* implicit */int) (short)-22304))) & (((((/* implicit */_Bool) ((unsigned long long int) arr_40 [i_7] [i_12]))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) > (arr_29 [i_12] [i_7] [i_7]))))))));
                    arr_48 [i_7] [i_12] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_7])) ? (((/* implicit */int) (unsigned short)21014)) : (((((/* implicit */int) (unsigned short)44522)) - (((/* implicit */int) arr_45 [i_7] [i_12 - 2] [i_12] [i_12]))))));
                }
                for (unsigned char i_14 = 4; i_14 < 16; i_14 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_8] [i_8] [i_8] [i_8]))) < (arr_38 [i_7] [i_14] [i_14] [i_8]))))) / ((+(((/* implicit */int) (unsigned short)45854))))));
                    var_28 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_8] [(_Bool)1] [i_8] [i_8] [i_8])) % (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) arr_45 [i_7] [i_8] [i_7] [i_7])), ((unsigned short)20989)))))))));
                    arr_51 [i_7] [i_8] [i_8] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((unsigned char) (unsigned char)3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_45 [i_14] [i_14] [i_8] [i_7]))) ? (((/* implicit */int) (unsigned char)18)) : (((((/* implicit */_Bool) (short)4529)) ? (((/* implicit */int) (unsigned short)63765)) : (((/* implicit */int) (short)-22304))))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (0) : (((/* implicit */int) arr_31 [i_7] [i_8]))))) : ((~(7170872563660386898LL)))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) (unsigned short)46512);
                                var_30 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_36 [i_8] [i_15] [i_16] [i_17 + 2]))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (unsigned char)3))));
                    arr_61 [i_7] [i_8] [i_7] &= ((unsigned char) (-(((arr_55 [i_8] [14U]) ? (((/* implicit */int) arr_30 [i_7])) : (((/* implicit */int) arr_44 [i_7] [i_8] [i_7] [i_7]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_18 = 1; i_18 < 15; i_18 += 3) 
                    {
                        var_32 = (i_15 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_58 [i_18] [i_15] [i_15] [i_15] [i_15] [i_15] [i_7])) - (207))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_15] [i_18 + 1] [i_18])))))))) : (((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) << (((((((/* implicit */int) arr_58 [i_18] [i_15] [i_15] [i_15] [i_15] [i_15] [i_7])) - (207))) + (205))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_15] [i_18 + 1] [i_18]))))))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_18 + 2] [i_18] [i_18 + 2] [i_18 + 2] [i_18 + 2])) && (((/* implicit */_Bool) arr_57 [i_7] [i_8] [i_8] [i_7] [i_7] [i_8]))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((unsigned long long int) (-(2934832335U)))))));
                    }
                    var_35 -= ((/* implicit */unsigned int) (_Bool)1);
                }
            }
        } 
    } 
}
