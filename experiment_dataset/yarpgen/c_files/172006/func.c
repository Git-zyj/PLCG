/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172006
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
    var_13 = (((-(((long long int) var_6)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) 18))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0 + 2] [i_0 + 2] [i_3] [i_0 + 2] = ((/* implicit */unsigned int) (unsigned char)255);
                                var_14 += ((/* implicit */long long int) min(((unsigned short)10176), (((/* implicit */unsigned short) (unsigned char)0))));
                                var_15 = ((/* implicit */signed char) (+(min((((/* implicit */long long int) 1265600201U)), (6369766782803244344LL)))));
                                var_16 = ((/* implicit */_Bool) (~(24307119435229890ULL)));
                            }
                        } 
                    } 
                    arr_12 [i_0] [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8970528370817162664LL)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2 - 3] [i_0 + 2])) : (((/* implicit */int) var_10))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((-(((((/* implicit */_Bool) 66846720)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2] [i_6]))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) - ((~(((((/* implicit */unsigned long long int) -1073741824LL)) * (var_2))))))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) -6369766782803244345LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
