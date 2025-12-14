/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187045
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (981025815)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_18))))), (((3758096384U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), ((~(var_11)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_12 [i_4] [i_3] [i_2] [i_2] [i_2] [i_0 - 3] [i_0] = ((/* implicit */short) ((int) 12582912U));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((short) ((unsigned int) var_2)));
                            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) var_11);
                            arr_15 [i_0] [(unsigned char)0] [i_2] [i_0] [i_4] = ((/* implicit */long long int) arr_10 [i_4] [i_3] [(short)4] [i_1] [i_0]);
                        }
                        arr_16 [i_0] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [(short)13] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_0 + 2] [i_0]))) * ((+(((/* implicit */int) var_9))))))), (((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((unsigned long long int) -1478538364)) - (18446744072231013252ULL)))))))) : (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_0 + 2] [i_0]))) * ((+(((/* implicit */int) var_9))))))), (((((((arr_1 [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((unsigned long long int) -1478538364)) - (18446744072231013252ULL))))))));
                        arr_20 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min((1478538364), (((/* implicit */int) (_Bool)0))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_26 [i_2] [i_6] [i_2] [i_1] [i_2] &= ((/* implicit */signed char) var_19);
                            arr_27 [i_0] [i_0] = ((unsigned int) arr_8 [i_7] [i_7] [i_6] [i_2] [i_1] [i_0]);
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0 - 3] [8] [i_0] [i_1] [i_2] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)224))));
                            arr_31 [i_0 + 2] [i_1] [(_Bool)1] [i_6] [i_2] = ((/* implicit */short) var_15);
                            arr_32 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (1028955417U)));
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_6] [i_1] [(unsigned char)0] = ((_Bool) ((unsigned char) (signed char)100));
                            arr_38 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 - 1])));
                        }
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) (_Bool)1));
                            arr_42 [i_0] = ((/* implicit */int) ((unsigned int) ((unsigned long long int) var_16)));
                            arr_43 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [(short)9] [i_0] [i_1] [i_0 + 2] [i_10]))));
                            arr_44 [i_6] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)32))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20672))))) : (((unsigned long long int) -4380680512656145853LL))));
                        }
                        arr_45 [14U] [i_1] [i_2] [i_2] = ((/* implicit */short) var_11);
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        arr_48 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -1036824183625465522LL))))) != (((/* implicit */int) var_1))));
                        arr_49 [i_11] [i_0] [i_0] [i_0] = arr_8 [i_0] [5U] [i_1] [i_2] [i_2] [5U];
                        arr_50 [i_0 + 2] [(short)4] [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)223)))) ? (((int) arr_46 [i_0] [i_11])) : (((/* implicit */int) arr_25 [i_2] [i_0 - 2] [i_0 - 2] [i_11] [i_11] [i_11]))));
                    }
                    arr_51 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_28 [(unsigned char)18] [i_2] [i_2] [i_1] [12])) ? (arr_28 [i_0 - 2] [i_2] [i_1] [i_2] [i_2]) : (arr_28 [i_0 - 1] [i_2] [i_0] [i_0 - 1] [i_0 - 2]))), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_0))))))));
                    arr_52 [i_2] [i_2] [i_0] &= ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
    } 
}
