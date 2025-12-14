/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176197
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_5 [(_Bool)1]))) ? (1223559393U) : (1158662347U)));
                var_15 = ((/* implicit */unsigned long long int) 3136304949U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (3136304948U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) : (((((/* implicit */_Bool) -1111348117314329157LL)) ? (((((/* implicit */_Bool) 3136304949U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1111348117314329155LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                arr_13 [(unsigned char)2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (signed char)-16)) != (arr_11 [i_3]))))), (arr_10 [i_2] [i_3] [i_3])));
                var_16 -= ((/* implicit */unsigned int) ((signed char) var_1));
                arr_14 [(unsigned char)19] [i_3] = ((/* implicit */long long int) ((((_Bool) ((int) (short)-9))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) var_1))), ((((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [18U]))))))) : (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned long long int) 1111348117314329156LL)) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned char) var_3);
}
