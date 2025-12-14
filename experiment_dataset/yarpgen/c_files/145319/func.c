/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145319
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */int) (short)1853);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */int) max((var_0), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)32767)) * (((/* implicit */int) (short)-32760)))) >= (((((/* implicit */int) (short)32753)) % (((/* implicit */int) (short)-32764)))))))));
                                var_12 = ((/* implicit */int) max(((short)-32767), (((/* implicit */short) ((((/* implicit */_Bool) 9683702623662479044ULL)) && (((/* implicit */_Bool) (short)-32764)))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((1948710772877161501LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-32757))))))) != (max((((/* implicit */long long int) (short)(-32767 - 1))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (1948710772877161501LL)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((max((2817917766064977607LL), (((/* implicit */long long int) max((4274933546U), (((/* implicit */unsigned int) (short)32753))))))) >= (((/* implicit */long long int) min((((/* implicit */int) var_2)), (((((/* implicit */int) var_5)) << (((((/* implicit */int) (short)32767)) - (32764))))))))));
}
