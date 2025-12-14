/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124446
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
    var_19 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)10] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned short)42834))) ? (((/* implicit */int) arr_3 [(unsigned char)8] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)194))))))) : (var_8)));
                arr_5 [i_0] [17ULL] = ((/* implicit */short) (+(var_10)));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned char) var_10));
    var_21 = ((/* implicit */unsigned int) var_14);
}
