/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143220
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
    var_18 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_19 &= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3158710819U));
        arr_4 [i_0 + 2] [(short)6] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_16)))))) ? (-1454343563268441578LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 2]))) : (var_15))))));
        var_21 = ((/* implicit */unsigned short) 2200912415U);
    }
    for (long long int i_2 = 3; i_2 < 12; i_2 += 3) 
    {
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (4980104130858313758LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) (+(arr_7 [i_2])))) - (((unsigned int) (unsigned char)3)))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-27278)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-11924)))))) : (min((((/* implicit */long long int) (unsigned char)34)), (arr_0 [i_3]))))))));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (unsigned short)19692))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) -8592138337289444857LL)) ? (((arr_13 [i_2]) - (arr_13 [i_2]))) : ((-(((arr_9 [i_3 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                        }
                    } 
                } 
            } 
            var_26 = var_3;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_26 [i_2] [i_8] = ((/* implicit */int) ((((unsigned int) 2329175788U)) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1066932291)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (593672991273156679LL))))))));
                        arr_27 [i_2] [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_11 [i_2]), (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [5LL])) & (((/* implicit */int) arr_5 [i_8])))))));
                        arr_28 [i_8] [i_8] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_3])), (15598218846834316374ULL))))));
                        arr_29 [11ULL] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((long long int) (((_Bool)1) ? (((/* implicit */int) (short)-6664)) : (((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [(short)10] [i_3 - 1] [i_2] [i_8])))));
                    }
                } 
            } 
        }
    }
    var_27 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((var_14), (((/* implicit */int) ((_Bool) (_Bool)1)))))), (((((((long long int) var_9)) + (9223372036854775807LL))) >> (((var_14) - (1553374473)))))));
}
