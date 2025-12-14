/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164876
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (signed char)11))));
    var_12 = ((/* implicit */int) var_4);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (((+(arr_0 [i_0] [i_0]))) - (((unsigned int) arr_0 [3ULL] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_14 = (-(arr_0 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = (((-(((/* implicit */int) (unsigned char)12)))) ^ ((~(((/* implicit */int) ((unsigned char) (unsigned short)9952))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_15 = ((/* implicit */_Bool) (unsigned short)42144);
        arr_6 [i_1] [i_1 + 2] = ((/* implicit */unsigned char) var_8);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((var_8), (((/* implicit */unsigned short) (unsigned char)28)))), (((/* implicit */unsigned short) ((short) (short)-20))))))));
        arr_11 [0ULL] [i_2] = ((/* implicit */short) ((unsigned int) ((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [8]))))));
        arr_12 [i_2 - 1] = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) arr_4 [i_2])))));
        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned int) arr_4 [i_2])), (arr_8 [i_2] [i_2 - 1]))))) ? (((/* implicit */int) ((unsigned short) var_7))) : ((+((+(((/* implicit */int) (signed char)-6))))))))));
        var_17 = ((/* implicit */unsigned char) arr_1 [i_2 - 1] [i_2]);
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned char) (-((+(6916776214934978275ULL))))));
        var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_14 [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23380)))))) ? (((arr_14 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)42139))))))));
    }
    var_20 = ((/* implicit */int) ((unsigned char) var_2));
}
