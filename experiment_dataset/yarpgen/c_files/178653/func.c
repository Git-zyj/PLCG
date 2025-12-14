/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178653
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
    var_19 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 3924474953U)) ? (-43450824) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_6)))))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3924474960U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((370492352U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 12689626692497324308ULL)) ? (arr_1 [i_0] [i_0]) : (3924474965U))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)38892)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_6))))));
    }
    var_23 = ((/* implicit */unsigned int) var_12);
}
