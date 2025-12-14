/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114619
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-26784)) - (((/* implicit */int) arr_4 [i_2] [i_1]))))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) min((arr_5 [(unsigned char)2] [i_0]), (((/* implicit */unsigned short) (short)-26784)))))));
                    var_12 = ((/* implicit */long long int) var_3);
                    var_13 += ((/* implicit */short) arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-26788)) + (2147483647))) >> (((3997849232U) - (3997849207U)))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((((~(((/* implicit */int) arr_11 [i_4] [i_3])))) + (2147483647))) << (((((/* implicit */int) ((short) arr_12 [i_4]))) - (16635))))))));
                var_16 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_4]))));
            }
        } 
    } 
    var_17 = (-(max((((((/* implicit */_Bool) 727608701785781350LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))), (((/* implicit */long long int) var_6)))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (short)-26784)) : (((/* implicit */int) (unsigned char)137)))) ^ (((/* implicit */int) (unsigned short)54182))))) - (((long long int) min((((/* implicit */unsigned int) var_6)), (3997849232U))))));
    var_19 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) 297118063U)))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(var_8)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
}
