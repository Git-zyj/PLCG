/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153076
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_16)), (var_13)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27914)) ? (((/* implicit */int) (short)-10874)) : (((/* implicit */int) (short)30081))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (max((((/* implicit */unsigned int) (unsigned short)56695)), (1144119070U)))))));
                            arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)-30087))));
                            arr_9 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((arr_5 [i_0] [i_1] [i_2 + 3] [i_1]) ? (((((/* implicit */_Bool) (~(1136523553U)))) ? (((/* implicit */int) (short)30086)) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (short)20826))))));
                        }
                    } 
                } 
                arr_10 [i_1 + 1] = ((/* implicit */short) min(((unsigned short)26), ((unsigned short)56695)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)65535))));
}
