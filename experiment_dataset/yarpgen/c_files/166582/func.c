/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166582
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((max((47616153U), (45821829U))) << (((((((/* implicit */_Bool) 4247351155U)) ? (7797437023333642666ULL) : (((/* implicit */unsigned long long int) var_1)))) - (7797437023333642644ULL)))))) : (((long long int) ((47616153U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
                    var_12 = ((/* implicit */unsigned int) max((var_12), (1158746417U)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */long long int) var_3);
        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (arr_10 [12LL]))), (arr_10 [i_3]))) : (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) ((short) (unsigned char)112))))))));
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_9 [i_3] [17LL]), (((/* implicit */int) (unsigned short)0))))) ? ((+(arr_9 [11ULL] [11ULL]))) : (var_3)));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned int) arr_9 [i_4] [i_4]);
        arr_17 [i_4] [7] = ((/* implicit */unsigned int) (-((-(arr_9 [1LL] [i_4])))));
    }
    var_15 = ((/* implicit */unsigned short) var_5);
}
