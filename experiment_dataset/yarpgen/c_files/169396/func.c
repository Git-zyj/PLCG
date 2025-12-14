/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169396
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) var_1)) : ((+(((((/* implicit */_Bool) 50582088U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) && (((((/* implicit */int) (unsigned char)197)) != (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(max((((/* implicit */long long int) (unsigned short)7974)), (var_3))))))));
                var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (signed char)71))))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((max((((/* implicit */unsigned long long int) (unsigned char)60)), (var_10))) / (((/* implicit */unsigned long long int) (-(-5467969099535802644LL)))))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)179)), (6435713222735193869LL)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_4);
}
