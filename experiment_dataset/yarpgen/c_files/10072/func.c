/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10072
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (1593884104544346562LL) : (((/* implicit */long long int) var_7))))) ? (2402256586U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2402256574U)) ? (3686212986871973717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))))));
    var_18 = ((/* implicit */long long int) (~(var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) (short)-15591))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (_Bool)1))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) < (((((/* implicit */_Bool) 5845587042286003284ULL)) ? (201326592U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26856)))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_3))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (5845587042286003278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26997)))))) ? ((-(((/* implicit */int) (short)-15612)))) : (((/* implicit */int) ((unsigned char) (short)15597)))));
                }
            } 
        } 
    } 
}
