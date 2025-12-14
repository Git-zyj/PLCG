/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134172
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
    var_13 = ((/* implicit */unsigned short) (-(2198989701120LL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) + (var_12)))) ? (((int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? ((((((~(((/* implicit */int) (unsigned char)17)))) + (2147483647))) >> ((((~(((/* implicit */int) var_1)))) + (186))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) <= ((~(((/* implicit */int) var_10)))))))));
                    var_14 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [12LL] [12LL]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 3; i_3 < 7; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (+((+(var_3)))));
                            arr_19 [i_3] [0LL] [i_4] [i_3] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 2]))))))));
                        }
                    } 
                } 
                arr_20 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-31)), ((unsigned char)12)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)251)), ((short)3944))))) : (arr_1 [i_3] [i_4])))) ? ((~(var_0))) : (((/* implicit */long long int) var_2))));
                arr_21 [i_3 - 1] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_16 [i_3] [i_4]))))));
                arr_22 [i_3] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) var_11)), (var_12))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)4)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_7])))))));
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_34 [i_7] [i_8] [i_7] [i_10] [i_7] = ((/* implicit */unsigned long long int) arr_29 [i_7] [i_7] [i_10]);
                            arr_35 [i_7] [i_7] [i_10] [i_7] [i_7] [16U] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242)))))) != (var_0)))), (var_7)));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_3))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)143)))))))));
                            arr_36 [i_7] [i_8 + 2] [i_9] |= ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
}
