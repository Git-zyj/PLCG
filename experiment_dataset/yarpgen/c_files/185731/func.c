/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185731
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_1 [i_0] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2] [i_1] [i_0])))))));
                    var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-19))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max(((((+(((/* implicit */int) (signed char)-12)))) + (((/* implicit */int) var_7)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))));
                                var_20 += ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] = max(((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_1 [i_1] [i_1]))))), (max((arr_9 [i_0] [i_0] [i_2]), (((unsigned long long int) var_7)))));
                    arr_14 [i_1] [(signed char)4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max(((unsigned short)65532), ((unsigned short)0)))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)44)), ((unsigned char)254)))))) < ((~(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_21 = var_16;
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) var_14);
                var_23 ^= ((/* implicit */_Bool) arr_18 [i_5] [i_6]);
            }
        } 
    } 
}
