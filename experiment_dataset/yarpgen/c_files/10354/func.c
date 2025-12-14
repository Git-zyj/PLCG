/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10354
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((min((arr_2 [i_0 - 1] [i_0]), (arr_0 [i_0 - 1] [i_0]))) <= (((/* implicit */long long int) ((unsigned int) var_9)))));
                var_15 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_2 [i_0] [i_1])))) ? (arr_1 [i_0 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-30922), (((/* implicit */short) (_Bool)1)))))))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */long long int) arr_1 [i_0 - 1] [i_1])) : (((((/* implicit */_Bool) 2260286931336335910LL)) ? (((/* implicit */long long int) 3858671848U)) : (arr_0 [i_0] [i_1])))))) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)46)), (var_8)))) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])) : (((1828259798603225555ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_1] [i_2] [13ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((arr_1 [i_0] [i_1]), (var_13))), (((/* implicit */unsigned int) min(((short)2048), (arr_4 [i_0])))))))));
                            arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) (+(max((((unsigned long long int) arr_2 [i_1] [i_2])), (((/* implicit */unsigned long long int) ((4077090909U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) (+(var_9)));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) 3547377833U)))));
}
