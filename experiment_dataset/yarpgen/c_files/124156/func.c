/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124156
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */_Bool) (short)-13456)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (556142280U))))));
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3738825023U)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (3738825011U))))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (var_1)));
    var_23 = ((/* implicit */unsigned int) var_15);
}
