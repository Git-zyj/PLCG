/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135427
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
    var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << ((((((+((-(4216666455918753405LL))))) + (4216666455918753407LL))) - (2LL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), (min((min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])), (-4216666455918753396LL))), (((/* implicit */long long int) ((arr_0 [i_0]) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_6 [(unsigned char)15] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (_Bool)1))))), ((~(((/* implicit */int) arr_3 [i_0] [i_2] [i_0])))))) != (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_2] [i_0])))));
                                var_13 = min((((/* implicit */int) ((signed char) min((((/* implicit */int) (unsigned char)9)), (arr_4 [i_0] [i_2] [i_0]))))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)9)))));
                                var_14 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 9223372036854775807LL))))) >= (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) (!((_Bool)1)))))))));
                }
            } 
        } 
    } 
}
