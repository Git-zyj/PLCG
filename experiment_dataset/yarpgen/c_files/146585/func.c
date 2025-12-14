/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146585
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [(signed char)1])) : (((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 += ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1] [(unsigned char)16]))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)0)), ((~(((((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)20])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_7)))))))))));
    }
    var_21 = ((/* implicit */int) min((var_21), (min((var_5), (((((((/* implicit */int) var_12)) << (((var_10) - (183544645U))))) >> (((((/* implicit */int) var_3)) + (18754)))))))));
    var_22 = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (short)12804)) - (12797))))), (((((/* implicit */int) var_13)) | (((/* implicit */int) var_8))))))));
}
