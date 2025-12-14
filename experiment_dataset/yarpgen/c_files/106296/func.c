/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106296
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned int) min((var_10), ((+((-(min((2808870840U), (((/* implicit */unsigned int) var_9))))))))));
            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) arr_4 [i_0] [4]))));
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1])))))))));
        }
        var_13 ^= ((/* implicit */int) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_1 [i_0 - 1]))) == ((~(((/* implicit */int) arr_1 [i_0 - 1])))))))));
    }
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-((+(((/* implicit */int) (short)-20385)))))))));
}
