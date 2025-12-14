/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120802
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */unsigned long long int) max(((-(arr_1 [i_0 + 3]))), (max((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 - 1])), ((unsigned short)14))))))));
                var_14 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_0 + 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 3]))))));
                var_15 |= ((/* implicit */signed char) max((((/* implicit */long long int) (~((~(arr_2 [(unsigned short)5] [i_0])))))), (((long long int) arr_0 [i_0 - 1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (signed char)31);
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) 882767114)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)12243))));
}
