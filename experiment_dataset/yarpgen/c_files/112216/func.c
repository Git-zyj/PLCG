/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112216
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_6)) & (65534)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_6)), (683891852))) * (((var_4) / (max((arr_9 [2LL] [i_3]), (1460062337)))))));
                                arr_13 [i_3] [i_3] = (+(((/* implicit */int) var_0)));
                                var_14 = ((/* implicit */short) (-((-(((var_1) << (((((-1929142472) + (1929142518))) - (46)))))))));
                                arr_14 [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                                arr_15 [i_3] [9ULL] [(unsigned short)4] [i_1] [i_3] = ((/* implicit */short) 1460062337);
                            }
                        } 
                    } 
                    arr_16 [i_0] [(unsigned short)18] [i_1] [i_2] = ((/* implicit */short) 65534);
                    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((1460062337) == (((/* implicit */int) (unsigned char)12)))) && (((/* implicit */_Bool) 65534)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_1);
}
