/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181152
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                arr_7 [7U] [i_0] [i_0 + 1] = ((/* implicit */short) ((max((((2147483648U) >> (((/* implicit */int) (_Bool)1)))), (3365954392U))) + (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (3365954397U) : (((/* implicit */unsigned int) ((/* implicit */int) ((929012899U) < (3365954420U)))))))));
                var_15 = ((/* implicit */signed char) (_Bool)1);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39556))))) ? (((/* implicit */int) max(((_Bool)1), (arr_3 [i_1 + 1] [i_2 + 2])))) : (((/* implicit */int) max(((_Bool)1), (arr_3 [i_1 - 1] [i_2 + 1]))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((3365954397U) ^ (arr_2 [i_3] [i_1 - 1] [i_3])))), (max((((/* implicit */long long int) (unsigned short)25980)), (54043195528445952LL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_6 = 3; i_6 < 11; i_6 += 2) 
                            {
                                arr_22 [i_0] [i_1] [i_6] = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3365954393U))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))));
                                arr_23 [i_4] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [7U]))) & (2138857739U)))) ? (arr_13 [i_0] [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-120))))))) >> ((((-(((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) + (19352)))));
                                arr_24 [i_0 - 1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_6 - 3] [i_1 + 1])) - (((/* implicit */int) arr_17 [i_0 + 2] [i_6]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [(signed char)3])) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_6 - 2]))) : (-3538565346466823650LL)))));
                                var_18 = ((/* implicit */signed char) 3365954397U);
                                arr_25 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((1254003573U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                            for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_14 [(signed char)6] [i_1 + 1] [(short)8])) : (((/* implicit */int) arr_14 [i_5] [i_1 - 1] [i_0 - 1]))))))))));
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_4 + 2] [i_5] [i_0] [i_5] [i_7]))))), (max(((((_Bool)1) ? (arr_20 [i_0] [i_0]) : (arr_13 [i_5] [(unsigned char)2]))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [(signed char)9] [i_0] [i_5] [i_7])) : (((/* implicit */int) arr_19 [i_5] [(_Bool)0] [i_0] [i_5] [i_5])))))))));
                                arr_28 [i_7] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_4] [i_0] [i_7]);
                                arr_29 [i_0] [i_0] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) ((short) (~(arr_26 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_4] [i_4 + 1] [i_7]))));
                            }
                            /* vectorizable */
                            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                            {
                                arr_32 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 15908776191165062780ULL)) ? (95115000U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12301)))));
                                arr_33 [i_0 + 2] [i_0] [i_5] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4 + 2])) && (((/* implicit */_Bool) (short)118))));
                            }
                            for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                            {
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_4] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39547)))), (((/* implicit */int) arr_5 [(short)0] [i_1 + 1]))))) ? (((arr_35 [i_9] [i_9] [i_4 - 2] [i_0 - 1] [i_1 + 1]) & (929012880U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30439)))));
                                var_22 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (short)-10076)), (arr_31 [i_0 + 2] [i_1] [i_4] [(_Bool)1] [i_9] [i_0] [i_4 + 1])))));
                            }
                            arr_38 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3495770524U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32768)) / (((/* implicit */int) (short)-30447))))) : (max((arr_31 [i_0] [i_1 + 1] [i_1] [2] [(short)10] [i_0] [i_5]), (((/* implicit */unsigned int) arr_34 [i_0 + 1] [(unsigned char)4] [6U] [i_5] [i_4] [i_4] [i_4]))))))) ? (((long long int) arr_0 [i_0 + 2])) : (((/* implicit */long long int) ((/* implicit */int) (short)23908)))));
                            arr_39 [i_0 + 1] [1U] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)30459)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (536870912U) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)25957)) : (((/* implicit */int) var_6)))) << (((((/* implicit */int) var_6)) - (29399))))))));
    var_24 |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (short)16631)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
    var_25 *= ((/* implicit */signed char) (unsigned short)39544);
}
