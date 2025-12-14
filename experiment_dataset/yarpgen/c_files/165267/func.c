/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165267
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
    var_19 = ((/* implicit */unsigned char) (short)-21379);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                            {
                                arr_14 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) var_3)), (((short) (unsigned char)107)))))));
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_4)))), (((int) var_6))));
                            }
                            for (short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                            {
                                arr_18 [i_0] &= ((/* implicit */short) min((((/* implicit */unsigned int) (~(((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_13))))))), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)48), (((/* implicit */unsigned char) (signed char)111)))))) + (min((((/* implicit */unsigned int) var_16)), (4264913084U)))))));
                                arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54166))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_18))))))))) ? (((((/* implicit */_Bool) (unsigned short)32909)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 3] [i_2 - 3] [i_2 - 1] [i_0 - 2]))) : (7562113146539868461ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)32901))))));
                                var_21 = ((/* implicit */unsigned long long int) 943430774);
                            }
                            arr_20 [i_3] = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_1] [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_0 + 2]))) ^ (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)24576)) : (arr_4 [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    arr_28 [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */long long int) ((short) (~(((/* implicit */int) (short)8188)))));
                    var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_27 [i_6] [i_7] [i_8] [15U])) ? (((/* implicit */long long int) 839433674)) : (arr_27 [(signed char)1] [i_7] [i_6] [i_6])))));
                    arr_29 [i_6] [(unsigned short)7] [i_8] [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_25 [i_6] [i_6] [i_8])) : (-1754569228)))));
                    arr_30 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) (-((~(-1858501155)))));
                }
            } 
        } 
    } 
}
