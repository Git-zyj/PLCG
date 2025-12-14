/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110164
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                    arr_11 [i_2] [i_2] [(short)10] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)11)) << (((min((((((/* implicit */_Bool) (signed char)-48)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2]))))), (((/* implicit */unsigned int) var_10)))) - (32041U)))));
                    var_13 = ((/* implicit */unsigned int) (-(-1)));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */signed char) var_8);
                    arr_14 [(signed char)16] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)20);
                    arr_15 [i_1] = ((/* implicit */int) ((unsigned int) var_8));
                }
                var_15 *= ((signed char) ((unsigned long long int) max((arr_13 [(signed char)12] [(signed char)12]), (((/* implicit */unsigned short) var_11)))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (signed char)-50)))))) ? (((((/* implicit */_Bool) (short)-8612)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) : (var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1])) * (((/* implicit */int) arr_5 [i_0] [i_1])))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((short) ((unsigned long long int) var_7)))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-73)) ? (69015077) : (((/* implicit */int) (unsigned char)172))))), (max((var_3), (((/* implicit */unsigned int) (signed char)-106))))))));
}
