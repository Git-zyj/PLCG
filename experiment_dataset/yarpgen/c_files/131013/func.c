/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131013
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)48)), (arr_5 [i_0] [i_1] [i_2] [i_3])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0] [i_1])), (((((((/* implicit */int) arr_6 [i_0] [i_4] [i_2] [i_0])) + (2147483647))) << (((((/* implicit */int) (unsigned char)244)) - (244)))))))) : ((-(arr_3 [(_Bool)0] [i_1] [i_4])))));
                                var_15 = ((/* implicit */unsigned char) (~(-9223372036854775786LL)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)8)) > (((/* implicit */int) (unsigned short)5919)))) ? (((min((9223372036854775786LL), (9223372036854775786LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])) >= (((/* implicit */int) var_6)))))))) : ((-(min((((/* implicit */long long int) (unsigned short)48823)), (9223372036854775786LL)))))));
                    var_17 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_13 [i_0] [(unsigned char)10] [(unsigned char)10] [(signed char)11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [(signed char)5] [i_2])))) - (((/* implicit */int) ((_Bool) var_1)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (-(((unsigned int) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                arr_20 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_17 [i_6 + 1] [i_6 + 1]))) ^ (((/* implicit */int) var_5))));
                var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 + 1])) ? (-9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 + 1] [10ULL])))))));
            }
        } 
    } 
    var_20 = ((unsigned char) (-(((/* implicit */int) var_11))));
}
