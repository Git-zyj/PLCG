/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169888
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
    var_13 = max((((/* implicit */int) ((((/* implicit */int) (short)-15283)) < (-93023558)))), (max((0), (((/* implicit */int) (short)-15283)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2] [i_2 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? ((+(arr_2 [i_2 - 1] [i_2 - 1] [i_2]))) : (((arr_2 [i_2 + 1] [i_2] [i_2 + 1]) ^ (arr_2 [i_2 - 3] [i_2] [i_2])))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_6))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)15275)) : (-1513148805)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (arr_3 [i_0] [i_0] [i_2 - 1]))))));
                    var_16 *= ((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                    arr_6 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */int) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    arr_17 [(_Bool)1] [i_3] [i_3] [i_3] = max(((((_Bool)1) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (unsigned char)187)))), (min(((-(((/* implicit */int) (signed char)(-127 - 1))))), ((-(var_10))))));
                    var_17 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5]))))));
                    var_18 = ((/* implicit */unsigned long long int) (-(arr_9 [i_5] [i_3])));
                }
            } 
        } 
    } 
}
