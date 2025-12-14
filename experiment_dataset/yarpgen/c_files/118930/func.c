/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118930
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) (((!(var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)65535))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((+(((/* implicit */int) max(((unsigned short)65530), ((unsigned short)65514)))))) : ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)28)) > (((/* implicit */int) (unsigned short)65521)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) % (((/* implicit */int) (signed char)-18)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (~(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) / (arr_5 [i_1]))) % (((arr_5 [i_1]) & (var_11)))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((min((var_10), (((/* implicit */unsigned int) arr_4 [i_1])))) < (((/* implicit */unsigned int) ((arr_4 [i_1]) >> (((arr_4 [i_1]) - (1213706145)))))))))));
    }
    var_15 |= ((/* implicit */unsigned char) var_10);
}
