/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154925
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
    var_11 = (-(((6473853135776337251LL) & (-6473853135776337242LL))));
    var_12 = 3308695847231841402LL;
    var_13 = ((((var_7) + (9223372036854775807LL))) >> (((((min((var_8), (var_7))) & (var_2))) + (9072781046851797012LL))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) (-(var_0)))) ? (arr_2 [i_1]) : (((((((((/* implicit */_Bool) 3308695847231841406LL)) ? (arr_2 [i_0]) : (var_6))) + (9223372036854775807LL))) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775782LL))) + (45LL))) - (19LL))))));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_0])) || (((/* implicit */_Bool) arr_2 [i_1]))))), ((~(var_10))))))));
                            var_16 = arr_8 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    } 
                } 
                var_17 = max((((((/* implicit */_Bool) -9223372036854775802LL)) ? (444257546398404849LL) : ((+(var_7))))), (arr_1 [i_0]));
                /* LoopSeq 1 */
                for (long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    var_18 = arr_7 [i_1] [7LL];
                    var_19 = max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) / (-7901591623351716486LL)))) || (((/* implicit */_Bool) -444257546398404828LL))))));
                    var_20 = var_10;
                }
            }
        } 
    } 
}
