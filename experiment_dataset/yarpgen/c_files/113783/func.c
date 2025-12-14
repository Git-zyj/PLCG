/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113783
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
    var_13 *= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_2 + 2] [i_0 - 1]))))), (min((((/* implicit */long long int) arr_7 [i_3] [i_1] [i_1])), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3]))) & (arr_1 [i_3])))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 1013157472)) : (4589317743992129758LL))) + (((((/* implicit */long long int) ((/* implicit */int) (short)-14))) / (-1990913313408115719LL))))), (((/* implicit */long long int) var_4)))))));
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((var_9) ? (min((((/* implicit */unsigned long long int) arr_5 [i_2])), (min((11445670177049838881ULL), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) ((-4589317743992129758LL) / (min((((/* implicit */long long int) 2004404003U)), (6574243521769158101LL)))))))))));
                            arr_11 [(unsigned short)11] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) max((min((arr_1 [i_0 - 1]), (((/* implicit */long long int) (short)0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2362525776U)) ? (((/* implicit */int) (signed char)-44)) : (arr_6 [i_0 - 1] [i_2 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (signed char)3)) == (2147483647)))))))));
                            arr_18 [7U] [7U] [7U] [9U] [i_5] = ((/* implicit */unsigned int) 11445670177049838877ULL);
                            var_18 *= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
