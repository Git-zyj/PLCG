/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135968
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */int) var_9)) << (((((((((/* implicit */_Bool) var_6)) ? (min((-1008823723429163407LL), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1008823723429163407LL)))))) + (1008823723429163430LL))) - (20LL))));
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (1008823723429163418LL) : (-1008823723429163407LL)))))))) : ((-(((arr_0 [i_1]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((1008823723429163407LL) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_0] [12ULL] [i_0]))))) : (1008823723429163407LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1008823723429163420LL)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_9))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (1008823723429163443LL))) : (var_8)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])) - (var_4))), (((/* implicit */unsigned long long int) ((1008823723429163407LL) / (var_8))))))) ? (-1008823723429163418LL) : (1008823723429163406LL)));
        var_13 = ((/* implicit */unsigned long long int) (-((((-(var_7))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1008823723429163418LL)))))))));
        var_14 ^= (+(((/* implicit */int) ((signed char) var_0))));
    }
    for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1]))) : (var_8))), (((/* implicit */long long int) ((unsigned char) arr_8 [i_3 + 3] [i_3 + 4])))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_9 [i_3])))))) ? (((((/* implicit */_Bool) 1008823723429163409LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1008823723429163407LL))) : (arr_7 [i_3 + 3] [i_3 + 3])));
    }
    var_16 &= ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) var_4)))));
}
