/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128204
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
    var_15 &= ((/* implicit */unsigned short) max((((/* implicit */int) max((var_8), (((/* implicit */short) max((var_4), (var_4))))))), ((((~(((/* implicit */int) var_6)))) ^ ((~(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_3))))));
                                var_17 &= ((/* implicit */unsigned short) (-(((var_3) ? (((/* implicit */int) arr_3 [i_0] [i_4])) : (((/* implicit */int) var_5))))));
                                var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_6 [i_4] [i_1])) : (((/* implicit */int) var_11))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0]))));
                                var_19 = ((/* implicit */unsigned char) (-(8492308975546417296ULL)));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1])))) : ((~(((/* implicit */int) (unsigned char)255))))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_11))))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
}
