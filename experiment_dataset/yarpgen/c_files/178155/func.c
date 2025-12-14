/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178155
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 2] [i_1 + 3])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
                                arr_15 [12LL] [i_2] [i_1 + 2] [(unsigned short)6] [(unsigned char)6] [i_3 + 1] [i_4 - 2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_1] [(signed char)3])) ? (arr_12 [i_4 - 2] [(unsigned char)2] [i_1] [i_1] [i_0 + 1] [i_0]) : (((int) var_6))))), (((unsigned int) (~(var_8))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned int) (unsigned short)61344)))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned short) (signed char)123)), (((/* implicit */unsigned short) ((signed char) (signed char)-123)))))) ? (((/* implicit */unsigned long long int) ((arr_12 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) & (arr_12 [i_7] [(unsigned short)2] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])))) : (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_6] [i_1 + 3] [i_7 - 1])) ? (arr_2 [i_0 - 1] [i_1 - 1] [i_1 + 3]) : (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_1 + 3] [i_1 + 1] [i_6] [i_1 + 2] [i_7 + 1]))))));
                                var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_9 [i_6])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_6])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))) : ((-(845182518664712985ULL)))))));
                                var_25 += min((((((/* implicit */_Bool) arr_12 [7ULL] [i_0 + 1] [i_7] [(signed char)9] [i_7 - 1] [i_0 + 1])) ? (((unsigned long long int) -469869924)) : (((/* implicit */unsigned long long int) arr_12 [i_5] [6ULL] [i_0] [i_5] [i_0] [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) -676750022)) || (((/* implicit */_Bool) var_6))))), ((~(-401920893)))))));
                                var_26 += ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_5] [i_1] [i_1 + 1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_0);
}
