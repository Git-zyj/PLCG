/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132555
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
    var_11 = var_8;
    var_12 = ((/* implicit */int) min((min((max((var_2), (((/* implicit */long long int) var_8)))), (((long long int) -6068590967529405622LL)))), (((/* implicit */long long int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38878))))) - (var_2)))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_8 [i_1] [11ULL])) - (16554)))))) % (((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [i_1]) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) var_2)))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)4930)))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(arr_6 [i_0] [i_1] [i_1] [i_2])))) : (((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */long long int) arr_6 [i_2] [i_1] [(signed char)9] [21LL])) : (var_3)))))));
                    arr_10 [19LL] [i_1] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                    var_14 += ((/* implicit */unsigned short) (+(((long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)23] [(unsigned char)12]))))))));
                    var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [24] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) (unsigned short)60605)) - (60594)))))) <= (((((/* implicit */_Bool) var_10)) ? (arr_7 [(signed char)21]) : (((/* implicit */unsigned long long int) var_2))))))) : (((/* implicit */int) ((unsigned short) ((unsigned long long int) var_0))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) / ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (var_2))))))));
}
