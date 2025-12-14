/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150961
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
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_16)) >= (var_3))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((arr_3 [i_0 + 1] [i_0 - 1]) << (((((/* implicit */int) (short)-3700)) + (3709))))))))));
                    var_19 = ((/* implicit */unsigned short) arr_5 [i_2] [i_0]);
                    var_20 *= ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (var_6)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) (~(((unsigned int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((signed char) (unsigned short)61609))))))) / (1547329520134228631ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            {
                var_22 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) > (((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_6 - 1] [i_6] [i_6] [i_6 + 1])))));
                arr_21 [i_6 + 1] [i_5] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_16 [i_6 + 1])))) % (((((/* implicit */long long int) ((/* implicit */int) ((signed char) 2066633553U)))) & ((+(arr_19 [i_6] [i_6 - 1] [i_5])))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_27 [i_5] [3U] [i_6 + 1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) (~(arr_26 [i_7])));
                            var_23 = ((/* implicit */long long int) (signed char)42);
                            var_24 = ((/* implicit */unsigned long long int) ((unsigned short) min(((_Bool)1), (arr_18 [i_7] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
