/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186538
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_1])) < (((/* implicit */int) arr_0 [i_0] [i_0])))));
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(2147483647)))), (5U)));
                var_20 = ((/* implicit */unsigned long long int) ((((arr_3 [i_0]) - (arr_3 [i_0]))) + (arr_3 [i_0])));
                var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_10), ((_Bool)1)))) + (((/* implicit */int) var_4))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)36441)) : (((/* implicit */int) (signed char)19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_3))))) : (min((0ULL), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 9; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((((/* implicit */_Bool) arr_8 [i_2 - 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_2 [i_3] [i_2]))))) : (((/* implicit */int) min((arr_0 [i_2] [4ULL]), (arr_0 [i_2] [10LL])))))), (((/* implicit */int) var_3)))))));
                var_24 += ((/* implicit */signed char) arr_5 [i_2 - 1] [i_3] [i_3]);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned short) arr_5 [i_2 - 2] [i_2] [i_2 - 2])), (arr_0 [2U] [(unsigned char)14]))))) ? (((/* implicit */int) ((arr_5 [i_2] [i_2] [i_3]) && (((/* implicit */_Bool) arr_3 [i_2 - 2]))))) : ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> ((-(0U)))))));
                arr_11 [i_3] = arr_10 [i_3];
                var_26 = ((/* implicit */int) arr_6 [i_3] [i_2]);
            }
        } 
    } 
}
