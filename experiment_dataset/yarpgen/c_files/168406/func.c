/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168406
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53566)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28381)) ? (((/* implicit */int) var_5)) : (var_13)))) ? (((/* implicit */int) (short)-10313)) : (((/* implicit */int) var_0))))));
    var_20 = var_3;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) -1LL);
                    var_22 &= ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (((/* implicit */int) arr_0 [i_2] [i_1])))) >= ((-(((/* implicit */int) arr_6 [i_2] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-(-2147483647))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            {
                var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    for (long long int i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_20 [i_3] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) 2147483646);
                            var_25 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_19 [i_6] [i_6 + 1] [i_6] [i_6])))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_3])) : (2147483647)))) && (((((/* implicit */int) arr_4 [i_6 - 1] [i_5] [i_4])) >= (((/* implicit */int) arr_0 [i_3] [i_5])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
