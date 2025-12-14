/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154598
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_5))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (18446744073709551615ULL))))));
        var_14 = ((/* implicit */short) ((((unsigned int) (signed char)61)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
        var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_9 [i_1] [i_3 + 1] = ((/* implicit */long long int) ((short) min((18446744073709551606ULL), (((/* implicit */unsigned long long int) (signed char)83)))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)2047)), (arr_7 [i_1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (short)-5543)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (var_2))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16455362962383678241ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) var_12)), (18446744073709551601ULL)))))) ? (((((/* implicit */_Bool) max((1ULL), (var_7)))) ? (min((var_7), (16592882784221204161ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1991381111325873375ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
                }
            } 
        } 
    } 
}
