/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121816
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) * (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [15U] [(_Bool)0]))) : (var_18))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [(_Bool)1] [i_2] [(_Bool)1] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4))))))))))));
                        arr_9 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_3 [i_0] [i_0]) || (arr_3 [i_0] [i_0])))), (((arr_0 [i_1 - 1] [i_1 - 2]) ? (var_14) : (max((var_1), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 2])) < (((/* implicit */int) arr_3 [i_0] [i_1 + 1])))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1]) : (arr_7 [i_0] [i_0] [i_1] [i_1 + 2] [(signed char)16] [i_1 + 2])));
                    }
                    var_23 -= ((/* implicit */signed char) (-((+(var_14)))));
                    var_24 -= ((/* implicit */signed char) (~(max((var_7), (((((/* implicit */long long int) ((/* implicit */int) var_16))) / (var_7)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-27)) < (((/* implicit */int) var_16))))) & ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)5249)) : (((/* implicit */int) (short)24014))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((var_14), (((/* implicit */long long int) var_11)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
    var_27 &= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_12)))), (max((((/* implicit */long long int) var_3)), (var_18)))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((unsigned short) (((~(((/* implicit */int) var_5)))) ^ (((/* implicit */int) var_11)))));
            arr_17 [i_5] [i_5 + 1] [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_14 [7LL] [i_6]))) / (var_18)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_10)), (var_11)))), (arr_5 [(signed char)5] [(short)1] [i_6])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_6] [i_5])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_7 [i_5 + 1] [i_5 - 1] [i_5] [(unsigned short)9] [i_6 - 1] [i_6])))))));
            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) var_16)), (var_11)))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_30 = ((((((/* implicit */int) arr_5 [i_5 - 1] [i_7 - 1] [i_8])) > (((/* implicit */int) arr_4 [i_5] [i_7 - 1])))) || ((((!(((/* implicit */_Bool) 18356426465520973023ULL)))) || (((/* implicit */_Bool) ((unsigned short) arr_11 [9U] [(signed char)11] [i_8] [i_8] [i_8]))))));
                var_31 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)27))))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_7 - 1] [i_8])) ^ ((-(((/* implicit */int) max(((unsigned short)54938), ((unsigned short)60286))))))));
            }
            for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_5 - 2] [i_7 - 1])) : (((/* implicit */int) arr_3 [i_5 - 2] [i_7 - 1]))));
                    var_34 = ((/* implicit */unsigned int) (-(var_4)));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 2; i_11 < 18; i_11 += 3) 
                    {
                        arr_28 [i_5] [i_7 - 1] [(unsigned char)11] [(unsigned short)3] [i_11] [i_11 - 2] [i_11 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_5 + 1] [i_11 - 1] [i_11] [i_11]))));
                        arr_29 [i_5] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) arr_22 [i_5 + 1] [i_7 - 1]);
                        arr_30 [i_11] [i_10] [i_9] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_0)))));
                    }
                    var_35 = ((/* implicit */unsigned int) (!(arr_19 [i_5 - 2] [i_7 - 1] [i_7 - 1])));
                    arr_31 [i_5] [i_7 - 1] [i_9] [i_10] = ((/* implicit */unsigned short) arr_3 [i_5 - 1] [i_7 - 1]);
                }
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_36 = ((/* implicit */_Bool) max((((/* implicit */short) (((~(((/* implicit */int) var_15)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5])))))))), (((short) ((_Bool) var_14)))));
                    var_37 = (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9] [i_5 + 1]))) / (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))))));
                    var_38 |= ((/* implicit */signed char) min((min((((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_12] [i_7 - 1])))))));
                }
                var_39 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 90317608188578592ULL)) ? (((/* implicit */int) (unsigned short)5250)) : (((/* implicit */int) (unsigned char)141)))) >> (((4294967295U) - (4294967266U)))))), (min((((var_10) ? (var_7) : (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5] [i_7])) < (((/* implicit */int) arr_8 [(signed char)17] [i_7 - 1] [i_9] [i_5] [(_Bool)1] [(_Bool)1])))))))));
                var_40 = ((/* implicit */unsigned int) ((long long int) (signed char)127));
            }
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_24 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_5] [i_7 - 1] [i_13] [i_13]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5])))))))));
                arr_39 [i_13] = ((/* implicit */unsigned short) var_14);
                arr_40 [i_5 - 1] [i_13] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 - 2] [i_5 - 1] [i_7 - 1] [i_13]))) & (var_3)));
            }
            var_42 = ((/* implicit */_Bool) arr_32 [i_5 + 1]);
            var_43 = ((/* implicit */signed char) var_4);
        }
        var_44 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2509077778U)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_15)))) : (((((/* implicit */int) arr_13 [i_5])) - (((/* implicit */int) var_10))))))), (min((((/* implicit */long long int) min((((/* implicit */signed char) var_16)), (var_0)))), ((+(var_14)))))));
        var_45 = ((/* implicit */unsigned int) var_8);
        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_4)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (var_14)))) : (((/* implicit */int) (unsigned short)5249))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_6 [i_5 + 1] [i_5 - 1] [(signed char)0] [(signed char)0]))));
        var_47 = ((/* implicit */unsigned short) ((arr_15 [i_5]) > (((/* implicit */long long int) max((arr_22 [i_5 - 2] [i_5]), (max((((/* implicit */unsigned int) var_19)), (var_12))))))));
    }
}
