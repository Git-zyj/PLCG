/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114608
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
    var_12 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_3))));
    var_13 = ((/* implicit */int) ((var_10) | (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) var_6)) : (4272646578218300356LL)))) : ((+(var_10)))))));
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((min((4272646578218300331LL), (((/* implicit */long long int) (unsigned char)241)))) > (((((/* implicit */_Bool) var_10)) ? (7599549420845800536LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))) ? (-7599549420845800532LL) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) 3826788330U)) ? (((/* implicit */int) arr_2 [i_1])) : (var_7))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                            arr_12 [i_3 + 1] [i_2] [i_0] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
}
