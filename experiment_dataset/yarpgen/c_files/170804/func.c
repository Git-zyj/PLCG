/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170804
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
    var_20 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? (4019456785542540841ULL) : (14427287288167010774ULL)))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 4019456785542540841ULL))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_1] [i_1])) >= (((/* implicit */int) arr_0 [i_1] [i_1])))) ? (((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) ((unsigned char) 14427287288167010806ULL)))));
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 3; i_3 < 21; i_3 += 3) 
            {
                var_24 += ((/* implicit */signed char) (-(((arr_5 [i_2] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15612)))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) (~(1632995360)));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_26 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_12 [i_5] [i_4] [i_3] [i_1]))))));
                        arr_13 [i_1] [6] [i_1] [i_1] |= ((/* implicit */signed char) 7ULL);
                    }
                    var_27 = (+(((/* implicit */int) (_Bool)1)));
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1153558695)) ? (((/* implicit */int) (unsigned short)35737)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_3 - 1] [(short)19]))))) ? (((((/* implicit */_Bool) 963741328)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_5 [i_6] [i_2]))) : (((/* implicit */long long int) (-(736913323))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        arr_18 [i_1] [i_2 - 3] [i_2 - 3] [i_3] [i_2 - 3] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) -1048129620)))));
                        arr_19 [i_1] [i_1] [i_3] [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_7] [i_3 - 2] [i_3 - 1] [i_3 - 3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_3 + 1] [i_3] [i_3 - 3] [i_3 - 2]))) : (0U)));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((-2716208281315895000LL) + (2716208281315895010LL))))) / (((/* implicit */int) arr_15 [i_2 - 3] [i_2 + 2])))))));
                    }
                    var_30 = ((/* implicit */unsigned short) arr_10 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]);
                }
            }
            for (int i_8 = 2; i_8 < 22; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    arr_28 [i_1] [i_2] [i_2 - 1] [i_8] [i_9 + 4] = ((/* implicit */_Bool) ((((arr_3 [(unsigned short)0]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_9 + 4])))) + (((/* implicit */int) max(((unsigned short)27186), (((/* implicit */unsigned short) (short)-16491)))))));
                    arr_29 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */short) (signed char)-104);
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) ^ (714699664595883483ULL)));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((-8327477687634395922LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)21]))))))) == (((0U) << (((((/* implicit */int) (short)-11803)) + (11809)))))));
                }
                for (unsigned char i_11 = 3; i_11 < 22; i_11 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_14 [i_1] [i_2 - 2] [i_2 - 2] [i_8] [i_8 + 1])) ? (1048129619) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_14 [i_1] [i_2 - 2] [i_8] [i_8] [i_8 + 1]))));
                        var_34 = (i_8 % 2 == zero) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 1153558695)) : (14427287288167010774ULL))) / (((((/* implicit */unsigned long long int) min((2697808454U), (((/* implicit */unsigned int) arr_25 [i_8] [i_2 + 1] [i_2] [(signed char)7]))))) & (((((/* implicit */_Bool) -8826736834314067269LL)) ? (4189922833965870469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766)))))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 1153558695)) : (14427287288167010774ULL))) * (((((/* implicit */unsigned long long int) min((2697808454U), (((/* implicit */unsigned int) arr_25 [i_8] [i_2 + 1] [i_2] [(signed char)7]))))) & (((((/* implicit */_Bool) -8826736834314067269LL)) ? (4189922833965870469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))))))))));
                    }
                    for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        var_35 = ((/* implicit */signed char) arr_12 [i_13] [i_11] [i_8] [i_2 - 2]);
                        var_36 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8] [i_11 - 2] [i_13])) ? (((/* implicit */int) (unsigned short)35737)) : (((/* implicit */int) arr_10 [i_8] [i_2 - 3] [i_8] [i_11] [(short)20]))))), (((((/* implicit */_Bool) 4611545280939032576ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (14031250041011868344ULL)))));
                    }
                    for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */signed char) 1153558695);
                        arr_41 [i_8] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 740306672)))) ? (((/* implicit */int) min((((/* implicit */short) arr_21 [i_2 - 2] [i_2 + 1] [i_8])), ((short)0)))) : (((/* implicit */int) ((arr_40 [i_8] [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11 - 1]) < (arr_40 [i_8] [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_11 - 2]))))));
                        var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_1] [i_8] [17] [i_11 - 1] [i_14]))));
                    }
                    var_39 = ((/* implicit */_Bool) ((((690281127) << (((((/* implicit */int) (unsigned short)21422)) - (21422))))) + (((arr_40 [i_8] [i_2 + 1] [i_8] [i_8 - 2] [14ULL]) / (-42020837)))));
                }
                var_40 = ((/* implicit */long long int) min((var_40), (30786325577728LL)));
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)6762)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)50))))) ? (max((((((/* implicit */_Bool) -8438820087822839935LL)) ? (((/* implicit */int) (unsigned short)29809)) : (((/* implicit */int) arr_3 [i_2])))), (((/* implicit */int) (signed char)-104)))) : (((arr_37 [i_1] [i_2 - 1] [i_8] [i_1] [(unsigned short)2] [i_2 + 2] [i_8 - 1]) ^ (((/* implicit */int) (_Bool)1))))));
            }
            var_42 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9223372036854775801LL)), (2426367239146765246ULL)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8826736834314067292LL)), (4611545280939032576ULL)))) ? (((/* implicit */int) arr_26 [i_1] [i_2 - 1] [i_2])) : (-1153558695))) : (((((/* implicit */_Bool) ((4503599626846208LL) % (((/* implicit */long long int) ((/* implicit */int) (short)1536)))))) ? (((/* implicit */int) max((((/* implicit */short) arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2])), ((short)(-32767 - 1))))) : (((((/* implicit */int) arr_4 [i_1] [3LL] [i_2 + 1])) + (-2059285015)))))));
        }
    }
}
