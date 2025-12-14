/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145521
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
    var_15 -= ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_12 [i_2] [i_2] [14U] [i_2]))) << (((((/* implicit */int) arr_1 [0LL])) - (48389)))))), (((((((/* implicit */_Bool) 1084626601U)) ? (((/* implicit */long long int) arr_2 [i_0])) : (var_5))) * (((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0])), (-13258578)))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 8388607U))));
                                arr_16 [i_0] [i_1] [(unsigned char)1] [i_3 + 2] [i_2] [3U] = ((/* implicit */signed char) var_5);
                                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0])), (var_1)))) & (((((/* implicit */_Bool) 2772637646639576620ULL)) ? (max((((/* implicit */unsigned int) var_6)), (2634848849U))) : (max((729140570U), (((/* implicit */unsigned int) -1473552807))))))));
                                arr_17 [i_4] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1473552807), (((/* implicit */int) (unsigned short)39770))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_4 - 1] [i_2] [i_0] [i_0] [i_1 - 3])))))) || (((((/* implicit */_Bool) arr_11 [i_2])) || (((/* implicit */_Bool) (~(arr_3 [i_0] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 4] [i_1 - 1]), (arr_14 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 4])))), (((((/* implicit */_Bool) 552615431)) ? ((+(arr_3 [i_1] [i_1 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55272)))))));
                arr_19 [i_0] [i_0] [10U] = ((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_0] [i_1] [6U] [i_1])) & (((/* implicit */int) (unsigned short)5961)))) & ((~(((/* implicit */int) arr_11 [i_1]))))));
            }
        } 
    } 
}
