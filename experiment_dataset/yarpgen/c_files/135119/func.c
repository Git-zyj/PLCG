/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135119
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */int) var_3)), ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (32766U)));
                    var_22 |= ((/* implicit */unsigned short) min((min((((int) (unsigned short)65522)), (((((/* implicit */_Bool) arr_2 [4ULL])) ? (((/* implicit */int) arr_3 [(unsigned char)10] [i_1] [i_2])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [20LL])) && (var_1))))));
                    var_23 |= ((/* implicit */long long int) ((int) (_Bool)1));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) (unsigned short)65531);
                                var_25 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(1855753733)))) ? (((208990588U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)57667)))))))));
                                var_26 = ((/* implicit */unsigned char) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(arr_3 [i_0] [i_0 - 1] [i_2]))))));
                                var_27 = var_8;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
            {
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((signed char) 1112774171U)))));
                    var_29 = ((/* implicit */unsigned char) arr_16 [i_5]);
                }
            } 
        } 
    } 
}
