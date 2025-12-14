/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166238
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
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((unsigned char) min((((/* implicit */unsigned char) (signed char)-3)), ((unsigned char)82))))));
        var_13 = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_4 [i_1] &= ((/* implicit */short) (~(2168329342U)));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5118))) : (var_6)))) : ((~(arr_3 [i_1] [i_1])))))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-65)), (var_3)))) : (arr_2 [i_1])));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_14 = var_9;
                    arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (arr_7 [i_1]))) | (((/* implicit */unsigned long long int) -8604542146149997498LL))))));
                }
            } 
        } 
    }
}
