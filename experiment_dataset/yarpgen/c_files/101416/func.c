/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101416
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), (min((arr_1 [i_2]), (((/* implicit */long long int) arr_3 [i_2])))))))));
                    var_13 &= ((/* implicit */short) max((((/* implicit */long long int) arr_4 [i_2])), (max((arr_1 [i_1 - 1]), (arr_1 [i_1 + 2])))));
                }
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2348549549733024369LL)) ? (max((var_4), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_1 + 3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 474652539U)) ? (((((/* implicit */_Bool) 2348549549733024388LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (2348549549733024359LL))) : (((((/* implicit */_Bool) 13616651748913771394ULL)) ? (2348549549733024382LL) : (-2348549549733024394LL)))))) : ((+(var_4)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) 2348549549733024374LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
}
