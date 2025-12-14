/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143080
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
    var_13 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (30ULL) : (((/* implicit */unsigned long long int) var_2))))))) ? (((int) var_3)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 8101348677243973803LL)) ? (((/* implicit */unsigned long long int) -8101348677243973807LL)) : (17965197891201645459ULL))))));
    var_14 = ((((/* implicit */_Bool) (short)-5579)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) : (max((((((/* implicit */_Bool) (unsigned char)133)) ? (8101348677243973806LL) : (1839448573717713680LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((arr_0 [i_0] [i_1]) > (((/* implicit */int) (unsigned short)23087))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] = (-(((/* implicit */int) ((unsigned short) arr_1 [i_0]))));
                            var_16 = ((/* implicit */long long int) (unsigned short)21);
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) min((31ULL), (30ULL)));
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}
