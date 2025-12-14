/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187408
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) 1421180356U)) ? (((/* implicit */int) (unsigned short)2484)) : (((/* implicit */int) (_Bool)1)))), (var_1)));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) min((-1499660990), (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) ((signed char) var_5))) ? (arr_7 [i_0 - 2] [(unsigned char)6] [i_4] [i_3 + 2]) : (((unsigned int) (signed char)-29))))));
                                var_17 = ((/* implicit */unsigned char) (short)535);
                            }
                        } 
                    } 
                } 
                arr_13 [(unsigned char)1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)32767)) ? (-622734227) : (((/* implicit */int) (short)10493)))) <= (((/* implicit */int) ((_Bool) (unsigned char)243))))) && ((_Bool)1)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 18; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 18; i_6 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [(short)9] [i_6 - 3])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_8)))), (((((((/* implicit */int) arr_15 [10U] [i_6])) + (2147483647))) << (((((((/* implicit */int) arr_15 [i_6 - 2] [i_5])) + (3993))) - (7)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 - 4] [i_6]))) : (1048575U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (signed char)-109))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6 - 2]))) : (min((5588567187769785266LL), (((/* implicit */long long int) var_14)))))))))));
                var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_16 [i_5])) ? (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) arr_18 [i_5 - 2] [i_5 + 1])) : (((/* implicit */int) (unsigned char)26)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))), (((/* implicit */int) ((short) arr_15 [i_6] [i_5 + 1])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
    {
        arr_22 [i_7] [10U] = ((/* implicit */short) min((max((max((var_0), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (arr_17 [i_7])))))), (((/* implicit */long long int) arr_21 [i_7] [i_7]))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((-(arr_16 [i_7]))) * (((((/* implicit */int) (short)-10493)) / (((((/* implicit */int) arr_14 [i_7])) * (((/* implicit */int) (unsigned char)255)))))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
    {
        arr_27 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)26)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (6999495055548659374ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)24475)))))));
        var_21 = ((/* implicit */short) ((long long int) ((unsigned short) arr_14 [i_8])));
        var_22 = ((/* implicit */unsigned char) var_15);
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_36 [i_11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)-58))))), (((((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_15 [i_8] [i_8]))))) ? (max((((/* implicit */unsigned long long int) arr_25 [i_9])), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_8] [i_9] [i_11])) ? (var_12) : (((/* implicit */int) arr_35 [i_11] [i_11] [i_10] [i_9] [i_8])))))))));
                        var_23 = ((/* implicit */unsigned char) arr_24 [i_9] [i_10]);
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)229)) > ((~(((/* implicit */int) (unsigned char)170)))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24476)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_30 [i_10] [i_9] [i_8])) : (((/* implicit */int) arr_30 [i_9] [i_10] [8U])))) : (((/* implicit */int) ((signed char) ((var_1) - (arr_17 [i_8])))))));
                    }
                    var_26 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_25 [i_8])) ? (arr_19 [i_9]) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_24 [i_9] [i_10])) < (((/* implicit */int) arr_26 [i_8]))))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (signed char)83)))) * (((/* implicit */int) ((unsigned char) var_14)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -9150725487882090251LL)) || (((/* implicit */_Bool) ((unsigned short) var_8)))))) : (min((((int) (signed char)127)), (2087511167)))));
}
