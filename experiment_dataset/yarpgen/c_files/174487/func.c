/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174487
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((unsigned int) arr_1 [i_0]))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((((/* implicit */int) var_17)) > (((/* implicit */int) var_10)))) ? (((/* implicit */int) ((signed char) arr_9 [i_2] [i_2] [i_1] [i_0]))) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1])))) : (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_2]);
                                arr_20 [i_0] [i_1] [(short)10] [i_1] [i_1] [i_0] [3U] = ((/* implicit */short) (~(((/* implicit */int) (signed char)76))));
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_4 + 1])) ? (((unsigned long long int) arr_9 [i_0] [i_1 + 1] [i_0] [i_4 - 2])) : (((/* implicit */unsigned long long int) var_15))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [(unsigned char)2] = ((/* implicit */unsigned char) arr_16 [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3]);
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_27 [14LL] [14LL] = ((/* implicit */short) (((_Bool)1) ? (642781159) : (-642781159)));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_5])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_5])) ? (-642781159) : (((/* implicit */int) (short)9663)))) < (642781167))))));
                    var_19 = ((/* implicit */signed char) var_1);
                    arr_33 [i_5] [i_6] [11ULL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)31352))) : (8259660147636380524LL)))) ? (((((/* implicit */_Bool) -642781157)) ? (11251140007005757787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) var_17);
    /* LoopNest 3 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (unsigned short i_9 = 3; i_9 < 11; i_9 += 3) 
        {
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                {
                    arr_44 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_39 [i_8] [i_8]))))) ? ((-(arr_32 [i_9 - 1] [i_8] [i_8]))) : (min((arr_36 [i_8 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (9223372036854775791LL))))))));
                    var_21 = ((/* implicit */long long int) arr_29 [i_8] [i_9]);
                    arr_45 [(short)12] [(short)12] [12] |= ((/* implicit */unsigned long long int) arr_35 [i_8]);
                    var_22 ^= ((((/* implicit */_Bool) (-(-3727380794078103720LL)))) ? (arr_42 [(short)14]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_8] [i_8] [i_8 - 1] [i_9 - 1])) : (((/* implicit */int) var_12))))));
                    arr_46 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_32 [i_10 + 3] [i_8] [i_10 + 2])))) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) arr_30 [i_8] [i_9] [i_9] [i_9]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
    var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) var_16))))));
}
