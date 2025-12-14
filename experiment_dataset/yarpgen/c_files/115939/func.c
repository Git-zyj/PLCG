/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115939
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
    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) var_5)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)53150)))))))));
    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) || (((((((/* implicit */int) (unsigned char)24)) << (((var_3) - (17263600228434557751ULL))))) == (((((/* implicit */_Bool) var_3)) ? (1361107726) : (((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)6])) >= (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((min((var_8), (((/* implicit */unsigned char) arr_4 [i_1])))), (((/* implicit */unsigned char) arr_4 [i_1])))))));
                var_17 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) -1131933729)), (12509370220233858862ULL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~((+(min((var_10), (var_6))))))))));
}
