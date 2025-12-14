/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123808
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
    var_18 = ((/* implicit */unsigned int) 0ULL);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) (-(-513345860)))) + (max((0ULL), (((/* implicit */unsigned long long int) (short)29102)))))), (((/* implicit */unsigned long long int) (+(var_8))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) <= (((int) (unsigned char)115))));
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_0 [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) var_7)), ((+(3558307001990649535LL))))));
                                var_21 = ((/* implicit */unsigned long long int) (short)21116);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
