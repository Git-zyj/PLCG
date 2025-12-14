/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109057
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
    var_19 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+((((!(((/* implicit */_Bool) var_14)))) ? (min((((/* implicit */unsigned long long int) 7956590209394449805LL)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_21 -= (-(((((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 3])))));
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((211598013614008013ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_1] [i_2] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_1] [i_2]))))))))));
                                var_23 -= (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_4 + 3])) == (((/* implicit */int) arr_3 [i_1 + 1] [i_4 + 1]))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) -499280100))))) ? (((/* implicit */long long int) var_0)) : (((var_6) + (((/* implicit */long long int) var_16))))));
                var_25 *= var_10;
                var_26 = ((/* implicit */unsigned long long int) max((var_26), ((~(max((((((/* implicit */_Bool) 6245444307792693989LL)) ? (((/* implicit */unsigned long long int) -1742509136)) : (arr_1 [i_1]))), (arr_4 [i_0])))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) var_2);
    var_28 = ((/* implicit */unsigned short) ((unsigned long long int) ((max((var_16), (var_1))) % (((var_15) % (var_1))))));
}
