/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149679
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
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */unsigned long long int) (unsigned short)34477);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (-9223372036854775807LL - 1LL)))) ? (arr_2 [i_3]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) min((9223372036854775807LL), (-9083007528074069177LL)))) > (10143521064532761243ULL))))));
                            var_21 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_1 + 3] [i_0 + 1]) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 1])))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 7; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_1 - 3] = arr_7 [i_0] [i_0 - 2] [i_0 + 2] [i_0];
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)58)), (min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (562546981) : (((/* implicit */int) var_16))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            arr_21 [i_6] [i_5] [i_6] &= min((((unsigned long long int) ((long long int) (unsigned char)175))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_5] [i_6])) ? (arr_3 [i_5] [i_5] [i_0 + 2]) : (((/* implicit */int) (unsigned short)56209))))));
                            arr_22 [i_1] [i_0] = ((((/* implicit */_Bool) 2097151ULL)) ? (579124020) : (((/* implicit */int) (unsigned char)200)));
                        }
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) var_11)), (min((((/* implicit */long long int) ((unsigned int) (signed char)-16))), (((long long int) (unsigned short)982))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((int) var_9));
                arr_29 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | ((+(arr_26 [i_8] [i_7])))));
            }
        } 
    } 
}
