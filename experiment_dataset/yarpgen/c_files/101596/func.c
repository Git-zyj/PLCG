/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101596
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
    var_15 -= ((/* implicit */short) ((16131437808261365375ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) arr_2 [i_0]);
        var_17 -= ((/* implicit */unsigned long long int) (signed char)-14);
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)2] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [(signed char)6] [i_0 - 2])))))));
        var_19 *= ((/* implicit */unsigned short) var_9);
        var_20 = ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_21 *= ((/* implicit */short) max((((unsigned short) ((((/* implicit */_Bool) 5)) ? (3860768049507664401ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55255)))))), (((/* implicit */unsigned short) (signed char)-18))));
        var_22 = ((/* implicit */long long int) (signed char)26);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((max((12184152922054519131ULL), (arr_6 [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-43)), (var_3))))));
        var_24 = ((/* implicit */short) (signed char)-42);
        var_25 = ((/* implicit */_Bool) -3284453002573031475LL);
    }
}
