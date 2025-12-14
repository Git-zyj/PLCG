/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122197
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (short)1024)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (short)25385)))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) 1703939259))), (((((/* implicit */_Bool) 7963117295259446353LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20057))) : (868521780U))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_2])))));
            var_19 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((unsigned short) -1703939272)))) ^ (((/* implicit */int) (unsigned short)45480))));
            var_20 *= ((/* implicit */short) arr_3 [i_0] [i_2]);
            arr_7 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((min((5315805152463177052ULL), (((/* implicit */unsigned long long int) 1526233594)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)249)), (arr_5 [i_2]))))))) >> (((min((((/* implicit */int) ((short) arr_0 [i_0] [i_0]))), ((-(((/* implicit */int) arr_6 [i_0] [18])))))) - (67)))));
        }
        var_21 ^= ((/* implicit */unsigned char) (-(((var_4) ? (((((/* implicit */_Bool) 6989767971152331785LL)) ? (-901339186133056424LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)25)))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16140901064495857664ULL)) ? (((/* implicit */int) (short)-13113)) : (((/* implicit */int) (unsigned char)0))));
    }
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17652)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (var_14))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (max((((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))))), (((/* implicit */unsigned int) var_3))))));
}
