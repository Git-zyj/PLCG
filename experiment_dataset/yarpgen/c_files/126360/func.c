/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126360
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
    var_15 = ((/* implicit */long long int) var_1);
    var_16 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_6 [(signed char)23] [i_0] [i_2] [14LL] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-121)) / (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) min((min((min((var_1), (((/* implicit */unsigned long long int) arr_0 [2LL])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_8)))))), (((/* implicit */unsigned long long int) min(((unsigned short)53267), (((/* implicit */unsigned short) (signed char)31)))))));
    }
    var_19 = ((/* implicit */signed char) max(((+(18446726481523507200ULL))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_5)))))))));
}
