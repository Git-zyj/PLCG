/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155166
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
    var_10 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 4514019737519429520LL)) != ((((_Bool)0) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (2251799813619712ULL)))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [16U] [0] [0] [i_1] [16U] [i_1] [i_1] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
                                var_12 = ((((/* implicit */long long int) ((/* implicit */int) (((~(arr_10 [i_0] [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_4]))) == (((/* implicit */int) ((_Bool) arr_4 [i_1] [i_4]))))))) > (((long long int) ((arr_2 [i_1] [i_1]) || (((/* implicit */_Bool) (unsigned char)214))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [(short)21] [i_1])) ^ (((/* implicit */int) var_3)))), (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((1441670663) >= (-1441670656))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 516082399))));
    var_15 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
}
