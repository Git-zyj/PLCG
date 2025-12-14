/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109718
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */long long int) max((((/* implicit */int) max(((unsigned char)91), (((/* implicit */unsigned char) (_Bool)1))))), (max((((/* implicit */int) (unsigned char)244)), (-1480944956)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_11)))))))), (((unsigned short) arr_4 [i_0] [i_1]))));
                var_16 = var_3;
                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [(signed char)11] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((arr_2 [i_1] [5ULL]) == (((/* implicit */unsigned long long int) arr_3 [i_0]))))))) != (((/* implicit */int) var_11))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 20; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            {
                var_18 |= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)243)), (var_10)))), (((long long int) var_7)))), (((/* implicit */long long int) arr_7 [i_2]))));
                arr_10 [i_3] = ((/* implicit */unsigned int) ((long long int) arr_9 [i_3]));
                arr_11 [i_2] [i_3] [(unsigned short)17] = ((/* implicit */signed char) ((((_Bool) 2270426141654360117ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((int) -655043575))))) : (2417761067U)));
            }
        } 
    } 
}
