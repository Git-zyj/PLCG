/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154463
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_6);
                var_10 = ((/* implicit */signed char) min((((/* implicit */int) (!(((1637805047) < (1637805044)))))), (min(((~(((/* implicit */int) arr_0 [16ULL] [i_1])))), ((+(((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1367540648918460866LL)) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)2))) : (((0ULL) * (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            {
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */int) (signed char)-1);
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (var_8)))) : (min(((-(((/* implicit */int) var_3)))), ((~(((/* implicit */int) (_Bool)1))))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((long long int) (_Bool)1)), (((/* implicit */long long int) min(((~(arr_7 [i_2 + 1] [i_3]))), (var_8)))))))));
                arr_11 [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1]))))));
            }
        } 
    } 
}
