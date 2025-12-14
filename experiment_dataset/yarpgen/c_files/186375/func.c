/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186375
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
    var_14 = ((/* implicit */short) 17590526545216718225ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((int) 3403929686U))) : (((((/* implicit */_Bool) 4438727589201048726ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511))) : (var_11)))))) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_4 [0ULL] [i_0])) : (var_0)))) ^ (((((/* implicit */_Bool) (short)29930)) ? (14008016484508502898ULL) : (1794378441633955990ULL)))))) ? (max((((((/* implicit */_Bool) var_2)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((arr_0 [i_1 + 4]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [(_Bool)1] [i_0])))))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) var_9);
                var_18 = ((/* implicit */long long int) var_3);
                var_19 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (4438727589201048736ULL) : (((/* implicit */unsigned long long int) -323725688)))));
                var_20 = ((unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1]))) : (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 2]))) : (arr_9 [i_2])))));
                var_21 = ((/* implicit */short) (_Bool)0);
            }
        } 
    } 
}
