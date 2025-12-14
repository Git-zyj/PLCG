/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158846
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
    var_10 = ((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (_Bool)1))));
    var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)31532)) % (((/* implicit */int) (unsigned short)33986))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (short)-1849)) : (((/* implicit */int) (signed char)16))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((2309811706U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31532))))))) + (var_3)));
        arr_4 [i_0] = var_9;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) var_5);
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)126)))))))));
        var_14 = ((/* implicit */_Bool) max((((int) var_8)), (((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) arr_1 [i_1]))))));
        arr_9 [(_Bool)1] = ((/* implicit */_Bool) (-(var_0)));
    }
    for (long long int i_2 = 4; i_2 < 22; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (arr_11 [i_2] [i_2]))))) - (((((/* implicit */_Bool) (unsigned short)11043)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65244))) : (3666506453U)))))));
        arr_13 [i_2] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned short)13879)) || (((/* implicit */_Bool) 7731498553805900808LL)))));
        var_15 = ((/* implicit */int) ((min((((arr_11 [i_2 + 2] [i_2 - 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2 - 2]))) : (2794716692U))), (((/* implicit */unsigned int) ((unsigned short) arr_10 [i_2] [i_2]))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (min(((unsigned short)31535), (((/* implicit */unsigned short) (_Bool)1))))))))));
    }
    var_16 &= ((/* implicit */signed char) var_4);
    var_17 = ((/* implicit */int) var_2);
}
