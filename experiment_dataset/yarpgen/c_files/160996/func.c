/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160996
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_19 = arr_5 [i_2] [i_1];
                    arr_8 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_1 + 3] [i_2 + 1]), (((/* implicit */long long int) ((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))) ? (((arr_7 [i_0 + 2] [i_1 - 1] [i_2 + 2]) / (((/* implicit */unsigned long long int) 6360471319835085992LL)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) % (arr_6 [i_0] [i_0]))))))));
                }
                for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    arr_11 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-4744931646966514848LL), (-4744931646966514828LL)))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)56)), (1229122626)))) : (min((-4744931646966514823LL), (((/* implicit */long long int) (short)-3897))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_1 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)28)) / (((/* implicit */int) (signed char)-64))))) : (min((((/* implicit */long long int) (short)-24461)), (709545773409136835LL)))))) : (max((min((18090604876303275036ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_1] [i_3]))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3878868211U)) ? (((/* implicit */unsigned long long int) arr_3 [i_3] [i_1] [i_0])) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3] [i_1] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3897)) ? (-1619127047) : (((/* implicit */int) (short)24461))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_3])), (arr_7 [i_0] [i_1] [i_3])))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4193792)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)185))))) ? (((/* implicit */unsigned int) (+(arr_1 [i_0 - 1])))) : (max((var_11), (((/* implicit */unsigned int) arr_5 [i_0] [i_1]))))))) - (min(((-(var_14))), (((/* implicit */long long int) var_11)))))))));
                    arr_12 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) max((1522164291U), (416099083U)));
                }
                for (short i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) arr_15 [i_1] [i_1] [i_4] [i_5]);
                                arr_23 [i_0 + 1] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (63ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15165))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)145))))) ^ (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_4] [i_5] [i_5] [i_6]))))))))));
                                var_23 *= ((/* implicit */unsigned long long int) arr_1 [i_6]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((arr_16 [i_0 - 1]) ? (((/* implicit */int) arr_16 [i_0 + 2])) : (((/* implicit */int) (short)3043))))) <= (((((/* implicit */_Bool) ((signed char) (signed char)-75))) ? (min((((/* implicit */long long int) var_17)), (arr_6 [i_1] [i_4 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (32704U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143)))))))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) | (((8165764621938802222ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), ((~(max((var_7), (((/* implicit */unsigned long long int) (unsigned char)102))))))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)190))))))) & (((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_1 + 3] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)30038))))) : (((((/* implicit */_Bool) arr_10 [i_8] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 4744931646966514800LL)) : (var_2))))))))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_7 [i_0] [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_0]))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_7])) ? (((/* implicit */int) (short)11715)) : (((/* implicit */int) (unsigned char)231))))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_7] [i_8])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))))) : (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_7] [i_8]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_7] [i_8 + 1])) ? (((/* implicit */int) arr_10 [i_1] [i_7] [i_8])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))))))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 21; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_30 [i_1] [i_7] [i_9 - 1]);
                        arr_33 [14] |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1 + 1] [8])) - (((/* implicit */int) arr_9 [i_0] [i_1 + 3] [(_Bool)1]))))) ? (((((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1 - 2] [i_7] [i_7] [i_9])) ? (((/* implicit */long long int) arr_31 [i_0] [i_1] [i_7] [i_9])) : (arr_3 [i_0] [i_1] [i_9]))) & (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_7] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9]))) : (-8786641306925043840LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)8)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [i_0] [i_1] [i_7] [i_10] [i_10] |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)137)) == (((/* implicit */int) arr_30 [i_7] [i_1] [i_0])))));
                        arr_38 [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10] [i_7] [i_1] [i_0]))) - (4170741793U)))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_7] [i_1 - 2] [i_0 - 1] [i_0 - 1] [i_0] [i_0])) * (((/* implicit */int) arr_32 [i_7] [i_1 + 1] [i_1] [i_0 - 1] [i_0 - 2] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 1; i_11 < 22; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_7 [i_7] [i_0] [i_7]))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (unsigned char)5))));
                            var_32 = ((((/* implicit */_Bool) ((3458764513820540928LL) & (36028797018963967LL)))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_10] [i_11]))));
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) <= (var_3)))) == (((/* implicit */int) arr_25 [i_0 - 2] [i_11 - 1] [i_11])))))));
                        }
                        var_34 = ((/* implicit */signed char) 2029484011);
                    }
                    var_35 = ((/* implicit */unsigned int) ((1306093500983053464ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73)))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            {
                                arr_45 [i_0 + 2] [i_1] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_7] [i_13])) ? (((/* implicit */unsigned long long int) ((arr_6 [i_12] [i_0 - 1]) + (arr_6 [i_7] [i_13])))) : (min((((/* implicit */unsigned long long int) arr_14 [i_0 + 1] [i_12])), (var_7)))));
                                var_36 = max((((/* implicit */long long int) min((arr_15 [i_0 - 2] [i_0] [i_1 + 1] [i_12]), (((/* implicit */unsigned int) ((var_10) - (arr_5 [i_1] [i_13]))))))), (((((((/* implicit */_Bool) arr_36 [i_13] [i_7] [i_1])) && (((/* implicit */_Bool) (short)-23155)))) ? (max((var_4), (((/* implicit */long long int) arr_31 [i_0] [i_1] [i_12] [i_13])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_12] [i_13]))) <= (var_2))))))));
                                var_37 = ((/* implicit */unsigned int) arr_44 [i_0] [i_1] [i_7] [i_12] [i_13]);
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_22 [i_7] [i_7] [i_7] [i_1] [i_1] [i_0] [i_0]) ? ((+(((/* implicit */int) (unsigned char)79)))) : (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) var_17)))))))) ? ((-(307036132))) : (((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1 + 1] [(short)10])) ? ((-(((/* implicit */int) (signed char)-1)))) : ((-(((/* implicit */int) arr_25 [i_0] [i_1] [i_7])))))))))));
                }
                var_39 ^= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) min((var_10), (((/* implicit */int) arr_16 [i_0]))))), (min((var_4), (((/* implicit */long long int) (short)30038)))))), (((((/* implicit */_Bool) arr_9 [18U] [i_1] [18U])) ? (arr_24 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_1 - 1] [i_0 - 1])))))));
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    var_40 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned char)108), (((/* implicit */unsigned char) (_Bool)0))))), (4294967293U)))) : (((((/* implicit */_Bool) min(((short)14), (((/* implicit */short) (signed char)82))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (11904726699808136213ULL))));
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)147)), (2772803002U))))));
                }
                /* vectorizable */
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 21; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) (short)7300);
                                arr_56 [i_0] [i_1] [i_16] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0 - 2] [i_1 - 1] [i_16 + 2])) ? (((/* implicit */int) arr_41 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_1 - 2]))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)2033))) ? (arr_1 [i_1 + 3]) : (((/* implicit */int) arr_2 [i_0]))));
                }
            }
        } 
    } 
    var_44 &= ((/* implicit */long long int) var_0);
}
