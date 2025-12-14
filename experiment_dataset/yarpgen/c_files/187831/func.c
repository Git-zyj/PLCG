/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187831
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -122217038)) ? (var_14) : (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))), (119629981))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */signed char) min((((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))), (min((122217056), (((/* implicit */int) arr_6 [i_1 + 1] [i_2] [i_0 + 1] [i_2]))))));
                    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */signed char) var_3)), (arr_4 [i_0] [i_1])))))) ? (max(((+(((/* implicit */int) arr_0 [i_1] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_2] [i_1])), ((unsigned short)44173)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)102)), ((unsigned short)21362))))));
                    var_19 = ((/* implicit */short) -122217041);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned short) ((arr_6 [i_2] [i_1 - 1] [i_2] [i_0 + 1]) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2])))))))))));
                    arr_7 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_1] [i_0 + 1]);
                }
            } 
        } 
    } 
}
