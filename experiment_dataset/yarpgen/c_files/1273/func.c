/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1273
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((var_6) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    var_11 = ((/* implicit */unsigned long long int) var_4);
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((unsigned int) (signed char)28))), ((-(0LL))))), (min((((long long int) var_8)), (((/* implicit */long long int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 += ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min(((short)25178), (((/* implicit */short) (signed char)2))))));
                var_14 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) 8396697770998982376ULL)))) ? ((~(((/* implicit */int) (short)-25178)))) : ((+(((/* implicit */int) (short)-1)))))), ((~(((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (+(var_1))))) ? (((arr_2 [i_0] [i_1]) << (((arr_2 [i_0] [i_0]) - (10948495997617993501ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25178))) >= (min((((/* implicit */unsigned long long int) -908203300)), (arr_5 [i_0])))))))));
                    var_17 *= ((/* implicit */_Bool) ((unsigned short) min(((+(((/* implicit */int) (unsigned short)36083)))), (((/* implicit */int) ((((/* implicit */long long int) -1113719479)) <= (-7839967603502311776LL)))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(var_3)))), (arr_2 [i_0] [i_2 - 2]))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 0ULL)))))));
}
