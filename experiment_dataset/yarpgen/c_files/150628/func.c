/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150628
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(4294967295U)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))) <= (((((/* implicit */int) (!(var_11)))) % (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~((((+(var_6))) << (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)31744)))))))));
        var_15 = (+((((+(7884828240200401954LL))) << (((((/* implicit */int) (!(var_8)))) - (1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (((~(((/* implicit */int) var_2)))) < ((~(((/* implicit */int) arr_1 [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3862552118U))))) ^ ((-(((/* implicit */int) (signed char)-68))))));
    }
    var_17 += ((/* implicit */int) (-((+(((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    var_18 = (+((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) ((432415178U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))))))));
}
