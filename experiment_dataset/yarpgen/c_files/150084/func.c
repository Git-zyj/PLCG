/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150084
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
    var_16 *= var_15;
    var_17 = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (min((((/* implicit */unsigned long long int) var_5)), (var_8))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) -6434189010233716415LL);
        var_19 = max(((unsigned char)255), ((unsigned char)44));
        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) min((var_3), (((/* implicit */short) arr_4 [i_1] [i_1]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11)) || (((/* implicit */_Bool) (unsigned short)17))))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_14))));
    }
    var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (max((((/* implicit */int) (_Bool)1)), (var_12))) : (((/* implicit */int) var_4))))));
    var_24 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-102))))) < (((((/* implicit */int) var_9)) % (((/* implicit */int) var_11))))))), ((-((+(((/* implicit */int) var_4))))))));
}
