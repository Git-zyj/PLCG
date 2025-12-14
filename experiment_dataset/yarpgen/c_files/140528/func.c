/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140528
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
    var_11 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((unsigned long long int) (unsigned char)160)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (-(min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_6)), (var_2)))), (var_3)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 |= ((/* implicit */short) (+(((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (2190129102269573242ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) arr_4 [i_1])) : (676859003))))))));
                                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)99)))), (((/* implicit */int) (unsigned char)16))))) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_3] [i_1 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)149)) : (var_1))) : (((/* implicit */int) (unsigned char)188))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : ((+(18428125101310085242ULL)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(var_1)));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_2)) - (45032))))))));
}
