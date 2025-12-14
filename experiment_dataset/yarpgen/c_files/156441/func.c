/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156441
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
    var_11 = ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((13594831229645629520ULL), (((/* implicit */unsigned long long int) (unsigned short)9725))))))) ? (((/* implicit */unsigned long long int) (~(arr_6 [i_0])))) : (((((((/* implicit */_Bool) arr_3 [(signed char)11])) ? (var_5) : (arr_5 [i_0]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)38521)))))))));
            }
        } 
    } 
    var_13 = ((unsigned long long int) var_1);
    var_14 = ((/* implicit */unsigned int) var_3);
    var_15 = max((((((/* implicit */_Bool) var_6)) ? (max((var_2), (var_7))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((15458786304925600003ULL), (((/* implicit */unsigned long long int) (unsigned char)2))))) ? (((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_3)) - (12275))))) : ((~(((/* implicit */int) var_3))))))));
}
