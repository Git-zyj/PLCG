/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115096
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)-91)) && (((/* implicit */_Bool) var_8)))) ? (arr_4 [(short)21] [1ULL] [i_2]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) / (arr_7 [i_0] [(unsigned short)13] [(_Bool)1] [10LL]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [(signed char)17] [i_2] [i_1] [17LL]))))));
                    arr_9 [i_0] [(signed char)20] [i_1] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) var_9)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */long long int) 3031797846U)), (-3022144705353264087LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_1] [(short)5])))))));
                            arr_16 [6LL] [i_1] [1] [9U] [i_4] [i_3] [21] = ((/* implicit */_Bool) (short)-27466);
                            var_20 += ((/* implicit */unsigned int) ((unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_8)) ? (-6000855726381986476LL) : (8774955280975726827LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_18))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned int) arr_0 [i_0])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_20 [11LL] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)12]))) : (-2068493107604611233LL)))) ? (min((var_11), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_17))))));
            arr_21 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_5] [(unsigned short)22] [i_0])) ? (arr_11 [(_Bool)1] [i_5] [i_0] [(signed char)22] [i_5]) : (arr_11 [i_0] [(short)10] [i_0] [12ULL] [10]))) : (max((((/* implicit */long long int) var_9)), (-9223372036854775803LL)))));
            var_23 -= ((/* implicit */unsigned short) min((((arr_7 [(unsigned short)22] [i_0] [i_5] [i_5]) / (((/* implicit */unsigned long long int) -6000855726381986471LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0])))))) & (((((/* implicit */_Bool) 2854948395U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_7))))))));
        }
        arr_22 [i_0] = ((/* implicit */int) (~(((unsigned long long int) (-9223372036854775807LL - 1LL)))));
    }
    var_24 &= ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (min((var_7), (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) (unsigned short)18929))));
    var_25 += var_3;
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 9; i_8 += 1) 
            {
                {
                    arr_32 [(short)9] [i_7] [i_8] = ((/* implicit */long long int) var_8);
                    arr_33 [i_8] [6ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6]))) : (0ULL))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_8] [i_8 - 2] [i_8 - 1])) ? (var_12) : (arr_17 [(_Bool)1] [i_8 - 2] [i_8 + 1])))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [(unsigned char)6] [i_7] [11ULL] [15])) : (((/* implicit */int) arr_23 [3LL] [i_8]))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (0U)))))));
                    var_26 = ((/* implicit */unsigned char) ((unsigned int) max(((+(((/* implicit */int) var_15)))), ((+(750507827))))));
                    arr_34 [i_6] [(unsigned short)3] [i_8] = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
}
