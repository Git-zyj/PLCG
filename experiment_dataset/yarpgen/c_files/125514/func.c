/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125514
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_5))))) ? (min((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
        var_17 = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) (-(arr_3 [i_1])));
        arr_4 [i_1] = ((/* implicit */signed char) ((((_Bool) arr_2 [i_1] [i_1])) ? (((((/* implicit */long long int) ((int) arr_2 [i_1] [i_1]))) ^ (-1035702963214765775LL))) : (max((max((((/* implicit */long long int) var_5)), (arr_2 [i_1] [i_1]))), (((/* implicit */long long int) (signed char)-47))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_3 [i_2]) : (((/* implicit */int) arr_1 [i_2] [i_2])))));
        arr_8 [i_2] = ((/* implicit */_Bool) ((unsigned char) ((var_3) <= (((/* implicit */int) (unsigned char)5)))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-82))))) ? ((+(arr_2 [i_2] [i_2]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) ^ (5484499941858436230LL)))));
        var_20 = ((/* implicit */unsigned char) ((arr_1 [i_2] [i_2]) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : ((~(arr_2 [i_2] [i_2])))));
    }
    var_21 = ((/* implicit */signed char) var_14);
}
