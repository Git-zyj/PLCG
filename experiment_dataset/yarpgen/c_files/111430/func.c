/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111430
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
    var_16 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + ((+(((/* implicit */int) (signed char)-71))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -9223372036854775803LL)) - (var_14)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((var_12) ? (var_10) : (var_10))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((max((var_3), (((/* implicit */short) arr_1 [i_0])))), (((/* implicit */short) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_14)) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))))));
        var_18 -= ((/* implicit */_Bool) max((((arr_0 [i_0 - 1] [i_0]) & (arr_2 [i_0 - 2]))), ((~(arr_2 [i_0 - 1])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [(short)4] = ((arr_2 [i_1]) ^ (((/* implicit */unsigned long long int) (((_Bool)1) ? (max((-9223372036854775785LL), (arr_5 [i_2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
                    var_19 ^= ((/* implicit */int) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (1073741823U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_1])))))), (((((/* implicit */unsigned long long int) 1301509069U)) > (((var_7) + (arr_2 [i_0])))))));
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)42))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_0] [i_0]) ^ (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_9))))));
        var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)212)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [2ULL] [i_0])))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)62))) / (arr_5 [i_0] [i_0]))))))));
    }
}
