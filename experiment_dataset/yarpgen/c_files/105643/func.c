/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105643
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((min((arr_0 [(signed char)10]), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) var_11))))))))));
        var_15 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) var_8)))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (unsigned char)177)) : (144306382)))))) && (((/* implicit */_Bool) var_8))));
    }
    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_10))))) : ((~(var_1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            {
                arr_7 [15ULL] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((arr_3 [i_1]) ? (var_13) : (var_1))))) & (((/* implicit */int) arr_3 [i_2]))));
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (((unsigned long long int) var_12)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_11);
}
