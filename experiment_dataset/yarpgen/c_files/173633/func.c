/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173633
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
    var_15 = ((/* implicit */short) min(((unsigned short)46376), (((/* implicit */unsigned short) (short)7168))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) == (var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) min((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4 + 2]), (((/* implicit */long long int) arr_3 [i_0]))))));
                                arr_15 [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_4 - 2] [i_2 + 1] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) (unsigned short)30760)))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) (_Bool)0))))), (arr_11 [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_12 [i_0] [i_0] [i_2 + 1] [i_0] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_11))) : (233562378843265152ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (signed char i_6 = 2; i_6 < 8; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((36977508U), (((/* implicit */unsigned int) (unsigned short)65533))));
                                arr_29 [i_5] [i_6 - 1] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (arr_28 [i_5] [i_5] [i_5] [i_8]))) ? (arr_10 [i_6 - 1] [i_6 - 1] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_9])))))) ? (arr_18 [i_9]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_26 [i_6] [i_6 - 2] [i_6] [i_6 + 1] [i_6 + 2] [i_9])) : (((/* implicit */int) ((unsigned short) arr_22 [i_6] [i_6 + 2] [i_6 + 2]))))))));
                                arr_30 [i_6] [i_8] [i_8] [i_7] [i_7] [i_6 + 2] [i_6] = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_1 [i_6 - 2] [i_6 - 2])), (386778236))) + ((((_Bool)0) ? (((/* implicit */int) (unsigned short)7315)) : (((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)91)) + (((int) 10006336331603959294ULL))));
                }
            } 
        } 
    } 
}
