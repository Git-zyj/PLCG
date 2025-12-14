/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158132
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((((/* implicit */int) var_12)) - (((/* implicit */int) var_8)))) >> (((((/* implicit */int) var_2)) - (27891))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), ((-(((((/* implicit */_Bool) -8459370274544860067LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])))))) : (((arr_1 [i_0] [i_1]) % (arr_1 [i_0] [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) arr_9 [i_1]))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)106))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((-(2614516568U)))))));
                                var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1385102485))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4 - 4] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (arr_0 [i_2])))) | ((((_Bool)0) ? (-2661677067507313501LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                                arr_12 [i_0] [i_0] [i_2 + 2] [i_3] [i_4] = ((/* implicit */_Bool) ((265351340U) >> (((arr_2 [i_0] [6U] [i_2]) - (1784231347)))));
                                var_17 |= ((/* implicit */signed char) arr_9 [i_0]);
                                arr_13 [i_0] [i_0] = ((/* implicit */long long int) (+(2555616075U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
