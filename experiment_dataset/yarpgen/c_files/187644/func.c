/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187644
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 *= (+(2346038038U));
                                var_21 -= (signed char)-44;
                                var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [4ULL] [4ULL] [i_2]) * (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? (min((var_8), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((5381135292905786996ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))))))) - (((((/* implicit */_Bool) (signed char)58)) ? (arr_9 [i_0] [i_0] [i_0] [(signed char)1] [i_0]) : (((/* implicit */unsigned long long int) var_13))))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((long long int) ((signed char) 2346038023U))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_1] [i_1] [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) var_10)))))) : (min((((/* implicit */unsigned long long int) var_3)), (arr_11 [i_0] [11LL] [i_1] [i_0] [11ULL]))))), (((arr_4 [i_0] [i_0 - 1]) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_0] [i_0] [5LL])) - (arr_10 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_2);
    var_26 = ((/* implicit */signed char) -8690042770828779136LL);
    var_27 = min((((unsigned int) ((unsigned int) 8753344169173443955LL))), (var_18));
}
