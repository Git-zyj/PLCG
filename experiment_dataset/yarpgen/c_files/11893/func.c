/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11893
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
    var_15 = ((/* implicit */unsigned char) (+((~(min((var_0), (((/* implicit */long long int) var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) (~((~(arr_6 [i_0] [i_1])))));
                var_16 -= ((/* implicit */long long int) (+(min((((/* implicit */int) arr_3 [i_1])), ((~(((/* implicit */int) arr_4 [(signed char)10] [1ULL]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) (~(arr_15 [i_4] [(signed char)0] [i_4])))), ((+(arr_9 [i_2] [i_3])))))));
                    arr_16 [(_Bool)1] [i_2 - 1] &= ((/* implicit */int) (~(((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_2])), (arr_14 [2LL] [i_3] [i_4] [i_3])))) ? (((((/* implicit */_Bool) arr_15 [14] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_9 [3ULL] [3ULL])) : (arr_13 [4] [4] [8U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_2])), (arr_12 [i_2] [i_2])))))))));
                    arr_17 [i_4] [i_3] [i_4 - 2] = (-((+((-(arr_10 [i_3]))))));
                    var_18 = ((/* implicit */long long int) (~((((!(arr_11 [i_2] [i_2 + 2]))) ? (((/* implicit */int) (!(arr_11 [i_2] [10ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4])))))))));
                    arr_18 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_3] [i_4] [12]))));
                }
            } 
        } 
    } 
}
