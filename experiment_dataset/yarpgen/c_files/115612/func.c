/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115612
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
    var_13 = var_0;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((var_6), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) arr_2 [i_0] [i_0]))))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((17369735240825109985ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (1077008832884441641ULL)))));
                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (~(17369735240825109985ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1077008832884441660ULL)))))) : ((((_Bool)1) ? (min((((/* implicit */long long int) arr_8 [i_1] [i_0])), (var_3))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2])) + (2147483647))) << (((((arr_5 [i_2] [i_1]) + (8061921456837841698LL))) - (21LL))))))))));
            }
            arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_3 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 - 1]))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_18 [5ULL] [i_3] [i_3] [i_3] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned short)7] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [5ULL]), (((/* implicit */unsigned short) var_1)))))) : (max((arr_5 [i_1] [i_0]), (((/* implicit */long long int) (unsigned char)141)))))) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_3]))));
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [(unsigned short)6] [i_0])), (arr_1 [i_1])))));
                        }
                    } 
                } 
            } 
        }
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_22 [i_6] [(unsigned short)1] [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6]);
            var_16 = ((/* implicit */long long int) ((unsigned short) ((_Bool) arr_0 [i_0])));
            arr_23 [i_6] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_0] [i_6] [(_Bool)1] [(_Bool)1]))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */signed char) -2240657949343599181LL);
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17369735240825109955ULL)) ? (17369735240825109974ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47817)))));
            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_7]) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(short)10] [i_7])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_11 [i_0] [i_7] [i_7]))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (short i_9 = 2; i_9 < 9; i_9 += 2) 
                {
                    {
                        arr_32 [i_7] [(_Bool)0] [(_Bool)0] [i_9] [(unsigned char)4] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) var_4)))));
                        var_19 = ((/* implicit */long long int) ((((_Bool) arr_2 [i_8] [i_7])) ? (((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_9 - 1]))) : (17369735240825109974ULL))) : (((/* implicit */unsigned long long int) arr_4 [i_9 + 1] [i_7]))));
                    }
                } 
            } 
        }
        for (short i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            arr_35 [0LL] [i_10] [i_10] = min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) (short)-32744)) ? (6047813222894286937ULL) : (((/* implicit */unsigned long long int) var_6)))))), (((((/* implicit */_Bool) arr_31 [i_0] [i_10] [i_0] [i_10] [i_0] [i_10])) ? (arr_31 [i_0] [i_10] [i_0] [i_10] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            arr_36 [i_0] = ((((/* implicit */_Bool) var_4)) ? ((((!(((/* implicit */_Bool) arr_20 [i_0] [i_10])))) ? (((3458764513820540928ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */int) var_10)) : (arr_17 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_10] [i_0])) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) var_7))))))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min(((~(((var_6) << (((arr_21 [i_0] [i_10]) - (10307034017436551429ULL))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [i_10] [i_0] [i_10]))))))))));
        }
    }
}
