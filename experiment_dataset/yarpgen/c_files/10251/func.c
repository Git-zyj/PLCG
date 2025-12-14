/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10251
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((((((/* implicit */_Bool) arr_1 [3U] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 3])))) == (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0 + 2])), (var_7)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_6 [i_3 - 1]))) > (((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0 + 2]) : (arr_6 [i_1])))));
                                var_19 = ((/* implicit */int) var_15);
                                var_20 ^= ((/* implicit */_Bool) ((unsigned int) max((arr_2 [i_4] [i_2 - 1]), (((/* implicit */unsigned short) var_8)))));
                                arr_11 [i_1] [9] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_0] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_7 = 3; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((signed char) arr_22 [4] [8LL] [i_7] [i_7 + 2])))));
                                var_22 += ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1])))));
                                arr_27 [i_5] [i_5] [i_7 - 2] [i_6] [i_8] [i_9] [(_Bool)1] = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) arr_25 [i_5 + 1] [i_8 + 1])), (var_1)))));
                                arr_28 [i_6] = ((/* implicit */unsigned int) ((((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_26 [i_5 + 1] [i_5] [i_5] [i_5] [i_5]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_18 [i_6 - 1] [i_6] [i_9])))) ? (((/* implicit */int) ((arr_22 [i_6] [i_6] [i_6] [i_7 + 3]) == (var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5]))) < (var_12))))))) : (max((((/* implicit */long long int) 3117971566U)), (max((var_1), (((/* implicit */long long int) arr_23 [i_7 - 1] [i_5]))))))));
                            }
                        } 
                    } 
                } 
                arr_29 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [(signed char)8] [i_6 - 1] [(unsigned short)3] [i_6] [i_6])), (arr_15 [i_5 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29395))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 + 1])))))));
            }
        } 
    } 
}
