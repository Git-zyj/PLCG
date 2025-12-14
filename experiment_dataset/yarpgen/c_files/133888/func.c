/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133888
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_10 = ((((25ULL) >= (arr_5 [i_0] [i_1]))) ? (min((arr_6 [i_1 - 1] [i_1 - 2]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((min((6421586313609563542ULL), (((/* implicit */unsigned long long int) (signed char)20)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */long long int) var_9)))))))))));
                var_11 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                var_12 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)25419)), (arr_5 [i_1] [i_0])))) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) min((arr_0 [i_1]), (((/* implicit */long long int) var_4)))))))));
                var_13 = ((/* implicit */unsigned long long int) min((60790275469742355LL), (((/* implicit */long long int) arr_4 [(short)20] [i_0] [i_1]))));
                arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 2] = ((/* implicit */_Bool) min((min((arr_4 [i_0] [i_1 - 1] [i_0]), ((signed char)95))), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 225812637U)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-26894)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1292929282)))))))), (var_9)));
    var_15 += ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37461)))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_8))))), (min((-3LL), (((/* implicit */long long int) var_4))))))) || (((/* implicit */_Bool) var_1))));
    var_17 *= ((/* implicit */long long int) ((((/* implicit */long long int) var_9)) == (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-31058))))) ? (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (unsigned short)9564)) : (((/* implicit */int) var_8))))) : (var_1)))));
}
