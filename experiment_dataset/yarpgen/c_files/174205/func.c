/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174205
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) arr_12 [i_0 - 1] [i_0 - 2] [i_3]))) : (((/* implicit */int) max((arr_12 [i_0 + 2] [i_0 - 2] [i_3]), (arr_12 [i_0 - 1] [i_0 - 1] [i_2]))))));
                            var_18 = ((/* implicit */unsigned short) arr_9 [i_0] [i_2] [i_2]);
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65532))) ? (min((5317018914281537687LL), (arr_4 [i_1] [(_Bool)1] [i_2]))) : (((((/* implicit */long long int) var_13)) ^ (var_6))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) max((8796090925056ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_0 - 2] [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_20 &= ((((((/* implicit */int) (_Bool)1)) != (min((var_15), (((/* implicit */int) arr_6 [i_4])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_4] [i_4])) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_4])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_4] [i_4] [4LL]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)0)))))))));
        var_21 &= ((/* implicit */unsigned char) (+(((/* implicit */int) min((min((arr_3 [i_4] [i_4]), ((_Bool)1))), ((_Bool)1))))));
        arr_16 [i_4] &= ((/* implicit */signed char) 13U);
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (520888758639003049ULL)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)13]))) : (18U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_18 [i_5]), (((/* implicit */signed char) arr_17 [i_5])))))))) : (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_18 [i_5])))))))));
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_5])) != (((/* implicit */int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) arr_18 [i_5])))))))) & (((/* implicit */int) arr_17 [i_5]))));
    }
}
