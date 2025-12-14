/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121168
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) (+((+((-(arr_5 [i_0] [i_0])))))));
                    arr_9 [i_2] [(unsigned short)20] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_2))))));
                    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_8))))));
                    arr_10 [0ULL] [0ULL] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)36065)) || (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((long long int) arr_7 [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) 1292325377)), (var_7)))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_4)), (arr_2 [i_1]))) ^ (arr_7 [i_1])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_9)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_1)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
}
