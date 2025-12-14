/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129805
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
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) 18446744073709551615ULL);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_13 &= (unsigned short)13188;
                            arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) var_6));
                            var_14 ^= ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((var_11) == (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_9 [3] [11LL])))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_4 + 1] [i_5] [i_4] [i_1])))))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_12 [i_4 + 2] [i_0 - 3] [i_0] [i_0] [4U] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                {
                    arr_23 [i_7] [i_7 - 1] [(_Bool)1] = ((/* implicit */short) arr_19 [i_7] [i_6]);
                    var_18 &= min((((/* implicit */unsigned long long int) (unsigned short)52348)), (max((((/* implicit */unsigned long long int) arr_20 [i_6] [(_Bool)1] [i_8])), (18446744073709551615ULL))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (unsigned short)52348))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((min((((/* implicit */unsigned int) var_10)), (var_4))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_4)))))));
}
