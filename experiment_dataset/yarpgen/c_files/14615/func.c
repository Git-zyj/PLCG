/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14615
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))) > (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_11 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_1])))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) var_6))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) ? ((+(arr_0 [i_1 + 2]))) : ((-((+(((/* implicit */int) var_6)))))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (short)32767))))))));
                    var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_2))) ? (max(((-(arr_0 [i_0]))), (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_1)) ^ ((+(535822336)))))));
                    arr_8 [i_1] [i_0] [i_2] [i_1 + 2] = var_1;
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_13 = ((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_12 [i_1] [i_1 + 1] [i_1 + 1]));
                    var_14 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_3] [i_1 - 2] [i_0] [i_0])) - ((-(((/* implicit */int) var_9))))));
                }
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_15 = var_4;
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [i_1 + 1]))) ? (max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_1 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_5 + 1])) : (((/* implicit */int) arr_17 [i_0] [i_5] [i_1 - 2] [i_5 - 1] [i_0] [i_5]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max(((+((+(7708908111633046385LL))))), (-7708908111633046386LL)));
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) var_5);
                var_19 = ((/* implicit */signed char) max((7708908111633046370LL), (7708908111633046367LL)));
            }
        } 
    } 
}
