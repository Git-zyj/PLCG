/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132744
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)23)) | (((/* implicit */int) (unsigned char)71))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_1 - 3]))))) : (arr_1 [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_11 = max(((~(((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 570809709U)) ? (((/* implicit */int) max(((unsigned char)107), (var_4)))) : (((/* implicit */int) var_0))))));
}
