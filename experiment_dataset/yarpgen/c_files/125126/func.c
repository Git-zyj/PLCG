/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125126
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
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) (short)29300);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_18 = (+(max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))), (3318687116U))));
            var_19 &= ((/* implicit */unsigned int) 9223372036854775778LL);
            var_20 = ((/* implicit */unsigned int) arr_3 [i_1]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned int) ((short) (+(2147483627))));
            var_21 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483627))));
        }
        for (short i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            var_22 -= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-18284)))) >= (max((((-2147483640) + (((/* implicit */int) (short)17294)))), (2147483647)))));
            arr_12 [i_3] = ((/* implicit */_Bool) ((unsigned short) max((arr_7 [i_0] [i_0 + 3] [i_0 - 2]), (arr_7 [i_0] [i_0 + 2] [i_0 + 2]))));
        }
        arr_13 [i_0] = ((/* implicit */int) ((max((max((var_9), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_7))))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2147483610)) ? (var_14) : (((/* implicit */unsigned int) var_5)))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0]))))))))));
        var_23 = ((/* implicit */long long int) ((((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_5 [i_0]))))) & (2147483647))) >= (((((-2147483626) + (2147483647))) >> (((1614060909) - (1614060888)))))));
        var_24 ^= ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((var_0) ^ (-6425573722592626846LL)))))));
    }
    var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 2924022650204646260ULL)))) ? (var_16) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) (unsigned short)10887)))))))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (int i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            for (unsigned int i_6 = 4; i_6 < 17; i_6 += 2) 
            {
                {
                    arr_23 [i_5] = ((/* implicit */unsigned int) arr_19 [i_5] [i_5 + 1] [i_6 + 2]);
                    var_26 -= ((/* implicit */signed char) ((var_13) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_4] [i_6]), (((/* implicit */unsigned int) (unsigned short)3459))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-123))))) : (arr_18 [i_5 - 1] [i_5 - 1] [i_6 + 1]))))));
                }
            } 
        } 
    } 
}
