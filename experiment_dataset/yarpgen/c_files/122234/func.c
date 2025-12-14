/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122234
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6132392492910931781LL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1])))));
            arr_5 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (7LL) : (-32LL))) : (((((/* implicit */_Bool) 538286429U)) ? (var_12) : (((/* implicit */long long int) 162840345)))))) << ((((((+(-162840346))) + (162840409))) - (11))));
            var_18 = ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 162840343)) ? (((/* implicit */unsigned long long int) -8LL)) : (8127493041860029042ULL)))) ? (min((var_11), (((/* implicit */unsigned int) -162840363)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1190718320199296767LL))))))))) : ((+((+(402653184LL))))));
        }
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (288230375077969920LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)4669)))))))) % (arr_1 [(signed char)8] [i_0])));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) 3665506569U);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_20 ^= ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1])) >= (((/* implicit */int) (unsigned char)30))));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 + 2])) ? (arr_8 [i_2 - 1] [i_2]) : (arr_8 [i_2 + 1] [i_2 - 1])));
    }
    var_21 = ((/* implicit */signed char) (((!(((13608118364490833391ULL) != (((/* implicit */unsigned long long int) 9223372036854775800LL)))))) ? (((/* implicit */long long int) ((var_5) << (((((((/* implicit */_Bool) var_10)) ? (6LL) : (((/* implicit */long long int) var_5)))) - (5LL)))))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))) : (var_1)))));
}
