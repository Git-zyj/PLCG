/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125964
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_1] [(short)9]))) || (((/* implicit */_Bool) -8109857868900257085LL))))) % (((/* implicit */int) arr_4 [i_0] [(short)9] [i_2]))));
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)43879)) ? (arr_0 [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)57)) >> (((((/* implicit */int) (signed char)57)) - (43)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-57)))))) : (max((var_7), (((/* implicit */long long int) var_2))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-61)))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 999105959U)) : (arr_15 [i_3] [8ULL]))))));
                /* LoopNest 3 */
                for (signed char i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (signed char i_7 = 3; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_24 [(unsigned char)7] [i_3] [(signed char)10] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((/* implicit */int) var_5))))), (arr_15 [i_5 + 2] [i_5 - 2])))), (max((arr_20 [i_4]), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) (_Bool)1)))))))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) >> (((((long long int) (unsigned char)172)) - (157LL))))))));
                                var_15 = (i_4 % 2 == 0) ? (((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14)) << (((((/* implicit */int) arr_22 [i_3] [(unsigned char)13] [i_4] [i_5] [(unsigned char)13] [i_7 - 1])) + (64)))))) : (((long long int) arr_23 [i_6] [i_6] [i_6] [i_6] [i_6]))))))) : (((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14)) << (((((((/* implicit */int) arr_22 [i_3] [(unsigned char)13] [i_4] [i_5] [(unsigned char)13] [i_7 - 1])) + (64))) - (157)))))) : (((long long int) arr_23 [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                            }
                        } 
                    } 
                } 
                var_16 |= ((/* implicit */short) (signed char)-57);
                arr_25 [i_4 + 2] [i_4] [i_3] = ((/* implicit */short) 1903949342U);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((unsigned int) (signed char)60)), (((/* implicit */unsigned int) (signed char)-61)))))));
    var_18 = ((/* implicit */_Bool) var_10);
}
