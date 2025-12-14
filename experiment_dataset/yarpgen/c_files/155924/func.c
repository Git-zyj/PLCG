/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155924
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
    var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (short)-1041)), ((~(((/* implicit */int) var_17)))))) <= (max((((/* implicit */int) (unsigned short)46748)), (min((((/* implicit */int) (short)-7492)), (1048575)))))));
    var_21 = ((/* implicit */unsigned int) ((((var_8) | (((/* implicit */unsigned long long int) -393254356321948738LL)))) ^ (((/* implicit */unsigned long long int) 393254356321948737LL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_22 = ((/* implicit */short) ((max((arr_2 [i_0]), (arr_2 [i_0]))) << (((max((arr_2 [i_0]), (arr_2 [i_0]))) - (4530877508732611612LL)))));
        arr_4 [i_0] = ((short) arr_0 [i_0]);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_2))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        var_24 ^= ((/* implicit */short) ((max((arr_0 [i_1 - 4]), (arr_0 [i_1 + 1]))) ? (min((arr_3 [i_1 - 2]), (18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? ((+(13176618585664325324ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (393254356321948737LL) : (-393254356321948753LL))))))));
        var_25 = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) ^ (var_5))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) 393254356321948737LL)))) ? (((((/* implicit */int) var_2)) % (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) arr_0 [i_1]))))))))))));
    }
}
