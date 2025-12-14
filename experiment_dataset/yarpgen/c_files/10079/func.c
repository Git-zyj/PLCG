/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10079
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) -717254991);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((14630344431074488863ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))) ? (((((/* implicit */_Bool) -717254991)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)19693)))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) 4294967295U)))))) <= (min((((((/* implicit */_Bool) 2147483647)) ? (14630344431074488861ULL) : (((/* implicit */unsigned long long int) 4294967269U)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_14))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned char)25)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), ((unsigned short)65535))))) ^ (min((((/* implicit */unsigned int) (short)27108)), (arr_5 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (1789390551U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) << (((((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) + (1716737950584854261LL)))));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned short)40747)))))))) ? (((/* implicit */unsigned int) ((int) arr_8 [i_2 + 3]))) : (((((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) 2147483647)))) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
        var_23 = ((/* implicit */long long int) (short)32756);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2505576741U) != (((/* implicit */unsigned int) 717254990))))) >> ((((~(arr_9 [i_3]))) - (1350601338U)))));
        arr_13 [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) arr_4 [i_3])), (arr_8 [(signed char)15])));
    }
    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(1356721141)))) ? (var_9) : (((/* implicit */int) ((signed char) var_18))))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((var_6) != (((/* implicit */int) var_16))))) : ((-(((/* implicit */int) var_16))))))));
    var_25 = ((/* implicit */unsigned short) (_Bool)1);
}
