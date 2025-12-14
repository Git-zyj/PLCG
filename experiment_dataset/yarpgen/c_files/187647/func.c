/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187647
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
    var_12 -= ((/* implicit */int) ((var_4) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1)))))));
    var_13 -= ((/* implicit */unsigned short) (+(max(((~(35184371040256ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) (short)-32130)), ((unsigned short)40969)))), (max(((-(1244877145))), (((((/* implicit */_Bool) (short)-8053)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))));
                var_15 = (-((((!((_Bool)1))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (short)-32130)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(var_5))) | (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 6163445049359490076ULL)))))) : ((~(((/* implicit */int) (short)14795))))));
}
