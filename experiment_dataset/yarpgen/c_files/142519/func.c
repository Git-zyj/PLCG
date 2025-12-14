/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142519
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
    var_11 = ((/* implicit */unsigned char) (+(6025525760202271295LL)));
    var_12 &= ((/* implicit */unsigned char) ((6025525760202271295LL) >> (((/* implicit */int) ((-6025525760202271308LL) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7400339130447778102ULL)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (~(6025525760202271282LL)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)14322))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 11046404943261773532ULL);
                                var_13 = ((/* implicit */unsigned int) min((var_13), (0U)));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = (+(7400339130447778102ULL));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_3);
}
