/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127270
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
    var_19 &= var_7;
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (signed char)(-127 - 1)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) var_0);
        var_22 |= ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) var_10))))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), ((unsigned short)1)))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned int) var_7))));
        var_24 = (i_0 % 2 == 0) ? (((/* implicit */short) max((((/* implicit */int) var_8)), (((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) << (((((/* implicit */int) arr_3 [i_0 - 1] [i_0])) - (63)))))))) : (((/* implicit */short) max((((/* implicit */int) var_8)), (((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) << (((((((/* implicit */int) arr_3 [i_0 - 1] [i_0])) - (63))) - (14))))))));
        var_25 = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))) % (arr_0 [i_0 + 1])))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_14))) - ((-(((/* implicit */int) var_16))))))) ? (-5606103370284044931LL) : (((/* implicit */long long int) (-((+(((/* implicit */int) var_10)))))))));
        var_27 = ((unsigned short) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_9)) ? (5606103370284044938LL) : (-5606103370284044953LL)))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-5606103370284044931LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) var_17)))))) * (max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) 245635430)) ? (-5606103370284044939LL) : (5606103370284044931LL)))))));
}
