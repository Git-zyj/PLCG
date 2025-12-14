/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170473
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((short)-18), ((short)-18)))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_7))) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) * (arr_5 [i_0 - 2] [i_1])))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0 + 2])) ? (arr_5 [i_1 - 1] [i_0 - 2]) : (arr_5 [i_1 - 1] [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((arr_3 [i_0]), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [5LL])) || (arr_2 [i_0]))))))))));
                var_13 = ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) (unsigned short)25885)) : (((/* implicit */int) (unsigned short)39646)));
                var_14 = ((/* implicit */unsigned short) ((int) ((unsigned short) 0)));
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_0]) != (((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 2])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)3))))) : (((/* implicit */int) arr_0 [i_1 - 1]))))) & (min((min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))), (min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_1);
    var_17 *= ((/* implicit */unsigned char) var_3);
}
