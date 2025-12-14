/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10239
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [14ULL] [12U]) : (((/* implicit */unsigned long long int) var_1)))), (arr_3 [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [8U])))) : (var_8)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [(short)8] [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_3])))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                            arr_11 [i_0] [(unsigned char)11] [(unsigned short)10] [i_2] [i_3] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((((unsigned int) ((var_3) <= (((/* implicit */int) var_15))))) | (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [5LL] [i_0])) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */int) arr_7 [i_0] [i_1])))))))) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1]))));
                arr_13 [i_1] &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_6 [(unsigned char)13] [i_0] [i_1] [(_Bool)1]))) >> (((((/* implicit */int) min(((signed char)-2), (((/* implicit */signed char) (_Bool)1))))) + (21)))))), (min((-9223372036854775805LL), (((/* implicit */long long int) arr_9 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_21 [i_4] [i_5] = ((/* implicit */signed char) (_Bool)1);
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (arr_18 [i_4] [i_4])));
                var_18 = ((/* implicit */long long int) max((max((arr_2 [i_4] [i_5]), (arr_3 [i_4] [i_4] [i_4]))), (((/* implicit */unsigned long long int) (unsigned char)80))));
                var_19 -= ((/* implicit */int) arr_18 [i_5] [i_4]);
            }
        } 
    } 
}
