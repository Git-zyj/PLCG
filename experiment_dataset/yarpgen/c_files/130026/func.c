/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130026
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47883)) ? (((/* implicit */unsigned long long int) var_2)) : (2251799813685247ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 3) /* same iter space */
    {
        var_11 = (~(-3035930814524248783LL));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            var_12 -= ((/* implicit */long long int) var_8);
            var_13 = ((/* implicit */signed char) min(((-(max((((/* implicit */long long int) var_9)), (arr_0 [i_1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) / (var_4)))))))));
        }
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_3 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
    }
    for (unsigned int i_2 = 2; i_2 < 7; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 3; i_3 < 7; i_3 += 3) 
        {
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned short) (short)-16866)), (arr_7 [i_2] [i_2]))))), (var_9))))));
            var_16 -= ((/* implicit */unsigned short) var_3);
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 54478547)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 3])) ? ((-(((/* implicit */int) arr_2 [i_4])))) : (-54478553)))))))));
            var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_7 [7U] [i_4])) > (((/* implicit */int) arr_7 [i_4] [(unsigned short)4]))))), ((~(((/* implicit */int) arr_8 [(signed char)3] [i_4] [i_4 - 1]))))));
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                var_19 = ((/* implicit */unsigned long long int) var_6);
                arr_17 [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_0);
                arr_18 [i_2] [i_2 - 1] [i_2 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_2 - 2] [i_5] [i_6] [(short)8]))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2 + 2])) || (((/* implicit */_Bool) arr_10 [i_2 + 1]))));
            }
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_15 [(signed char)0] [i_2 + 1] [i_2 + 1] [i_2 + 1]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 2] [i_5])) || (arr_13 [i_2] [i_2] [i_2]))))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_8 = 3; i_8 < 9; i_8 += 3) 
            {
                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [(_Bool)1] [i_2]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_2])), (18446744073709551597ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)7] [i_2] [8ULL] [i_8]))) : (var_9)))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_29 [i_10] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) 62914560))))));
                            var_23 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((arr_1 [i_2 + 2]) << (((((/* implicit */int) var_6)) - (44124)))))), (max((((((/* implicit */_Bool) arr_12 [i_9])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))), (arr_0 [i_2 + 2])))));
                            var_24 = ((/* implicit */unsigned long long int) arr_3 [i_2 + 3]);
                        }
                    } 
                } 
                var_25 = min((((/* implicit */long long int) max((arr_28 [i_2 + 1] [i_2] [i_2 + 2] [i_2] [i_2 + 1]), (((/* implicit */int) arr_7 [i_2 + 2] [i_8 - 2]))))), (((((/* implicit */_Bool) (signed char)73)) ? (-8292741084122075755LL) : (((/* implicit */long long int) 1401450324U)))));
            }
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) min((var_6), (arr_7 [i_2] [i_2])))) : (((/* implicit */int) ((arr_1 [1U]) >= (var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)39338)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) arr_16 [i_2]))))))))) : (((unsigned long long int) max(((short)-1), (((/* implicit */short) arr_13 [i_2] [0ULL] [i_7])))))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) 62914555))));
                    var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((unsigned char) (unsigned char)83)))))) ? ((+(var_7))) : (((/* implicit */unsigned int) (~(964149492))))));
                }
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_2])) < ((~(arr_9 [i_11] [i_2] [i_2]))))))));
                /* LoopSeq 2 */
                for (short i_13 = 1; i_13 < 9; i_13 += 3) 
                {
                    var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_31 [i_2] [5LL] [(signed char)3] [4U])), (var_8)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-17))) ^ (arr_27 [i_13] [i_13 - 1] [i_11] [i_7] [8U] [8U]))) : (min((arr_22 [i_2] [i_11] [i_2]), (((/* implicit */unsigned int) -256271167))))))) ? ((~(max((var_3), (((/* implicit */unsigned int) var_1)))))) : (((((/* implicit */_Bool) (unsigned short)26188)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_13 + 1] [i_2 + 1]))) : (arr_24 [i_2 - 1])))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) < (var_3)))) != (((/* implicit */int) arr_8 [i_13 - 1] [i_2 + 1] [i_11])))))) ^ (var_8)));
                    var_32 = arr_37 [i_2 - 1] [7ULL] [i_11] [i_13];
                    var_33 = ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) arr_23 [i_2] [(signed char)0] [i_2] [i_11]))));
                }
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) ((var_9) < (var_8)))))) : (((/* implicit */int) ((unsigned char) -54478555)))));
                    arr_40 [i_2] [i_7] [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)105), (((/* implicit */unsigned char) arr_37 [i_2] [1U] [i_11] [i_14]))))) + (max((((/* implicit */int) (short)-5)), (var_0)))))) && ((!(((/* implicit */_Bool) var_6)))));
                }
            }
        }
        var_35 = ((/* implicit */_Bool) (+(-3758902960637789451LL)));
    }
    var_36 = ((/* implicit */signed char) (unsigned char)6);
    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_8))));
}
