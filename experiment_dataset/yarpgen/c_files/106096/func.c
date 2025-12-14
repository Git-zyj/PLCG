/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106096
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
    var_12 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                            arr_11 [i_0] [i_0] = ((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_2] [i_3]));
                            arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (1195035748U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12983)))))), (((((/* implicit */_Bool) arr_6 [15ULL])) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1] [i_3] [i_0] [i_1] [i_0]))))) : (-2LL)));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) min(((signed char)54), (((/* implicit */signed char) (_Bool)1))));
                arr_14 [i_0] = ((max((var_1), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))) - (var_2));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            arr_21 [i_0] [(signed char)18] [i_0] [(unsigned short)19] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (arr_3 [i_1])))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_0)))))) : (((/* implicit */int) max((((((/* implicit */int) (signed char)79)) != (((/* implicit */int) (unsigned short)4010)))), (((var_6) != (1LL)))))));
                            var_13 *= ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) max(((~((~(((/* implicit */int) var_3)))))), (((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))))));
}
