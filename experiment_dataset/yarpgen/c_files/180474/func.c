/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180474
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
    var_15 += ((/* implicit */_Bool) -1587244640235752537LL);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_0 [i_0])))))), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_2 [i_0]))))))));
                arr_6 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */int) ((4370018707767161961ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0 + 3])))) >= (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4370018707767161961ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0 - 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (arr_12 [i_1] [i_4])));
                                arr_15 [i_4] [(unsigned char)9] [i_2] [i_1] [i_4] = ((/* implicit */short) min((var_7), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)28)) && (((/* implicit */_Bool) 4370018707767161961ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
