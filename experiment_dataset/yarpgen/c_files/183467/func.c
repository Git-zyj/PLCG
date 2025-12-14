/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183467
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(7494165283823297378LL))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1987)) ? (((((/* implicit */int) (unsigned char)252)) >> (((var_1) + (4693337231253352683LL))))) : (((((/* implicit */_Bool) max((-601656557), (((/* implicit */int) (_Bool)0))))) ? ((~(var_9))) : (601656556)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2036088749)) ? (((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)18] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2522689037U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54937))) * (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (arr_4 [i_0] [7LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28524)))))))));
                            arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] = min((arr_8 [i_2] [i_1] [i_2] [i_3] [i_2] [i_3]), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (~(max((arr_6 [i_0] [16LL] [16LL] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (-(601656571)));
}
