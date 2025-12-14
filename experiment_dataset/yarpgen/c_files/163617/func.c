/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163617
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
    var_10 = ((/* implicit */unsigned short) ((short) var_7));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_0)), (arr_5 [i_2] [i_2 + 1] [i_1 - 1] [i_0 + 2])))) ? ((-(((/* implicit */int) var_5)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    var_11 = ((/* implicit */_Bool) min((var_11), ((!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9270))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_2] [(short)12])) - (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_3 + 1] [i_2])))) + (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6)))))))));
                        arr_11 [i_0] [i_1 + 1] [i_0] = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)))))));
                    }
                }
            } 
        } 
    } 
}
