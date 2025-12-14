/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109668
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_3 [(unsigned char)13] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (var_9)))), (((((/* implicit */_Bool) 7574571637289934782ULL)) ? (((/* implicit */unsigned long long int) arr_0 [11U])) : (0ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [(unsigned char)6] [i_0])), ((unsigned char)255)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_10))))))))));
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((((/* implicit */long long int) var_9)) < (arr_0 [i_0])))))), (min((arr_0 [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    var_14 = ((/* implicit */unsigned int) var_1);
}
