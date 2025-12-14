/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158681
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (unsigned char)210)))) : (((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_0 [i_0 - 2])) - (253)))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (max(((unsigned char)108), ((unsigned char)116)))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)63211)) > (((/* implicit */int) (signed char)-15)))) && (((/* implicit */_Bool) (+(var_5))))))) - ((~((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_2 [i_1] [i_1]));
        var_17 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) var_5)), ((-(arr_4 [i_1]))))));
    }
}
