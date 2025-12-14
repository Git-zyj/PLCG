/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183354
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
    var_10 = ((/* implicit */short) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) (unsigned short)31))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 += (-(min(((-(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_2])))), (arr_7 [i_1]))));
                    var_12 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_7 [i_1]) ^ (((/* implicit */int) ((_Bool) arr_5 [i_2]))))))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)26)) / (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)151)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65519))))));
    var_14 += ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)56))));
}
