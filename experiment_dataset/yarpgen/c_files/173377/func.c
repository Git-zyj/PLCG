/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173377
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_7)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */short) ((((((((/* implicit */long long int) arr_4 [i_0])) == (arr_5 [i_0] [i_1]))) ? (var_3) : (min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_4 [i_0]))))) << (((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)214)) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))) - (213)))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)22)), (arr_2 [i_0] [i_1])))) : ((~(((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((var_10), ((unsigned char)214)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_4 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_3))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) max((((((/* implicit */int) max((var_0), ((unsigned char)42)))) | (((/* implicit */int) arr_1 [i_2] [i_2 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65523))))))))));
                var_17 = ((((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (325759524) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((max((arr_3 [i_2] [i_2] [i_3]), (((/* implicit */long long int) var_6)))), (max((arr_0 [i_2]), (((/* implicit */long long int) (unsigned short)65535)))))));
            }
        } 
    } 
}
