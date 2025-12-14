/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164913
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) (~(var_18)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51524))) : (var_10))) : (var_10))), (((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 2147483647)))))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(var_10)))))) && (((/* implicit */_Bool) var_13))));
    var_21 = ((/* implicit */long long int) ((unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (unsigned char)23)) : (min((((/* implicit */int) (unsigned char)23)), (2147483647))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) - (39155)))))))))));
        var_23 += ((/* implicit */long long int) ((short) (short)27687));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        var_25 &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_1] [8LL])))) ^ (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_4 [i_1 + 2]))))) < (min((((/* implicit */unsigned int) arr_2 [i_1 + 2] [i_1 + 4])), (var_10)))));
        arr_6 [i_1 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3893553995U)) ? (2211953857743252217LL) : (((/* implicit */long long int) 2147483647))));
        var_26 ^= ((/* implicit */unsigned long long int) ((unsigned int) (-(min((1535679167), (var_9))))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (-(arr_1 [i_1]))))));
    }
}
