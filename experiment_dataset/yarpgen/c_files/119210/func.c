/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119210
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
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48699)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)230)) && ((_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49806))) <= (488829419U)))) : ((+(-1509318194))))), (((/* implicit */int) (signed char)-112)))))));
                            var_12 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(4018475322452305138LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1950578892)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (unsigned short)49806))))) : (min((((/* implicit */long long int) (signed char)70)), ((-9223372036854775807LL - 1LL))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_5] [i_0] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)52))));
                            var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)-26882)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (488829419U)))));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned short)15726)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)49808);
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((((/* implicit */_Bool) min((-1460876179), (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) (unsigned char)241)))))))))));
                            arr_20 [i_0 + 1] [i_1 - 2] [i_2] [(unsigned char)8] [i_6] [i_0] [8LL] = ((min((((((/* implicit */long long int) ((/* implicit */int) (short)-1))) / (-5529856255753759722LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)70))))))) % (((((/* implicit */_Bool) (~(3806137877U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)1200)) ? (488829419U) : (488829406U)))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) : ((-9223372036854775807LL - 1LL)))))));
                        }
                        arr_21 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)65532);
                        arr_22 [i_0] [(unsigned char)11] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)39)) ? (488829419U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26547)))))) : ((+((-9223372036854775807LL - 1LL)))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        arr_26 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] = ((/* implicit */int) (-(182827199U)));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-108)) ? ((-(((/* implicit */int) (signed char)-39)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)250)))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (unsigned short)15730))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) / (3806137887U)));
                        arr_30 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */unsigned int) (((+(18446744073709551615ULL))) >> (((((/* implicit */_Bool) 1099511627775ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)12908))))));
                    }
                }
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */short) (((!((!(((/* implicit */_Bool) (signed char)50)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1026379749), (((/* implicit */int) (short)26547))))) ? (((((/* implicit */_Bool) 3806137877U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-39)) || (((/* implicit */_Bool) (signed char)-51))))))))) : (0ULL)));
        var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)12))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)49806)) : (((/* implicit */int) (unsigned char)86))))) / (max((3138772526U), (((/* implicit */unsigned int) (unsigned short)3819))))))));
        var_20 = ((/* implicit */unsigned long long int) max(((+(max((1156194770U), (((/* implicit */unsigned int) (unsigned short)15718)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)26))))) ? (max((1336959903), (((/* implicit */int) (unsigned short)3829)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 965680850)), (min((max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (signed char i_13 = 1; i_13 < 15; i_13 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (signed char)110);
                                arr_46 [i_9] [i_10] [i_10] [(signed char)4] [i_10] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)30)), ((unsigned char)0)))), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)72))))))), (((((/* implicit */_Bool) ((18446744073709551604ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517)))))) ? (((((/* implicit */_Bool) -8006421883639114891LL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) : (((18446744073709551600ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_47 [i_9] [i_9] = ((/* implicit */unsigned int) (-(max(((((_Bool)1) ? (18446744073709551604ULL) : (2419644254432091229ULL))), (11ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 1) 
    {
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2521920765U)) ? (((/* implicit */int) (unsigned short)29356)) : (-1790523745))))));
        arr_51 [i_14] [i_14] = ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551600ULL));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (1773046516U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12ULL))))) : ((+(((/* implicit */int) (signed char)-53))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) >= (min((12ULL), (((/* implicit */unsigned long long int) (signed char)-123)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) max(((signed char)-44), ((signed char)52)))), (((((/* implicit */_Bool) (signed char)-49)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31020)))))))));
    /* LoopNest 2 */
    for (unsigned short i_15 = 4; i_15 < 16; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            {
                arr_59 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -7316316114732431177LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)93))) : (-7316316114732431177LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2521920765U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) * (16ULL)))) ? (max((18446744073709551602ULL), (18446744073709551605ULL))) : (5ULL))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)34501)), (2521920765U)))), (11245666135286234922ULL)))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1038630976)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))) ? (-1LL) : (((9223372036854775807LL) >> (((((/* implicit */int) (signed char)114)) - (98))))))))))));
                var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((((/* implicit */_Bool) 8ULL)) ? (2454061856U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))) : (((((/* implicit */_Bool) (signed char)49)) ? (3276618204U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))))))))));
                var_28 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */unsigned long long int) 1018349091U)) : (28ULL)))));
            }
        } 
    } 
}
