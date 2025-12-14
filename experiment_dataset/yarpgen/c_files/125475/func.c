/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125475
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
    var_14 *= ((/* implicit */_Bool) var_4);
    var_15 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) max((2305834213120671744LL), (var_13))))))))));
                var_17 = 2305834213120671752LL;
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_2] = ((((/* implicit */long long int) -1974697929)) | (var_0));
                                arr_14 [(_Bool)1] [(unsigned char)8] [i_2] [i_2] [i_1] [12LL] = ((((/* implicit */_Bool) 5423011402108297803LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4 - 3])) ? (-1645682445) : (1974697928)))) : (var_10));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -1974697921)) ? (var_4) : (((/* implicit */long long int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (var_13) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
}
