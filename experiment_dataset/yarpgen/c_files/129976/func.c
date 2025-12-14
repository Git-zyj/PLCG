/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129976
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)26750)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26742)) ? (((/* implicit */int) (unsigned char)176)) : (var_9)))))))))))));
    var_18 = ((((/* implicit */unsigned long long int) var_4)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26760)) ? (var_15) : (((/* implicit */unsigned long long int) 3558583169U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))))))));
    var_19 += ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [(unsigned char)8] [i_1] [(unsigned char)8] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [13])) ? (-2) : (((/* implicit */int) arr_2 [1LL] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (3558583169U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26742)) ? (((/* implicit */int) (short)-26755)) : (((/* implicit */int) (unsigned short)65535))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33423)) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [(unsigned char)14])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_1] [(unsigned short)4] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 1] [i_3])) : (((/* implicit */int) (signed char)-94)))) ^ (((/* implicit */int) (unsigned char)210))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_1 + 2]))) : (74542073689120524ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0])) << (((/* implicit */int) arr_2 [i_3] [i_0]))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (944668313U) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]))))))));
                            var_20 ^= ((/* implicit */unsigned char) ((arr_6 [i_3] [(signed char)6] [i_0]) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)10] [i_2] [(short)10])) ? (-2) : (((/* implicit */int) (short)12138))))) ? (((-290316949) / (((/* implicit */int) (unsigned short)18580)))) : (((/* implicit */int) arr_4 [i_2 + 3] [i_1 + 2] [i_1 + 1])))))));
                        }
                    } 
                } 
                arr_12 [(unsigned short)2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [15ULL] [i_0]);
                var_21 *= arr_3 [i_1 - 1] [i_1] [(signed char)14];
            }
        } 
    } 
}
