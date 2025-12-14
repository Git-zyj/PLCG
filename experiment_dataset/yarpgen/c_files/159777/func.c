/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159777
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
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0 - 1] [i_1] = ((/* implicit */_Bool) ((unsigned int) var_13));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_1 - 1] [i_1] [i_1]), (arr_4 [i_1 - 1] [i_1] [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1 - 1] [i_1] [22U]), (arr_4 [i_1 - 1] [i_1] [i_1]))))) : (min((var_7), (((/* implicit */long long int) arr_4 [i_1 - 1] [i_1] [i_1]))))));
                var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((arr_4 [15U] [i_1] [i_0]), (((/* implicit */short) var_13))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)-32753)))) : (((int) arr_3 [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_11)))))) : (min((var_5), (var_5))))), ((~(((long long int) var_11))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_11 [i_3 + 1] [i_3 + 1] [i_2 + 1]), (arr_11 [13ULL] [i_3 + 1] [i_2 + 2]))))));
                var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)3549))))), (((((arr_3 [10]) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))));
            }
        } 
    } 
}
