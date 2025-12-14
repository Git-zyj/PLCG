/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144485
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
    var_10 = (+(((/* implicit */int) var_2)));
    var_11 = ((/* implicit */int) ((max(((~(-1LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))) << (((((((/* implicit */_Bool) (short)-9510)) ? (7765856413101844850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (7765856413101844841ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)12361)) >> (((-5407290721001765548LL) + (5407290721001765572LL))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3]))));
                            var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3]))) & (arr_6 [i_0] [i_1] [i_2])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((var_6) ^ (arr_16 [i_4])))) ? (var_6) : (((/* implicit */int) var_5)))))))));
                var_15 -= ((/* implicit */_Bool) (((_Bool)1) ? (((arr_16 [i_4]) | ((+(((/* implicit */int) arr_15 [(unsigned short)0])))))) : (((/* implicit */int) ((_Bool) (unsigned char)143)))));
            }
        } 
    } 
}
