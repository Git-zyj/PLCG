/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118490
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((~(33292288U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)10)))))));
        arr_4 [(unsigned char)16] &= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) arr_0 [(unsigned short)0])) : (((((/* implicit */int) var_3)) >> (((3553905318141855557LL) - (3553905318141855553LL))))))) : (((/* implicit */int) arr_0 [0LL]))));
    }
    var_12 = ((/* implicit */_Bool) var_6);
    var_13 = ((/* implicit */short) ((var_8) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6119388404215154711LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))) : ((~(((/* implicit */int) min((var_5), ((_Bool)1))))))));
    var_14 ^= ((max((((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned long long int) var_6)), (var_4))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))));
    /* LoopSeq 2 */
    for (short i_1 = 3; i_1 < 21; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */short) (!(((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) > ((((_Bool)1) ? (-8744764236397536334LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) > (((/* implicit */int) (unsigned char)156)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45991)) * ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((long long int) (!((_Bool)1))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_12 [12LL] [i_2] &= ((/* implicit */unsigned int) ((max((min((8744764236397536337LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_11)))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)38))))));
        arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) - (arr_10 [i_2])));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_21 [(unsigned short)8] [i_3] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_4] [i_3])) ? (arr_14 [i_3] [(unsigned short)5]) : (arr_14 [i_3] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_11))))) - (((/* implicit */int) ((_Bool) (signed char)-1))))))));
                    arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) min(((~(-8744764236397536352LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 8744764236397536351LL)))))));
                }
            } 
        } 
    }
}
