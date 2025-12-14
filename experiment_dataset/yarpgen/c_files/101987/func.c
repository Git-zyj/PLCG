/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101987
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
    var_10 += var_5;
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) <= (arr_4 [i_0] [i_0]))) ? (((/* implicit */long long int) ((int) (signed char)46))) : (((((/* implicit */_Bool) var_6)) ? (2305843009209499648LL) : (arr_0 [i_0] [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */int) arr_2 [i_0] [(signed char)7]);
                            var_14 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((-20), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) -20))))) : (((unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-2603168157106039343LL)))) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)0)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((short) min((max((5796170987723836412ULL), (((/* implicit */unsigned long long int) (signed char)46)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31241))) : (4322891618666236134ULL)))))))));
                var_16 += ((/* implicit */short) (+(((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) ^ (arr_0 [i_0] [i_1])))) : ((~(arr_6 [6LL])))))));
            }
        } 
    } 
}
