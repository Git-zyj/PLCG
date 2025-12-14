/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129892
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] [(short)4] |= ((/* implicit */unsigned short) -72054883461121611LL);
        var_12 = ((/* implicit */unsigned int) ((((((10085679028489588489ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) arr_3 [3LL]))) : (min((-1675940999), (((/* implicit */int) (signed char)-5)))))) % (((/* implicit */int) (signed char)92))));
        var_13 = ((/* implicit */long long int) (((+(((/* implicit */int) min((((/* implicit */short) var_1)), (arr_1 [i_0] [i_0])))))) / (((/* implicit */int) ((var_3) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (arr_3 [3ULL]))))))));
    }
    var_14 ^= ((((((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_1)) - (116)))))) != ((-(1116892707587883008ULL)))))) != ((~(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)1))))))));
    var_16 = ((/* implicit */long long int) ((short) ((((/* implicit */int) var_0)) != ((~(((/* implicit */int) var_7)))))));
}
