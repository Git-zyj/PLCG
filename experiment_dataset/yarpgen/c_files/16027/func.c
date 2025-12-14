/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16027
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
    var_19 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (unsigned char)72)), (3453293443U))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [(unsigned short)14] [i_0] [(unsigned short)14] |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_6))) && (((((/* implicit */int) var_7)) >= (arr_0 [(unsigned char)2]))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)247)), (7385145428901521201LL))) * (((/* implicit */long long int) 841673870U))))))));
                    arr_7 [i_0 + 1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_14)), (arr_3 [i_0] [(unsigned char)14])))), (max((3453293425U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [(signed char)8]))))))) : (((arr_5 [(short)12] [i_0] [i_2]) ? (7385145428901521207LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [14U])))))));
                }
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18)))))))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_4) : (2492993361U)))))))));
                var_22 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) 1801973934U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-37))))), (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_3)))))));
                arr_8 [i_0] = var_0;
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) 3453293444U);
    var_24 |= ((/* implicit */int) (_Bool)1);
    var_25 = ((/* implicit */unsigned char) (unsigned short)23);
}
