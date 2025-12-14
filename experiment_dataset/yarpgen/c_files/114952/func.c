/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114952
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
    var_10 = (((+(var_3))) & (((/* implicit */int) (((~(((/* implicit */int) var_1)))) <= (var_3)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((var_5) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) (((((~(67076096LL))) + (9223372036854775807LL))) >> (((67076079LL) - (67076067LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            {
                arr_14 [i_2] [i_3] |= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                arr_15 [i_2] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (unsigned char)187)), ((~(9007199254740991LL)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_20 [i_5] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((unsigned char) (_Bool)1))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)179)) < (((/* implicit */int) (unsigned char)161)))))))));
                            arr_21 [i_2] [i_3] [10] [i_3] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(-67076096LL))))));
                        }
                    } 
                } 
                arr_22 [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((min((((/* implicit */int) arr_0 [i_2])), (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) arr_9 [i_2] [i_3 + 1])) : (((/* implicit */int) (unsigned char)255)))))), ((((-(((/* implicit */int) (unsigned char)145)))) - (((/* implicit */int) arr_9 [i_2] [i_3 - 2]))))));
            }
        } 
    } 
}
