/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186319
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_6))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (72057593501057024ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-10338)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)7525)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) arr_1 [i_0])))))), ((~(((((/* implicit */_Bool) (short)-10329)) ? (10162902355438139656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10370)))))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 446259994U))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 1]))))) : ((+(arr_0 [i_0 + 3])))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (((+(8283841718271411967ULL))) == (arr_0 [i_0 + 1])))) << ((((((-(3987064994709986779ULL))) / (arr_0 [i_0 - 1]))) - (37ULL)))));
    }
}
