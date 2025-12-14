/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142724
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
    var_17 = ((/* implicit */_Bool) min((min((min((var_6), (var_6))), (var_3))), (((/* implicit */unsigned long long int) var_16))));
    var_18 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [(unsigned short)1]))) ? (((/* implicit */unsigned long long int) var_10)) : (arr_2 [i_0])));
        var_20 -= ((/* implicit */signed char) var_6);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */unsigned long long int) arr_1 [i_0] [10U])))), (((/* implicit */unsigned long long int) (unsigned char)133))))) ? (-4274849258947798896LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [1ULL]))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
        var_23 += var_15;
        arr_7 [i_1] = ((/* implicit */_Bool) 72057594037927936LL);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) var_15))) && (((/* implicit */_Bool) ((short) var_7))))) ? ((~(((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_2 [i_1]))) != ((+(var_1)))))))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)14532), (var_16))))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) / (arr_5 [i_2])))));
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) : (1954399949U)));
    }
}
