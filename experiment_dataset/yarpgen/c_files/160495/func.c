/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160495
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) -1254130697)) ? (4125207110946617172LL) : (((/* implicit */long long int) -580895061)))) << (((((arr_2 [i_0] [i_0]) + (280974738))) - (50)))))))) : (((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) -1254130697)) ? (4125207110946617172LL) : (((/* implicit */long long int) -580895061)))) << (((((((((arr_2 [i_0] [i_0]) + (280974738))) - (50))) + (360754728))) - (18))))))));
                var_18 = ((/* implicit */unsigned short) ((1U) << (((/* implicit */int) ((1254130704) != (1254130702))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_19 = var_2;
                            arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 3648712912U);
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((3372817003U) <= (1860706825U))) ? (((arr_10 [i_0] [i_3] [i_2] [i_1] [i_1 + 2]) - (((/* implicit */long long int) 1254130719)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1 + 1] [i_0] [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_8 [i_1 + 4] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (arr_10 [i_1 + 4] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) arr_5 [i_1 + 4] [i_3] [i_3] [i_3]))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned short) (((~(((int) -1084676717)))) > (((/* implicit */int) ((unsigned short) var_16)))));
            }
        } 
    } 
    var_22 = (+(223789173));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_11)) : (275799345U)))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
