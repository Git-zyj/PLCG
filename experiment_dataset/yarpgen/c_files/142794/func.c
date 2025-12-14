/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142794
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
    var_12 = ((/* implicit */unsigned short) (-(((min((var_10), (var_10))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max(((-(min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_0]))))), (((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2]))))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((signed char) ((((/* implicit */long long int) arr_1 [i_0] [i_1 + 1])) + (var_4)));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_7)), (var_11)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)90))))) ? (((/* implicit */unsigned long long int) 2596835280U)) : (var_10)))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((unsigned short) var_1));
        arr_10 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) <= (((/* implicit */long long int) ((2596835280U) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
        var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) ? (((/* implicit */long long int) (~(arr_6 [i_0])))) : (min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])), (var_8)))))));
    }
    for (int i_3 = 3; i_3 < 14; i_3 += 2) 
    {
        arr_14 [i_3] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (130023424U)));
        arr_15 [i_3] = ((/* implicit */long long int) var_2);
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_15 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_4 [i_4] [i_4])), ((-(10U)))));
        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (arr_13 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
}
