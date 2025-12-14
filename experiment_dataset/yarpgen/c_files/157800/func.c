/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157800
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
    var_17 ^= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (var_6) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)29602))))))) && (var_13));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((_Bool) var_0)))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL)))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_0] [i_0 + 3] [i_2]), (arr_3 [i_0] [i_0 + 3] [i_0])))) & (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_5)))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) max(((+(((/* implicit */int) min(((unsigned char)7), (((/* implicit */unsigned char) arr_7 [i_4] [i_2] [i_0] [i_0]))))))), (min((((/* implicit */int) arr_1 [i_0 + 3])), (arr_2 [i_2])))));
                                arr_13 [i_4] [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (4238444601354959485LL))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (arr_6 [i_1] [i_1] [i_0])))))) ? (max((((/* implicit */unsigned long long int) min((1988566687), (((/* implicit */int) (_Bool)1))))), (arr_6 [i_0 - 1] [i_3 + 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [2] [i_4] [(_Bool)1] [i_4])))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_0] [i_2] = ((/* implicit */int) 0LL);
                }
            } 
        } 
    } 
}
