/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130820
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
    var_19 = ((/* implicit */signed char) min((max((min((var_12), (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14))))), (min((var_10), (var_4)))))));
    var_20 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) max((((/* implicit */int) (short)(-32767 - 1))), (-886042740)))), (min((4141645662U), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10124))))), ((~(var_13))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)-14174)))), ((-(var_10)))))), ((+(min((((/* implicit */unsigned int) var_1)), (arr_2 [i_0]))))))))));
        var_22 = ((/* implicit */int) min((var_22), ((+(min((((/* implicit */int) (!(((/* implicit */_Bool) 1161958684465502500LL))))), ((~(((/* implicit */int) (_Bool)1))))))))));
        var_23 = ((/* implicit */unsigned short) min(((+((+(((/* implicit */int) arr_0 [i_0])))))), ((+(min((2013265920), (((/* implicit */int) (unsigned char)162))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_24 = ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)78))))));
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [4])))))));
    }
    var_25 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (min((((/* implicit */unsigned int) var_5)), (1849599411U))))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_0)))))))));
}
