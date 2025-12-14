/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124460
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
    var_17 = ((/* implicit */short) (+(var_1)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) : (var_7));
        var_18 |= (+(((((/* implicit */_Bool) (+(var_7)))) ? ((+(var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (arr_0 [i_0]))))));
    }
    var_19 = ((/* implicit */long long int) ((10131720030526980145ULL) * (((/* implicit */unsigned long long int) (((~(4294967291U))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)116))))))))));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned long long int) 764694417)), (var_5))))))));
}
