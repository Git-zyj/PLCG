/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125461
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
    var_14 = ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (unsigned short)47937)) : (((/* implicit */int) (signed char)-84)))), (((/* implicit */int) max((var_11), (((/* implicit */signed char) var_0))))))));
    var_15 ^= ((/* implicit */unsigned short) -1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0] [(signed char)13])))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [15ULL] [i_2])) : (max((1), (((/* implicit */int) arr_0 [i_1] [i_2]))))))) * (((70360154243072ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13829)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)0)) + (((((/* implicit */_Bool) -2)) ? (((/* implicit */int) (short)13829)) : (-1498483023))))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((0) * (((/* implicit */int) (signed char)68)))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((11204420021230116743ULL), (((/* implicit */unsigned long long int) (short)-13946)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) 2088560568636367001ULL))));
                    var_21 ^= ((/* implicit */signed char) (unsigned short)57416);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_7);
}
