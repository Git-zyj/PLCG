/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167577
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)15977)) ? (626143931708066854ULL) : (((/* implicit */unsigned long long int) var_9)))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) > (var_3))))));
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1 + 1]))) > (arr_1 [i_0] [i_1 - 1])))) <= (((/* implicit */int) ((_Bool) var_10)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 4; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) arr_2 [17LL] [i_1]);
                    var_22 += ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [16U] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_2] [(unsigned char)13])));
                }
                for (long long int i_3 = 4; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 7662904469889796124ULL)))) <= (max((var_14), (((/* implicit */unsigned long long int) (unsigned short)15977)))))))) != ((~(min((1073741824U), (3249074819U))))));
                    var_24 = ((/* implicit */short) ((unsigned int) ((unsigned short) arr_6 [(_Bool)1] [i_1 + 2] [i_1] [i_3 + 1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_25 = 1950148076;
                                var_26 = ((long long int) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_4 + 2] [i_4])), (var_14)));
                                var_27 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((arr_5 [i_1] [21ULL] [i_3] [(unsigned short)6]) & (arr_8 [i_5] [4] [i_3] [0U] [4] [i_0])))) ? (((unsigned long long int) (unsigned short)25827)) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)49554)), (var_12)))))));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 4; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_18 [(unsigned short)0] [i_1] [12U] [i_1] [(unsigned short)0] [i_6] = ((/* implicit */long long int) (~(((arr_12 [i_6 + 1] [i_6 - 2] [i_1 + 2] [i_1 + 2]) - (arr_12 [i_6 - 4] [i_6 - 4] [i_1 + 1] [i_1 + 2])))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_12))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1] [i_7] [(unsigned char)22] [i_6] [23ULL] [23ULL] [6ULL]))))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_17)))) ? (((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0])) % (arr_17 [5ULL]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_7]))) | (arr_3 [i_1] [i_1] [i_1]))))))));
                        var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((var_15) ? (((((/* implicit */unsigned long long int) arr_9 [15U] [i_1] [15U] [i_7] [i_7])) - (arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (((((/* implicit */_Bool) var_1)) ? (1563332369762858896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))))));
                    }
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((7772439286902261831LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15981)))));
                        arr_21 [i_1] [11LL] [(unsigned char)22] [i_1] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [(short)21] [(short)21]))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) - (35184372088800LL)))) ? ((+(-5522827496865989750LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3249074819U)) ? (arr_14 [20] [20] [2LL] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_9]))))))))) ? (8447090919344451505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9])))))))))));
                        var_31 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_1 [i_0] [i_0]))) << (((max((((/* implicit */unsigned long long int) arr_2 [12LL] [i_1])), (arr_12 [i_0] [i_0] [i_0] [i_0]))) - (13079952741281976111ULL))))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)255)))))));
                    }
                    var_32 -= ((/* implicit */short) (+(max((arr_8 [i_1] [i_1] [i_1 + 2] [i_0] [19LL] [i_6 - 1]), (arr_15 [i_0] [i_1 + 2] [i_1 + 2] [i_0])))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        var_33 = (-9223372036854775807LL - 1LL);
        arr_29 [i_10] [i_10] = min(((-(arr_13 [i_10] [20] [i_10]))), ((~(var_2))));
        var_34 = ((/* implicit */_Bool) max((var_34), (((((/* implicit */unsigned long long int) (((+(var_6))) / ((+(var_5)))))) < ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -3948639442912962025LL))))))));
    }
    for (long long int i_11 = 1; i_11 < 17; i_11 += 2) 
    {
        arr_33 [i_11] [i_11] = ((/* implicit */short) ((long long int) 8447090919344451505ULL));
        var_35 = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) var_13)) > (-1))) ? (((/* implicit */long long int) ((/* implicit */int) ((3584U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11]))))))) : ((~(arr_20 [(unsigned short)4] [(_Bool)1] [(_Bool)1] [i_11]))))));
    }
}
