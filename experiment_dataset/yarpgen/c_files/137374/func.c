/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137374
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_11))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_3 [i_0] [i_0])))))) : ((-(var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4)))) ? (arr_1 [i_1] [i_2]) : (arr_1 [i_0 - 1] [i_0 - 1]))))))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : ((+(7624254393732066648LL)))))) ? (((/* implicit */int) (unsigned char)81)) : (1075120024));
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_9))));
}
