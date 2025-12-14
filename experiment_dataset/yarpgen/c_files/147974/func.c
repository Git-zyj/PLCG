/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147974
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
    var_10 = ((/* implicit */signed char) min((var_10), (var_0)));
    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((max((3954736569U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_4)))) : (min((((unsigned int) 4ULL)), (((/* implicit */unsigned int) min((var_1), (var_1))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 ^= ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)8435)))) << (((arr_0 [i_0]) - (2268613166U)))))) ? (min((((arr_0 [i_0]) >> (((((/* implicit */int) (short)-12600)) + (12628))))), (arr_0 [i_0]))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned short)60897))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (-2147483647 - 1))))));
        var_13 = ((/* implicit */unsigned short) max((((signed char) (short)12233)), (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) ((((unsigned int) min((arr_3 [i_1 + 1]), (arr_3 [i_1])))) - (max((((unsigned int) 9509069674670985054ULL)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])))))))));
        var_14 ^= ((/* implicit */unsigned short) ((min((arr_3 [i_1 - 1]), (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))) <= (((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (9223372036854775798LL))))));
    }
    var_15 = max(((_Bool)1), (((((/* implicit */_Bool) var_5)) && (var_1))));
    var_16 = ((/* implicit */_Bool) var_0);
}
