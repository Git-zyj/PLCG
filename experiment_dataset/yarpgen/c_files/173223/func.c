/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173223
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
    var_16 |= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)7875))))), (-7676949501408360927LL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)15)), ((unsigned short)62604)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)6))))));
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65221))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1828511396741317599LL)));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (!((!(min(((_Bool)1), ((_Bool)1)))))));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [8LL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65223)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((unsigned char)56), ((unsigned char)238)))) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 5659536078834800886LL)) ? (((/* implicit */int) (unsigned short)47477)) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) (short)-6))));
                    }
                }
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)2942)) : (((/* implicit */int) (unsigned char)55))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : ((((_Bool)0) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6480)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))));
}
