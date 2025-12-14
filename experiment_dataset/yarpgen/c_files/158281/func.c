/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158281
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) arr_6 [i_1] [i_0] [i_0]);
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((4398046511103LL) / (arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_4);
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) != (((var_3) / (((/* implicit */int) (short)-28883))))))), (((((unsigned int) var_2)) * (((/* implicit */unsigned int) var_3))))));
    /* LoopSeq 2 */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        arr_10 [i_2] [i_2 - 3] = ((/* implicit */unsigned char) (-(((((/* implicit */int) min(((short)28883), (arr_9 [i_2] [i_2])))) - (((/* implicit */int) arr_8 [i_2 + 1]))))));
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-28883))));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) * (((unsigned long long int) arr_9 [i_2 + 1] [i_2 + 1]))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_11 [i_3]))));
        arr_13 [i_3] = arr_12 [i_3] [i_3];
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_11 [i_3])))), (((/* implicit */int) (unsigned char)0))));
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    var_17 -= arr_6 [i_4] [i_4] [i_4];
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((/* implicit */int) (signed char)95)))))));
                }
            } 
        } 
    } 
}
