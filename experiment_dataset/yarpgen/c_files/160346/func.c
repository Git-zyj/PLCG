/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160346
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
    var_19 = ((/* implicit */signed char) var_18);
    var_20 += ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) arr_1 [(unsigned short)17]);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1249188021)) == (arr_1 [i_0]))))));
        var_23 *= ((/* implicit */short) (~(var_5)));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23585))) ^ (arr_1 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_0)))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_25 = min((var_5), ((~((-(((/* implicit */int) (signed char)32)))))));
        var_26 = ((/* implicit */short) min((((((/* implicit */int) (signed char)32)) - (((((/* implicit */int) (signed char)-32)) ^ (((/* implicit */int) var_13)))))), (min((((/* implicit */int) (_Bool)1)), (202788772)))));
    }
}
