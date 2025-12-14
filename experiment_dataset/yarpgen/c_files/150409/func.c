/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150409
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
    var_19 = ((/* implicit */unsigned short) max(((+(min((((/* implicit */unsigned int) (unsigned short)25534)), (var_12))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_2] [i_0] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                            arr_15 [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)(-32767 - 1))))) & (((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_1] [i_2 + 1] [i_3 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_3 + 2] [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))));
                            arr_16 [i_0] [i_1] [i_0] [i_3] |= ((/* implicit */short) ((unsigned long long int) ((short) arr_12 [i_3] [i_2 - 1] [i_2 + 1] [i_1] [i_1] [i_0])));
                            arr_17 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) max(((~((~(var_2))))), (((/* implicit */long long int) var_11))));
                            arr_18 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(max((var_12), (arr_6 [i_0])))))) < (max((((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (var_16)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_24 [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_13 [i_5] [i_4 - 2] [(signed char)5] [i_1] [7U]);
                            arr_25 [i_0] [i_1] [i_1] = ((/* implicit */short) ((arr_22 [i_1] [i_1]) ? (max((var_13), (((/* implicit */int) var_3)))) : ((~((~(((/* implicit */int) arr_20 [i_5] [6U]))))))));
                            arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0]);
                            arr_27 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-32750)) ? (((((/* implicit */_Bool) 532122831452253210LL)) ? (668215149U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [12] [i_0] [(short)6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_28 [i_0] [i_4] [i_4] [i_5] [i_0] = ((/* implicit */short) ((_Bool) ((unsigned long long int) (!((_Bool)1)))));
                        }
                    } 
                } 
                arr_29 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_18)) ? (arr_19 [i_0] [i_1] [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0]))), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])));
            }
        } 
    } 
}
