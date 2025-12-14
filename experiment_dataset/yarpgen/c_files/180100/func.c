/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180100
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
    var_16 = ((/* implicit */unsigned long long int) ((((var_9) * (((/* implicit */long long int) ((/* implicit */int) var_0))))) / (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_12)))))));
    var_17 = ((/* implicit */unsigned short) (-(min((min((var_10), (((/* implicit */long long int) (unsigned char)209)))), (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_14)))))));
    var_18 &= ((/* implicit */short) 2199021158400LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2199021158404LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)28))) : (2199021158400LL)));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_0] [i_0])))) > (((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
                arr_9 [i_1] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) ^ ((~(var_9))))), (var_2)));
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) -5796304829998476900LL))));
}
