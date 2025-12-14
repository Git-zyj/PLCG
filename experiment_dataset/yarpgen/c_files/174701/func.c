/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174701
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) max((arr_2 [(unsigned short)4] [i_1]), (arr_2 [(unsigned char)2] [i_0])))) / (arr_3 [i_0]))) : (((((/* implicit */int) arr_1 [i_1] [i_1])) << (((((((/* implicit */int) arr_0 [i_0] [i_1])) + (15123))) - (6)))))));
                arr_5 [i_1] [5ULL] [i_1] = ((/* implicit */unsigned long long int) (-(((max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)164)))) << (((((/* implicit */int) ((short) arr_2 [i_0] [i_0]))) + (8239)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-28936))))))) ? (((unsigned long long int) ((_Bool) arr_7 [i_0] [3U] [i_3] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1])))));
                                arr_18 [i_4] [i_1] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_11 [i_1] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))))));
            }
        } 
    } 
    var_16 = (unsigned char)117;
}
