/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119316
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_11 = (unsigned char)15;
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 2989738688U)) && (((/* implicit */_Bool) 541477642U))))) >> (((((/* implicit */int) (unsigned short)41636)) - (41627))))))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned int) -417205912)) | (2745643985U))))));
        arr_4 [i_1] = ((/* implicit */unsigned int) -814680357);
    }
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) 814680357)) != (2535976081U)))) != (-1290732877)))), (max((((((/* implicit */int) (unsigned char)126)) | (((/* implicit */int) (unsigned short)6204)))), (-417205912)))));
}
