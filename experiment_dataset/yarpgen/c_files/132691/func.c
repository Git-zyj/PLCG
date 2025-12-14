/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132691
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_3 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >= (((/* implicit */int) arr_4 [i_0] [i_1]))))))) >= ((~(((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                arr_6 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_2 [i_0])))), (max((0ULL), (((/* implicit */unsigned long long int) 3212976386210757905LL))))))) ? (arr_1 [i_1]) : ((+(((/* implicit */int) min(((unsigned short)65533), (((/* implicit */unsigned short) (_Bool)1))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max(((+((~(((/* implicit */int) (unsigned char)3)))))), (min((((((/* implicit */int) var_9)) * (((/* implicit */int) var_0)))), (((/* implicit */int) ((var_4) != (((/* implicit */int) var_10)))))))));
    var_14 |= ((/* implicit */signed char) (((((~(((/* implicit */int) var_9)))) == (var_4))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (min((((/* implicit */int) var_9)), (var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)18))))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_11) ? (((/* implicit */int) var_5)) : (var_4))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */short) var_0)), (var_9))), (((/* implicit */short) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_3)))))))))));
}
