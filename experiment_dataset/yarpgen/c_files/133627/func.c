/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133627
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)118)) : (var_17))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)12090)))))))) : (((((/* implicit */_Bool) (~(549755813856ULL)))) ? (((((/* implicit */_Bool) (unsigned short)20813)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(min((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_1])))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)111))))) + (18446743523953737760ULL))))))));
                    var_22 ^= ((/* implicit */unsigned char) (_Bool)1);
                    var_23 = ((((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_0] [(unsigned char)4])))) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (signed char)42))))))) << (((min(((-(arr_9 [i_0] [i_0] [i_2]))), ((-(18446743523953737760ULL))))) - (549755813831ULL))));
                }
            } 
        } 
    } 
}
