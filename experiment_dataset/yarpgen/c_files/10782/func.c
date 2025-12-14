/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10782
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) <= (((var_13) << (((var_2) - (3346542901U)))))))) << (((min((min((var_4), (((/* implicit */long long int) var_2)))), ((-(-6587227733519842670LL))))) + (1781149776826869302LL))))))));
    var_21 = ((/* implicit */unsigned int) min((((unsigned long long int) var_14)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (min((var_0), (((/* implicit */unsigned long long int) var_18))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-92))))));
                            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) 3912086046U)) : (min((11588403400442505132ULL), (((/* implicit */unsigned long long int) arr_5 [16ULL] [16ULL] [i_3])))))) % (var_0)));
                            var_24 = ((/* implicit */signed char) min((((unsigned int) min((var_4), (var_1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (signed char)127)))))))));
                            arr_12 [19ULL] [i_1 + 1] [19ULL] [i_1 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3837018503U))));
                        }
                    } 
                } 
                var_25 = (+(1772346676598667495LL));
                arr_13 [i_0] [i_0 - 1] = ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
