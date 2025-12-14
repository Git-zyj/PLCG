/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119600
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned char)14] [i_0] &= ((long long int) 16383LL);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (max((-6714296647413234079LL), (arr_9 [i_0] [i_1] [i_2] [(unsigned char)22]))) : (((((/* implicit */_Bool) var_18)) ? (var_0) : (arr_2 [i_2])))))) ? (((((/* implicit */long long int) 2740534696U)) + (min((((/* implicit */long long int) var_12)), (6360280617036495122LL))))) : (((/* implicit */long long int) ((unsigned int) (+(5259872765560652555LL)))))));
                            arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (var_0)))) ? (min((var_2), (arr_10 [11U] [i_0] [21U] [i_0] [21U] [(unsigned char)2]))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)106))))))) == (((((/* implicit */_Bool) var_5)) ? (min((3114894229254254827LL), (((/* implicit */long long int) (unsigned char)80)))) : (-6714296647413234098LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */long long int) ((unsigned int) var_16));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_12))));
    var_22 &= ((/* implicit */unsigned int) max((((var_10) << (((((-7815601718606245689LL) + (7815601718606245695LL))) - (6LL))))), (9223372036854775797LL)));
}
