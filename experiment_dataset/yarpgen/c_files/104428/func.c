/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104428
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
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (short)17556))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) min((3203053503U), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) : (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(5010908806779838248ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13435835266929713367ULL)) && (((/* implicit */_Bool) (signed char)98)))))) : (3422917488620554183LL)));
                var_15 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (short)-6972))))) - ((~(((/* implicit */int) (short)32767))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_0))));
}
