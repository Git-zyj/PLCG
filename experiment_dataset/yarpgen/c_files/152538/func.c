/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152538
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_15 *= ((/* implicit */_Bool) var_6);
        var_16 = ((((arr_0 [i_0]) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) 920666419U)), (var_12))))) + (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))))), (((((/* implicit */_Bool) 2895565392U)) ? (2789138852U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_2])) % (((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_2] [i_4])) >> (((min((((/* implicit */unsigned int) ((short) var_9))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) : (arr_8 [i_1] [i_1]))))) - (108U)))));
                        var_19 = ((/* implicit */signed char) arr_2 [i_1]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (1505828450U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (unsigned char)17)))))));
                    }
                } 
            } 
        }
        arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_4), (((/* implicit */short) arr_13 [i_1]))))), (2789138838U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((1280810641U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))))))) : ((+(var_12)))));
    }
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_12)))) ? (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-31327)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_8))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) ((unsigned short) var_13)))));
}
