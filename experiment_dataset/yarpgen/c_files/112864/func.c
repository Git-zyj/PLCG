/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112864
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)102));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)102))))), (max((((/* implicit */long long int) (signed char)-8)), (4LL)))));
                                arr_13 [i_0] [i_4] [(unsigned char)16] [i_3] [i_0] = ((/* implicit */int) ((((arr_5 [i_0] [7ULL] [i_0]) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) : (arr_5 [14] [i_3] [i_2]))))) ? (((var_4) / (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))));
                                arr_14 [i_0] [(unsigned char)8] [i_2] [i_3] [(_Bool)1] [9U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1364102802U)) ? (2930864492U) : (2930864480U))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_12)))) && ((!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_2 [2U])) - (((/* implicit */int) (signed char)-75)))) == (((/* implicit */int) arr_11 [4LL] [4] [(unsigned char)2] [(unsigned short)13] [i_0]))))) : (((((/* implicit */_Bool) 1364102802U)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)-4236))))))));
                        var_19 ^= ((/* implicit */unsigned int) var_14);
                        arr_18 [i_5] [(unsigned char)17] [i_0] [(_Bool)1] [(unsigned char)7] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_5 [i_1 + 1] [i_5] [(unsigned char)13]))))));
                    }
                    for (short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((max((var_3), (((/* implicit */unsigned long long int) var_10)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) < (17850083523113771132ULL))) ? (((int) (unsigned char)45)) : (((/* implicit */int) (unsigned char)62))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))) : (((((/* implicit */_Bool) (+(4195298460U)))) ? (max((var_3), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
                    }
                }
                for (unsigned char i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_0] = ((/* implicit */_Bool) (short)25907);
                        arr_28 [(unsigned short)1] [i_1] [i_0] [3ULL] = ((/* implicit */unsigned short) arr_25 [i_0] [5LL] [(short)16] [i_8]);
                        arr_29 [i_0] [i_0] [i_1] [(unsigned char)8] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_23 [i_0 - 2] [(signed char)10] [i_0])) : (arr_20 [i_0 - 2] [i_0])))) ? (((var_9) / (arr_20 [i_0 - 2] [i_0]))) : (((/* implicit */int) var_0))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        var_22 = (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [8])));
                        var_23 = ((/* implicit */unsigned int) ((unsigned long long int) 0U));
                    }
                    arr_32 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4236)) ? (var_3) : (((/* implicit */unsigned long long int) var_10))))))) ? ((+((-(1))))) : (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */int) (unsigned short)25646)) & (arr_0 [i_0])))))));
                }
                arr_33 [i_0] [i_0] = ((/* implicit */short) min((3749287234579323726LL), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-77)), (((unsigned char) var_16)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (2305843007066210304ULL)))))) ? (max((((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */int) (signed char)110))))), (var_8))) : (min((((var_16) - (((/* implicit */unsigned long long int) 2930864488U)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)26))))))))))));
}
