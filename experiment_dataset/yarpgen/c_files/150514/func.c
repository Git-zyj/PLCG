/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150514
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
    var_13 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)153)))))))));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 += ((/* implicit */unsigned long long int) (!(var_6)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))))) : (var_3)))));
                var_17 = min((((((arr_4 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)103)), (arr_2 [i_0 - 1])))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 14150493708187696394ULL)) ? (((/* implicit */int) (short)30304)) : (((/* implicit */int) (unsigned char)14)))) >> (((((((/* implicit */int) arr_1 [i_0])) - (-321639060))) - (321609678))))))));
                var_18 -= ((/* implicit */unsigned int) (((!(((arr_2 [i_0 + 2]) == (((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)145)))))))) : ((-((+(((/* implicit */int) var_7))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-30304))))) >= ((+(arr_4 [i_0 + 1] [i_0 + 2])))));
            }
        } 
    } 
}
