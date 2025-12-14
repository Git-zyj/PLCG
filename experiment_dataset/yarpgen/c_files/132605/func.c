/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132605
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
    var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) 3369198794U)) ? (925768501U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-1235134049)))) ? (max((((/* implicit */int) (short)20283)), (var_5))) : (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_17))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_1)), (925768502U))), (4133114941U)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 422050757U)) || (((/* implicit */_Bool) var_4))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))))));
                }
            } 
        } 
    } 
}
