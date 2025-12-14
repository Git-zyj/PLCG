/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127381
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
    var_12 = ((/* implicit */_Bool) (-(((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)0)))) ? ((~(var_8))) : (((var_6) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)63))))) < (min((((250782040U) - (4044185255U))), (((/* implicit */unsigned int) arr_2 [i_1 + 3] [i_1 - 4]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_3]);
                            arr_9 [i_0] [i_1 + 3] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_8 [i_1 + 1] [i_1 - 2] [(_Bool)1] [i_1] [i_1 + 1] [i_1 - 2])))));
                            var_14 = ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_2 [i_3] [i_1]), (((/* implicit */signed char) arr_1 [i_0]))))), (((long long int) var_4))))) ? (((((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0])), (arr_2 [i_1] [i_1])))) >> (((arr_5 [0ULL] [i_1] [i_2] [i_3]) >> (((arr_3 [i_1]) + (5987033774373328464LL))))))) : (((/* implicit */int) var_6)));
                            var_15 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)11] [i_3]);
                            var_16 *= ((/* implicit */signed char) (+(((arr_5 [i_3] [i_3] [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-75)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
