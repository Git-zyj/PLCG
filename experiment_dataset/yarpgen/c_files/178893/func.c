/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178893
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((arr_3 [i_1 - 3] [i_2]) + (((/* implicit */unsigned long long int) arr_1 [i_1 - 3] [i_1 - 3])))) + (((((/* implicit */unsigned long long int) (-(arr_4 [(unsigned short)5] [i_1] [i_2])))) - (((var_5) ? (((/* implicit */unsigned long long int) var_3)) : (14933191925206809358ULL))))))))));
                    arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])) ^ (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (unsigned char)58)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))))));
                    arr_8 [i_1] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 + 3])), (14933191925206809347ULL)))) ? (max((((/* implicit */unsigned int) -55317597)), (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))), ((-(arr_2 [i_1 - 2] [i_1 - 1] [i_1 - 2])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)42265)))) & (55317607)))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1))))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                arr_13 [20ULL] |= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_4 + 1])))));
                arr_14 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min(((-(4161536))), (((/* implicit */int) var_0))))) != (((max((5004812941952915807LL), (((/* implicit */long long int) arr_10 [i_3])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_4]) : (15U))))))));
            }
        } 
    } 
}
