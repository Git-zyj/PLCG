/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179647
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) & (((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1])))) & (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99)))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_1 - 1] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_14)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_12)))))))) - (min((var_3), (min((((/* implicit */unsigned long long int) var_11)), (var_0)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                arr_9 [i_3] [i_3] |= ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_3])), (min(((unsigned short)3448), (((/* implicit */unsigned short) arr_7 [i_3] [i_3]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) ((short) (signed char)-79))) : (((/* implicit */int) ((_Bool) var_7)))))) : (3281463729U));
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [6] [i_2]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_3])) - (((/* implicit */int) arr_6 [i_2]))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (_Bool)1);
}
