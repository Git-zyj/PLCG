/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123971
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31970)) ? (2599045093U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1283))))))));
                                var_11 -= ((/* implicit */short) (-(var_7)));
                                var_12 = ((/* implicit */unsigned short) 16838086687671143898ULL);
                            }
                        } 
                    } 
                } 
                var_13 -= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((max((-2147483627), (((/* implicit */int) var_2)))), (((/* implicit */int) var_0))))) - ((+(1410337555U)))));
}
