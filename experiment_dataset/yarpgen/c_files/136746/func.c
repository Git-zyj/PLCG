/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136746
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
    var_10 = ((/* implicit */unsigned char) min((var_3), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (365304009U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((var_6) - (3045437929U)))))) : (min((var_6), (var_3)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_11 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-19))));
                            arr_12 [i_0] [i_0] [i_0] [i_3 + 2] [i_1] = ((/* implicit */signed char) max((365304009U), (((/* implicit */unsigned int) (unsigned short)5082))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((365304009U), (((/* implicit */unsigned int) (unsigned short)65006)))), (((/* implicit */unsigned int) ((var_1) / (((/* implicit */int) (unsigned short)20159))))))))));
                            var_12 = ((/* implicit */unsigned short) ((1752336122U) >> (((1752336122U) - (1752336094U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (long long int i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */signed char) max(((((-(var_3))) | (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5))))))))));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-((-((-(-2312666060197063368LL))))))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61852))) - (4294967288U)))) ? (2312666060197063367LL) : (((/* implicit */long long int) 7U))))) ? (min((((/* implicit */unsigned int) var_8)), (min((4294967295U), (((/* implicit */unsigned int) (signed char)116)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 9U)))))))));
                            var_16 = arr_16 [(signed char)16] [i_1] [i_5];
                        }
                    } 
                } 
            }
        } 
    } 
}
