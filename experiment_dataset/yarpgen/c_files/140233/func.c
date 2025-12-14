/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140233
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
    var_17 -= ((signed char) max((((/* implicit */signed char) (!(var_5)))), (((signed char) (signed char)-85))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)-85)))))) / ((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_11)))))));
                    var_19 ^= ((/* implicit */unsigned short) ((max((((/* implicit */int) (signed char)84)), (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (short)-27165)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */short) (((-(((/* implicit */int) var_4)))) > (max((var_6), (((/* implicit */int) var_5))))))), (((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (var_2))))));
}
