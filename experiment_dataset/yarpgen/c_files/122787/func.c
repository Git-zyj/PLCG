/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122787
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (arr_8 [i_3] [i_2] [(unsigned char)15] [(short)1])));
                            arr_9 [i_2] [17ULL] [17ULL] [(unsigned char)1] [i_1] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))), (((unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) arr_2 [i_3] [i_2] [i_0]))));
                        }
                    } 
                } 
                arr_10 [(unsigned short)13] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [(unsigned char)3] [15] [i_1] [5ULL])) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_0 + 1] [(_Bool)1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (arr_6 [18ULL] [i_1 + 2] [(unsigned char)16] [i_1])))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_0)) & (((/* implicit */int) var_0)))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_17 [(signed char)4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == ((((((_Bool)0) ? (4294967295U) : (4294967292U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5 - 1] [i_5] [i_5] [i_4] [i_5]))))) ? ((-(((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4] [i_5])))) : (((/* implicit */int) arr_15 [i_5 - 1] [i_5 + 1] [i_5] [i_4] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            arr_30 [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) max((4U), (((/* implicit */unsigned int) (_Bool)1))))), (((((/* implicit */unsigned long long int) arr_20 [i_8])) % (24ULL))))));
                            arr_31 [(signed char)23] [i_7] [i_7] [(signed char)14] = ((/* implicit */int) (~(15U)));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(unsigned short)0] [i_7] [i_8] [14])) || (((/* implicit */_Bool) max((4294967292U), (4294967289U)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            var_19 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_36 [(signed char)10] [(short)10] [17U] [21])))));
                            arr_37 [i_6] [i_7] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((_Bool) var_12))) ^ (((/* implicit */int) var_0))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_29 [12ULL] [14ULL] [i_10]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((18446744073709551590ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [13U] [i_7])))));
                /* LoopNest 3 */
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            {
                                arr_45 [i_6] [i_14] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((short) arr_23 [i_7] [i_14]));
                                arr_46 [i_6] [i_6] [i_6] [i_6] [i_14] [i_6] [i_6] = ((/* implicit */unsigned char) ((min((arr_23 [i_7] [i_12]), (((/* implicit */unsigned long long int) arr_20 [i_7])))) - (max(((+(6694733305388557197ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_0)))))))));
                                arr_47 [i_6] [i_7] [14ULL] [i_13] [i_14] = ((/* implicit */short) max((15063791942467227211ULL), (((/* implicit */unsigned long long int) (unsigned short)52664))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
