/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165407
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
    var_17 = var_15;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) 13767675501014192701ULL);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1 - 2] [i_2] = ((((/* implicit */_Bool) (+((-(arr_5 [i_0])))))) ? (arr_4 [i_3]) : ((((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])))) + (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                            var_18 *= ((/* implicit */short) (~(4679068572695358915ULL)));
                            arr_12 [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_0]))) : (4679068572695358914ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 &= ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)104))))) & (var_0)))));
    var_20 = var_8;
}
