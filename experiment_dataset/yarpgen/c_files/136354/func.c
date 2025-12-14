/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136354
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
    var_19 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) (+(min((0ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (arr_2 [(unsigned char)2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 0ULL)))))));
        var_21 = ((((/* implicit */_Bool) ((unsigned char) 1065353216))) ? (((((/* implicit */_Bool) 0ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (max((arr_2 [i_0]), (arr_2 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] [i_2] = 12834353073116787896ULL;
                    var_22 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (2147483638) : (((/* implicit */int) arr_7 [i_1 - 2]))))));
                }
            } 
        } 
    }
}
