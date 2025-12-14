/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110813
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
    var_14 = var_3;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1 + 3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65535)))), ((-(((/* implicit */int) (unsigned short)65535)))))))));
                arr_5 [i_0] = max((((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23)))))), ((~(((int) 3415007474U)))));
                arr_6 [i_0] [i_1 + 3] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) var_2)) <= (-6204890532274936731LL))) ? (min((2147483647), (-1762833860))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))))))));
            }
        } 
    } 
}
