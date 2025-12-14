/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11471
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
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)7056)) || (((/* implicit */_Bool) (short)-28687))))) - ((-(((/* implicit */int) var_17))))))) ? (((/* implicit */int) max(((unsigned short)46071), (((/* implicit */unsigned short) (signed char)102))))) : (max((-1213795504), (((/* implicit */int) (short)-28687))))));
                            arr_13 [i_0] [i_1 + 1] [i_0] [i_0] [i_1 + 1] [(unsigned char)3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_2)), (((long long int) max((1213795497), (((/* implicit */int) var_16)))))));
                            arr_14 [i_0] [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28691)) ? (((/* implicit */int) ((short) var_18))) : (((/* implicit */int) ((((((/* implicit */_Bool) 1213795504)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5))) <= (((/* implicit */long long int) ((/* implicit */int) (short)28686))))))));
                            arr_15 [3LL] [i_1 + 1] [i_1 + 1] [3LL] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (3102787137U) : (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) arr_7 [i_3] [i_2 + 1] [i_0 - 1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(757063002)))) != (((((/* implicit */_Bool) -1213795505)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) : (4886024287547697574ULL))))))));
                            arr_16 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (unsigned short)46071);
                        }
                    } 
                } 
                arr_17 [i_0] [i_1 + 1] = ((((/* implicit */_Bool) (-(max((arr_1 [i_0]), (757063002)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_1 + 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 4] [i_0 - 3] [i_1 + 1] [i_1 + 1] [i_0 - 3] [i_0 - 4]))))) : (((/* implicit */long long int) (((-(((/* implicit */int) var_18)))) - ((+(arr_7 [i_0 - 3] [i_0 - 3] [i_0 + 1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((short)28683), (((/* implicit */short) var_17))))) ? (((((/* implicit */_Bool) (unsigned short)20867)) ? (((/* implicit */int) (short)28686)) : (-1497378073))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17)))))) - ((((-(((/* implicit */int) var_17)))) >> (((((unsigned int) var_12)) - (3011021003U)))))));
}
