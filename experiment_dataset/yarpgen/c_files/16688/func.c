/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16688
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_7))))) ? ((((!(var_6))) ? (max((var_0), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) max((var_2), (var_3)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((_Bool) var_6)) && (((/* implicit */_Bool) ((unsigned short) var_11)))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) max((var_7), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_11)))) && (((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_3))))))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_9)), (var_10)))) ? (max((var_1), (((/* implicit */long long int) var_2)))) : (max((var_0), (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((max((((/* implicit */long long int) var_6)), (var_5))), (((/* implicit */long long int) ((short) var_0)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) (~(max((((/* implicit */long long int) var_8)), (var_5)))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((unsigned int) max((max((var_0), (((/* implicit */long long int) var_7)))), (min((((/* implicit */long long int) var_7)), (var_5))))));
                        var_16 = max((((/* implicit */long long int) var_8)), (((((_Bool) var_5)) ? (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_9))))))));
                    }
                } 
            } 
        } 
    }
}
