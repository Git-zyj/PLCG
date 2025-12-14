/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148913
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))) ^ (arr_6 [(unsigned char)16] [i_0] [i_0]))), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((short) (short)63)), (((/* implicit */short) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (short)45))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)40)), ((short)-69))))) : (arr_0 [i_0]))));
                                arr_13 [i_0] [i_3] [i_2] [16U] [10ULL] [i_3] [i_2] |= ((/* implicit */_Bool) ((short) arr_3 [(unsigned char)20] [(unsigned char)20] [i_2]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-58)))) * (((/* implicit */int) (((~(-5508024521620982250LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_17)))))))))));
    var_22 = ((/* implicit */short) ((var_3) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) % (5508024521620982250LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_5)))))));
    var_23 = ((/* implicit */unsigned long long int) max((((int) 3717611654U)), (((/* implicit */int) var_6))));
}
