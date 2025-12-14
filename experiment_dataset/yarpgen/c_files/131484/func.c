/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131484
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
    var_14 = ((/* implicit */int) (~(var_7)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_11 [3LL] = ((/* implicit */unsigned int) min((arr_10 [i_0] [i_2] [i_3 - 1] [(unsigned short)6] [i_3 - 1]), (((/* implicit */long long int) ((int) 1083034533)))));
                                var_15 = ((/* implicit */int) arr_9 [i_1] [i_1]);
                                arr_12 [i_0] [i_2] [(short)17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7418453852677983016ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-57)) + (((/* implicit */int) (signed char)88))))) ? (2071944653U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) : (502537189804958002LL)));
                            }
                        } 
                    } 
                } 
                arr_13 [0U] = ((/* implicit */unsigned int) max((((int) 2342969051134063949ULL)), (((/* implicit */int) var_0))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(7LL)))) ? ((~(((-1990083941) ^ (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) (short)-19991)) <= (((/* implicit */int) ((signed char) (short)19996))))))));
                arr_14 [i_0] [i_0] |= ((/* implicit */long long int) (short)-20007);
                var_17 = (((+(1310365394))) != (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (short)-16147)) : (-1487239817))))));
            }
        } 
    } 
}
