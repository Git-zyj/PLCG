/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162593
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
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (unsigned char)0))))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_2))) : (min((var_2), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned char)20)), (var_11))), (((/* implicit */long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
                arr_7 [6LL] [i_0] = ((/* implicit */short) min((((11352059982846330274ULL) >> (((arr_3 [i_0 - 2] [i_0 - 2]) - (3488877849190063979LL))))), (((/* implicit */unsigned long long int) max((max((var_11), (((/* implicit */long long int) (short)22899)))), (min((((/* implicit */long long int) (unsigned char)13)), (arr_3 [i_1] [i_0 - 3]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_14 [i_2] = ((/* implicit */unsigned int) ((unsigned char) var_7));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 7; i_6 += 1) 
                        {
                            {
                                arr_24 [i_2] [2U] [i_4] [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_12)), (min((arr_12 [i_3]), (((/* implicit */unsigned long long int) 2434649444U)))))), (((((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) 2080941410413801233ULL)))) ? (((var_15) / (var_7))) : (((/* implicit */unsigned long long int) (-(arr_0 [10ULL]))))))));
                                arr_25 [i_2] [1LL] [8U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)159)), (arr_9 [i_5] [i_6 + 1])))) == (((((/* implicit */_Bool) arr_9 [i_6 + 3] [i_3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_17))) ^ (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_17))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) var_12)), (var_2))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_17)), (var_11)))))))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned char)192))))), (((long long int) (unsigned char)28))))), (5733360488511430176ULL)));
}
