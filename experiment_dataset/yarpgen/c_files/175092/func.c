/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175092
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
    var_15 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
            var_16 = ((/* implicit */unsigned char) ((signed char) var_9));
        }
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((7U) == (((/* implicit */unsigned int) -114397345)))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (min((arr_7 [i_0] [i_2]), (9225204106795097439ULL)))));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_10 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((unsigned long long int) var_5)) != (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
            arr_11 [i_0] = ((/* implicit */unsigned char) ((signed char) ((206357308061933189ULL) / (((/* implicit */unsigned long long int) var_11)))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1565397586U)) ? (-368355843) : (((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_20 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) max((arr_8 [i_0] [i_0]), (((/* implicit */long long int) var_3))))))));
            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 657350054U)) ? ((-(1565397586U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2071865061)) && (((/* implicit */_Bool) (unsigned short)33632)))))));
        var_23 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (~(-1985574961367142131LL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : (var_2))) : (max(((~(((/* implicit */int) (unsigned char)37)))), (((/* implicit */int) (_Bool)1))))));
}
