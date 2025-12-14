/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125166
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -1373753057))))))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-574721460), (((/* implicit */int) (short)17564)))))))), (min((var_14), (((/* implicit */unsigned int) (signed char)55))))));
    var_17 = -1373753057;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)220)) | (1373753066)))));
            arr_8 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_1]))));
        }
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
    }
}
