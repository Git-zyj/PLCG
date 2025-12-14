/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175909
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((1937858935U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)4084)))))) - (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_0 [i_0]))))));
                            var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((16ULL) << (((4828903598548267626ULL) - (4828903598548267618ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) var_9))))) : (var_3))), (((/* implicit */unsigned long long int) var_1))));
                            var_13 ^= 16ULL;
                            var_14 = ((/* implicit */short) min(((unsigned char)122), ((unsigned char)228)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0 + 2] [(unsigned char)7] [i_4] [i_0] [i_4] [i_4 - 1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32764))))) < (min((var_7), (3093762523U))))))));
                            var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_15 [i_5] [i_4] [i_4] [i_1 + 1] [i_0 + 2] [i_0 + 2]))))));
                            arr_17 [i_5] [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), ((-(452365477988132243LL)))))));
                            arr_18 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [3] [i_1 - 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)32767))))))), (((((/* implicit */_Bool) var_1)) ? (min((16ULL), (((/* implicit */unsigned long long int) -1478037675)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-715841660900611177LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))))))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_1] [i_0] [i_0] [(short)3] [i_1]) : (((/* implicit */long long int) var_7)))), (((((-715841660900611177LL) + (9223372036854775807LL))) << (((((-715841660900611177LL) + (715841660900611213LL))) - (36LL)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4)))) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32767)))))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) min(((unsigned char)255), (((/* implicit */unsigned char) var_6))))))) / (var_7))))));
}
