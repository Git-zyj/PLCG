/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15083
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) ((1232624007U) << (((var_0) + (2010576723)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) var_8);
        arr_4 [5] = ((/* implicit */unsigned char) (~(var_10)));
        var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
    }
    for (unsigned int i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        var_19 += ((((arr_7 [i_1 - 2]) * (arr_7 [i_1 - 3]))) + (((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_1 - 1]) * (307523877U)))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) % ((((((_Bool)1) ? (16097386491581243771ULL) : (0ULL))) + (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))))))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2349357582128307858ULL)) ? (((/* implicit */int) (_Bool)1)) : (733684716)));
    }
    var_21 = ((/* implicit */unsigned long long int) (-(((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) var_5))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) max((2147483647), ((-(((/* implicit */int) ((signed char) (unsigned char)238)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                {
                    var_22 += ((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (signed char)-119))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned char)7)), (-1847722930))) + (((arr_17 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1]) + (arr_17 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1]))))))));
                }
            } 
        } 
    }
}
