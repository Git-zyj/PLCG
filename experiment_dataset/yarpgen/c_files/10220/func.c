/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10220
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
    var_19 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_2 [i_0])))))) ? (max((((/* implicit */long long int) ((signed char) arr_0 [i_0]))), ((-(arr_1 [i_0]))))) : (max(((-(-1LL))), (min((arr_3 [i_0]), (((/* implicit */long long int) var_18))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_12 [i_1 + 3] [i_1] [i_2 + 1] [i_1])) + (((/* implicit */int) arr_12 [i_1 + 4] [i_1 + 4] [i_2 + 1] [i_1 + 4]))))));
                    var_21 = ((((arr_0 [i_0]) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)21)), (var_8)))))) ? (arr_3 [i_1 + 4]) : (min((arr_3 [i_1 - 2]), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (var_14)))))));
                }
            } 
        } 
        var_22 += ((/* implicit */signed char) min((var_12), (((/* implicit */long long int) var_13))));
        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (arr_8 [i_0]) : (((/* implicit */int) ((unsigned char) (unsigned char)254)))));
    }
    var_24 &= ((((/* implicit */_Bool) var_4)) ? (var_18) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) + (((/* implicit */int) (signed char)40))))) ? (((/* implicit */unsigned int) (+(var_3)))) : (var_18))));
}
