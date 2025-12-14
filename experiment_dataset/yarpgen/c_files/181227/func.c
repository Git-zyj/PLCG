/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181227
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
    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) + (-1206981175776936606LL))), (((/* implicit */long long int) (~(4294967292U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((1206981175776936606LL) / (((/* implicit */long long int) arr_1 [i_0] [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] = ((int) (~(((/* implicit */int) ((unsigned char) (unsigned char)14)))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((arr_14 [i_0] [i_1] [i_2]) + (((/* implicit */long long int) ((arr_3 [i_2]) * (arr_3 [i_3])))))))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)12143)) ? (1206981175776936599LL) : (((/* implicit */long long int) (-2147483647 - 1))))), (max((((/* implicit */long long int) (unsigned char)246)), (-1206981175776936610LL)))))));
            }
        } 
    } 
}
