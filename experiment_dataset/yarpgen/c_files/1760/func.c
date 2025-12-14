/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1760
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
    var_10 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), (var_6)))), (var_3)))));
    var_11 = ((/* implicit */_Bool) (~((+(3485030047U)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (+(((/* implicit */int) var_0))))))));
        var_13 *= ((/* implicit */_Bool) ((long long int) 809937252U));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) (-((+((+(((/* implicit */int) arr_5 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */long long int) min(((~(3005504258U))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_0)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (+((-2147483647 - 1))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_4)), (var_8))), ((-((~(456558128U)))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)4941)), (8282526784037507622LL)));
        var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_12 [i_2]), (((/* implicit */unsigned long long int) var_1)))))))), ((~(((unsigned long long int) var_8))))));
        arr_13 [i_2] = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_5))))))));
    }
}
