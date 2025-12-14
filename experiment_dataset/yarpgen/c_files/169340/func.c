/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169340
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) (short)-24);
                var_15 = ((/* implicit */short) arr_3 [i_0]);
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (short)8))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) % (min((((/* implicit */unsigned int) arr_3 [i_1])), (1102438161U)))))) ? (((((/* implicit */_Bool) -2033193149)) ? (((/* implicit */int) (short)-20)) : (((/* implicit */int) (short)-9)))) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (arr_0 [i_1]))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned long long int) var_10);
    var_19 = ((/* implicit */unsigned int) max((max((var_5), (((/* implicit */unsigned long long int) 1102438165U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (short)-11755)) : (((/* implicit */int) (unsigned short)0)))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536870904LL)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9)))));
                            arr_15 [i_5] [11LL] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) min((3192529127U), (1102438161U)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) var_9);
                var_22 += ((((/* implicit */_Bool) 1102438180U)) ? (((/* implicit */unsigned long long int) 3192529122U)) : (min((((/* implicit */unsigned long long int) 25U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) | (18ULL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 2; i_6 < 23; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_25 [i_2 + 1] [i_3] [i_6] [i_7] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((-1LL) > (((/* implicit */long long int) 4094264438U))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14741718311539238680ULL)) ? (((unsigned int) (unsigned short)35093)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3192529124U))))));
                                var_24 = ((/* implicit */int) var_1);
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_8 - 4] [i_3] [i_6 - 1] [i_7] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_8 + 3] [i_3] [i_3] [i_3] [i_6 + 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 3; i_9 < 24; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 24; i_10 += 3) 
                        {
                            {
                                arr_32 [i_6] &= ((/* implicit */unsigned short) (short)19);
                                var_26 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */unsigned long long int) arr_17 [i_3])) : (((((/* implicit */_Bool) arr_29 [i_2])) ? (((/* implicit */unsigned long long int) var_1)) : (var_8)))));
                                arr_33 [i_2] [i_3] [i_3] [i_9] [i_10] = ((/* implicit */_Bool) var_12);
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 1102438165U)) ? (3192529120U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24560)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = min((((/* implicit */unsigned long long int) (unsigned short)65535)), (((((/* implicit */_Bool) ((short) 3192529132U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13))));
}
