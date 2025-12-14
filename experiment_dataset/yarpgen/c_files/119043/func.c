/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119043
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 |= ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) ((((/* implicit */int) var_0)) > (arr_4 [i_1] [3LL])))));
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_3 [i_0])))) ? ((+(arr_3 [i_0]))) : (min((arr_3 [1LL]), (arr_3 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (+(2462523829U)));
        arr_10 [i_2] &= ((/* implicit */long long int) var_5);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_3]))));
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 6046342127330387870ULL)) ? (((/* implicit */int) arr_8 [i_3])) : (var_4)));
        var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 3034872749682683647LL)))))) : (arr_11 [i_3] [i_3])));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_3]))));
            var_16 = ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_1)));
            arr_17 [i_3] [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) -1603698969)) && (((/* implicit */_Bool) var_2)))))));
        }
    }
}
