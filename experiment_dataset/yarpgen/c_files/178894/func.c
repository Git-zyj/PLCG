/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178894
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
    var_11 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (signed char)-74)) <= (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */_Bool) (short)-4984)) ? (16766399702006728493ULL) : (var_4))) : (min((var_4), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) <= (((((var_6) ? (var_4) : (((/* implicit */unsigned long long int) var_3)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17)) && (((/* implicit */_Bool) -284036058813751724LL))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((min(((~(var_1))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_2 [i_1])), ((short)4983)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) - (max((var_3), (((/* implicit */int) arr_2 [i_1])))))))));
                    arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) arr_2 [i_1])))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_4)) ? (-2082608046) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((var_8), (((/* implicit */short) var_5)))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) min(((signed char)-75), ((signed char)-48)))))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (3151701393U)))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)5)))) : (((/* implicit */int) (!(var_7))))))));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) (!(arr_3 [i_0])))), (((var_7) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] = ((/* implicit */short) (+(min((max((-1270937570), (var_3))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (short)-23308))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) / (var_1)))))) ? (((((/* implicit */_Bool) ((arr_17 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))))) ? (min((((/* implicit */long long int) (unsigned char)230)), (-558297727686772621LL))) : (((/* implicit */long long int) ((1143265902U) >> (((((/* implicit */int) var_10)) - (52389)))))))) : (((/* implicit */long long int) max((((/* implicit */int) min(((unsigned short)16101), (((/* implicit */unsigned short) arr_2 [i_0]))))), (min((((/* implicit */int) var_9)), (var_3))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) << (((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)28))) : (var_2))))) + (49LL)))));
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) max((max(((short)32767), (((/* implicit */short) (signed char)74)))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)29)) < (((/* implicit */int) var_7)))))))), ((+(min((((/* implicit */long long int) (unsigned short)27219)), (558297727686772621LL)))))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9))))), (min((((/* implicit */unsigned long long int) 2147483647)), (var_0))))))));
}
