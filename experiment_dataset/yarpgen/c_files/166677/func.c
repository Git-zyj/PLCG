/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166677
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)64111)), (max(((+(arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [(short)6])))))));
                arr_8 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0 - 1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 - 1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) % (769658686)))))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))) | (((/* implicit */long long int) ((/* implicit */int) max((var_2), (arr_7 [0LL] [10LL])))))))));
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_0)), (var_5))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) 1092238213U)) ? ((~(18085243387720360798ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_13 [(unsigned char)5] [5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(arr_4 [i_3]))), (((/* implicit */unsigned int) ((-1070162530) ^ (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_3]))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) <= (arr_2 [i_3] [i_3])))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_0))) != (((/* implicit */int) (unsigned short)27576)))))));
}
