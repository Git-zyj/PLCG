/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100317
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_10))));
    var_19 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (var_15))));
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 = (+(var_16));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) (_Bool)1);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    var_22 &= ((/* implicit */_Bool) 3364203115U);
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        var_23 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (2790034788U)));
                        arr_10 [i_0] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) ((unsigned short) ((((/* implicit */int) (signed char)-46)) * (((/* implicit */int) (unsigned char)16))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((signed char) ((short) arr_8 [i_0] [i_2 - 2] [i_3] [i_3 - 3]))))));
                            var_25 |= ((/* implicit */_Bool) arr_12 [i_2 - 2] [i_3 + 1]);
                        }
                    }
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_1] [i_2] [i_5] = (((+(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_5] [i_2]))))))) * (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0]))));
                        arr_16 [i_5] [i_2 + 1] [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 528710681U)) ^ (5369043186092903677ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32676)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27359))))))));
                        arr_17 [i_0] [i_1] [i_2] [i_2 + 1] [i_5] [2U] = ((/* implicit */int) (+(min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12))) > (782632230U)))), (arr_8 [i_2 - 1] [i_1] [i_2 - 1] [i_5 - 3])))));
                        arr_18 [i_5] [i_1] [i_2] [i_5] &= ((/* implicit */signed char) ((long long int) ((arr_14 [i_2 - 1] [i_5 - 2] [(_Bool)1] [i_2 - 1]) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_14 [i_2 - 2] [i_2] [i_2] [i_2])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_5] [i_1] = ((arr_19 [i_0] [i_0]) == (((/* implicit */int) arr_21 [(unsigned short)18] [i_0] [i_0] [i_0] [i_0] [(short)6] [i_0])));
                            arr_23 [i_0] = ((/* implicit */_Bool) 5369043186092903676ULL);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((~(((/* implicit */int) arr_1 [i_2])))) <= (((/* implicit */int) arr_20 [i_2])))))));
                        }
                    }
                    var_27 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) 154728767)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2]))) : (arr_6 [i_2] [i_0] [i_0] [i_0]))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) / (arr_6 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_2] [i_2 + 1])))))));
                }
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_5 [i_0] [i_0] [i_1] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32679)))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_7])) ? (((/* implicit */int) arr_0 [i_1] [i_7])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))))))) && (((/* implicit */_Bool) ((int) var_7)))));
                    var_29 = arr_0 [i_0] [i_1];
                }
                for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) ((5369043186092903662ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                                arr_33 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((int) arr_8 [i_10] [i_10 - 2] [(unsigned short)14] [i_10])));
                            }
                        } 
                    } 
                    var_31 |= ((/* implicit */int) ((_Bool) ((((_Bool) (short)-6392)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6392))) : (((((/* implicit */_Bool) 5369043186092903669ULL)) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) -669918688)))))));
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5369043186092903662ULL)) && (((/* implicit */_Bool) arr_1 [12ULL])))) ? (max((((/* implicit */unsigned long long int) arr_3 [(unsigned short)9] [i_1] [(unsigned short)9])), (arr_7 [20] [i_8]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_0]))))))));
                }
            }
        } 
    } 
}
