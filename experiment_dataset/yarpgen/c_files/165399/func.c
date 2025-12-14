/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165399
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
    var_18 = ((/* implicit */unsigned char) ((int) var_8));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_16))));
    var_20 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 15277163610020628001ULL)))) : (min((((/* implicit */unsigned long long int) var_13)), (9223372036854775808ULL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -4)) ? (((/* implicit */int) min(((unsigned char)250), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) arr_0 [i_0]))))), (2534114664U)));
                var_22 -= ((/* implicit */short) ((unsigned char) ((_Bool) ((arr_0 [i_1]) ? (((/* implicit */unsigned long long int) 2147483641)) : (arr_1 [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) 998620747);
                    arr_12 [i_2] = ((/* implicit */short) ((int) min((((int) arr_4 [i_2])), (((/* implicit */int) var_14)))));
                }
            } 
        } 
    } 
}
