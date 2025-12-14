/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154357
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 6444855141550296289LL)) ? (((/* implicit */int) (short)-28058)) : (((/* implicit */int) (short)-19123))))));
                            arr_11 [i_0] [(unsigned char)21] [i_0] [i_0] [i_0] [(unsigned short)21] = -1LL;
                            arr_12 [i_3] [i_3 + 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_5] [i_4 - 1] [i_0])), (var_8)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */signed char) var_1)), ((signed char)-64)))))), (((/* implicit */int) min((min(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_18 [i_5] [i_1] [i_0])))), (((/* implicit */signed char) (_Bool)1)))))));
                            arr_20 [i_5] [i_1] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) var_11);
                            var_14 -= ((/* implicit */unsigned char) min((((unsigned short) arr_19 [i_4] [i_5] [i_4 + 1] [i_5] [i_4 + 1])), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_1)), (arr_17 [i_0] [i_1] [i_4 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            {
                var_15 += ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))), (var_8))), (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_6] [i_7] [i_7] [i_6] [i_7])) >> (((/* implicit */int) arr_3 [i_7])))))));
                var_16 += ((/* implicit */unsigned char) min((((var_2) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_7])) : (((/* implicit */int) arr_5 [i_6])))), (((/* implicit */int) (unsigned char)200))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((_Bool) var_6)) ? (((((((/* implicit */int) (unsigned char)200)) >> (((-109863213) + (109863224))))) << (((min((((/* implicit */long long int) (signed char)(-127 - 1))), (6444855141550296281LL))) + (140LL))))) : (((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), (var_3))), (((/* implicit */short) var_1)))))));
}
