/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108718
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((unsigned char) ((short) 8653169609889997420LL));
                    var_10 += ((((/* implicit */_Bool) arr_3 [(unsigned char)2])) ? (((((/* implicit */_Bool) 0U)) ? (((unsigned int) var_6)) : (arr_6 [i_1] [i_2]))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(unsigned short)6])) | (((/* implicit */int) (unsigned short)19))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : ((-(arr_6 [i_0] [1U]))))));
                }
            } 
        } 
    } 
    var_11 = ((((/* implicit */_Bool) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_9)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (4294967268U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16128))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((4095U) | (((((/* implicit */_Bool) (short)16128)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (7U))))));
    var_12 += var_0;
    var_13 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((4175044404U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23818)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)66)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (876537834U)))))), (var_5));
}
