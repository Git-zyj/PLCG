/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17705
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (var_1)));
                var_13 = ((((/* implicit */int) ((_Bool) (~(3194316397U))))) >> (((max((1100650899U), (((/* implicit */unsigned int) arr_0 [i_1])))) - (1100650893U))));
                var_14 = ((/* implicit */unsigned long long int) (unsigned short)3805);
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    var_15 = ((/* implicit */int) 1100650879U);
                    arr_10 [9LL] [i_2] [9LL] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) 74982273978565317LL))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)78)) <= (var_9))))) * (((var_12) + (3194316380U)))))));
                }
                for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_2))));
                    var_17 = ((/* implicit */int) min((var_17), (arr_12 [i_3 + 3])));
                    var_18 = ((/* implicit */int) var_8);
                }
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_10);
                                var_20 |= ((/* implicit */long long int) (_Bool)1);
                                arr_21 [i_6] [i_6] = 9223372036854775807LL;
                            }
                        } 
                    } 
                    arr_22 [i_1] [6] = max((max((((/* implicit */long long int) (!((_Bool)1)))), (((arr_4 [i_4]) / (var_10))))), (-8138444744172011575LL));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((arr_16 [i_7] [i_7] [9LL] [i_7]) == (((/* implicit */long long int) var_12)))), (((var_1) > (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [(unsigned char)0] [i_7] [i_7] [i_7] [i_7] [i_7]))))))))) >= (var_3))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_22 = ((((/* implicit */unsigned int) arr_1 [i_7])) & (((3194316380U) | (((/* implicit */unsigned int) 134217727)))));
            var_23 |= ((/* implicit */int) ((var_5) != (((long long int) arr_15 [i_7]))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) var_3);
                            var_25 = ((/* implicit */unsigned int) ((arr_35 [i_11] [i_11 - 1] [i_11] [i_11] [9LL]) | (arr_35 [i_11] [i_11 - 1] [i_11] [i_11] [i_11])));
                            arr_36 [(_Bool)0] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_35 [i_7] [i_8] [(_Bool)1] [(_Bool)1] [i_11]) | (((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [i_7] [i_8] [i_7] [i_7] [i_7]))))));
                            var_26 = ((/* implicit */short) arr_15 [i_7]);
                            arr_37 [i_7] [i_8] [i_9] [i_10] [i_10 + 1] [i_11 - 1] = ((/* implicit */signed char) arr_29 [i_11] [i_10] [i_9] [i_8]);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */_Bool) (+((-(35184372088824LL)))));
        }
        for (long long int i_12 = 2; i_12 < 10; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_28 += ((/* implicit */unsigned int) var_10);
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3805)))))));
            }
            var_30 = ((/* implicit */int) 2876252134128509299LL);
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_41 [i_7] [i_7])), (var_7)))), (max((((/* implicit */unsigned long long int) (unsigned char)40)), (10261254881682366013ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (3194316380U)))))))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((134217727), (((/* implicit */int) arr_2 [i_7] [(unsigned short)10]))))))) && (((/* implicit */_Bool) ((long long int) arr_2 [i_7] [2])))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    for (int i_17 = 4; i_17 < 9; i_17 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) min((18446744073709551609ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            arr_53 [i_17] [(_Bool)1] [i_16] [i_14] [i_14] [i_14] [i_17] &= var_8;
                            arr_54 [i_7] [(_Bool)1] [10LL] [i_17] [i_7] |= ((/* implicit */_Bool) arr_33 [i_14]);
                            arr_55 [i_15] [i_14] [i_14] [i_14] [8] = ((/* implicit */_Bool) 1796838528);
                        }
                    } 
                } 
            } 
        }
        arr_56 [i_7] [i_7] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) min((arr_13 [i_7]), (((/* implicit */unsigned int) 1067588699))))), (min((((/* implicit */unsigned long long int) arr_11 [i_7] [(_Bool)1] [i_7] [4ULL])), (18446744073709551609ULL))))), (((/* implicit */unsigned long long int) var_0))));
        arr_57 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((-2020904195) + (((/* implicit */int) (signed char)-44))))) ? (((((/* implicit */_Bool) arr_51 [i_7] [i_7] [11LL] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_7] [i_7] [2] [i_7] [i_7] [i_7]))) : (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_52 [i_7] [i_7] [i_7] [6] [i_7])))))));
        arr_58 [4LL] = ((/* implicit */int) arr_25 [i_7]);
    }
}
