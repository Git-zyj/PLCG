/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128093
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((arr_1 [i_0]) == (arr_1 [i_0]));
        var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) 105822741240004824LL)) ? (((/* implicit */int) (unsigned short)8773)) : (((/* implicit */int) (unsigned short)56734))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) ((unsigned char) arr_0 [i_0] [i_0])))), (min((arr_1 [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))));
    }
    var_12 = ((/* implicit */signed char) (((~(min((var_9), (((/* implicit */unsigned int) var_3)))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)56752)))))))));
    var_13 = ((/* implicit */_Bool) (short)-8965);
}
