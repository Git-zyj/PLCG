/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153029
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65508))) <= (((8U) + (8U))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]))))))) : (((arr_0 [i_0] [i_0]) % (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) + (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1597558055U))))))) : (((int) arr_1 [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                {
                    var_20 += ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))))));
                    arr_11 [i_3 + 1] [i_2] [i_1] = ((/* implicit */unsigned short) arr_10 [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
}
