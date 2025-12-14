/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155501
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
    var_14 = ((/* implicit */signed char) max((var_3), (((/* implicit */long long int) var_7))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [(short)7] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2 + 2] [10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [11ULL] [i_2 - 3] [0U]))) : (arr_5 [(_Bool)1] [i_2 - 1] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            arr_14 [i_0] = ((/* implicit */signed char) (short)6601);
                            arr_15 [(unsigned short)2] [(unsigned char)0] [i_0] [i_0] [(unsigned short)8] [(signed char)3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [10ULL] [(unsigned char)10]))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) arr_5 [16ULL] [(signed char)0] [i_0]);
                            var_16 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [(unsigned short)3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6601))) : (var_0)))), (((unsigned long long int) arr_5 [i_3 - 2] [10ULL] [i_0])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_6 [14U] [15LL] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_4 [1ULL])) ? (var_3) : (((/* implicit */long long int) arr_4 [(short)12])))) : (((/* implicit */long long int) 3800641616U)))));
                            arr_21 [(_Bool)1] [10ULL] [i_0] [11] [16ULL] [13U] = ((/* implicit */int) max(((short)6603), (((/* implicit */short) (unsigned char)233))));
                        }
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) (+(((int) ((arr_11 [6ULL] [12ULL] [(unsigned char)5] [1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 137438953471LL)) && ((!(((var_7) && (((/* implicit */_Bool) arr_4 [4LL]))))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)-6603))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9307865612541561391ULL)) ? (((/* implicit */int) (unsigned char)88)) : (1182925321)));
                            var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [5ULL] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32747))) : (var_5))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_18 [i_7]), (((/* implicit */unsigned short) (short)-6592))))))))) ? (5761421747269216315LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 12851416940557607794ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned char)3] [11U] [(signed char)2]))) : (max((arr_5 [(unsigned short)10] [(signed char)12] [i_7]), (arr_17 [(unsigned short)10] [i_3]))))))));
                        }
                        var_23 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_24 [i_0] [(_Bool)1] [12ULL] = ((/* implicit */int) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0 - 2])), (((long long int) (_Bool)1))))) ? ((~(5343592634139687309ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5545949932737470760ULL)) ? (((/* implicit */int) (short)6612)) : (((/* implicit */int) (short)-17203))))))))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6627)) && (((/* implicit */_Bool) 1440725227U)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_22 [(signed char)4] [i_1 + 1]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_11);
    var_28 = ((/* implicit */short) ((var_11) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (1440725227U)))) & (var_9))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
}
