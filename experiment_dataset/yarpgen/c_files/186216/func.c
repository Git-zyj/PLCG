/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186216
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
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ ((-(((((/* implicit */_Bool) -768510538949330219LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 &= ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -768510538949330219LL))))), ((unsigned short)16476)));
        var_16 *= ((/* implicit */int) ((unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)))) == ((-(((/* implicit */int) (unsigned short)49052)))))));
        var_17 = ((/* implicit */signed char) (_Bool)1);
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 2097151)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) % (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))))));
    }
}
