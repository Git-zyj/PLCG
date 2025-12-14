/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181158
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((long long int) (unsigned char)15)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1 - 1] = ((/* implicit */signed char) var_3);
            arr_6 [i_1] [(unsigned char)3] [i_0] = ((/* implicit */_Bool) (unsigned char)15);
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_1 - 1] [(unsigned char)19]);
            arr_8 [(_Bool)1] [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
            arr_9 [i_0] = ((/* implicit */_Bool) (unsigned char)214);
        }
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            arr_14 [i_0] [(signed char)11] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
            arr_15 [i_2] [(signed char)20] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(_Bool)1] [i_2])) | (((/* implicit */int) (_Bool)1))));
            arr_16 [6U] [i_2] [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_0] [i_2 - 2]) % (arr_13 [i_2] [i_2 - 3])));
        }
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) : (var_4)))) / (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)161)), (2873404386U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (min((((/* implicit */long long int) (unsigned char)62)), (var_11)))))));
}
