/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168267
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (short)-32766)) < (((/* implicit */int) (short)-32763))))), (var_3)));
    var_12 ^= ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4116921526U)), (7845965654344510004LL)))), ((~(((unsigned long long int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-96)))) <= (((long long int) arr_0 [19LL])))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((max((7845965654344510004LL), (((/* implicit */long long int) (unsigned short)35789)))) < (min((var_0), (((/* implicit */long long int) (unsigned char)172))))));
        var_14 ^= ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */int) (unsigned char)59)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (94))))) > (1605640549))));
    }
    for (int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        arr_7 [(short)12] |= ((/* implicit */_Bool) arr_1 [i_1] [i_1]);
        var_15 += ((/* implicit */_Bool) 9223372036854775807LL);
        var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-24)) & (((/* implicit */int) arr_1 [i_1] [i_1]))))) : (0U)))));
        var_17 |= ((((/* implicit */_Bool) (unsigned char)180)) ? (arr_4 [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))));
        arr_8 [6LL] |= ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) arr_12 [i_2]);
        var_19 ^= ((/* implicit */_Bool) (~(min((((((/* implicit */int) arr_1 [i_2] [i_2])) - (((/* implicit */int) arr_10 [i_2])))), (((/* implicit */int) ((short) var_5)))))));
        var_20 = ((/* implicit */unsigned short) arr_0 [i_2]);
    }
}
