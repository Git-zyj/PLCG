/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142051
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
    for (short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1] [i_1] [(short)6]));
                            var_16 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) && (((((/* implicit */_Bool) arr_1 [(short)6])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])))))), (var_10)));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (signed char)9)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_11 [i_1] [i_1] [i_1 - 1])))));
                var_17 -= ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_10 [i_0 - 4] [9] [i_0 - 1] [i_0 - 2] [(unsigned char)5]))) << (((/* implicit */int) ((max((arr_11 [(_Bool)1] [(_Bool)1] [i_1]), (((/* implicit */long long int) (signed char)-62)))) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) % (var_8))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13175)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)78)))) : (((1683760951) << (((((((/* implicit */int) var_2)) + (21008))) - (19)))))))), (((var_7) ? (((/* implicit */unsigned long long int) ((unsigned int) var_13))) : (((3319842223742717863ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_3)) <= ((+(max((var_8), (-1753445063438082906LL)))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                arr_19 [i_5] = var_1;
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */_Bool) ((unsigned char) var_2));
                            arr_26 [(signed char)14] [i_7] [(short)11] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8018)) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (arr_17 [i_7 - 1] [10ULL]) : (arr_21 [i_4] [i_4] [i_4])))));
                            arr_27 [i_4] [(unsigned char)3] [4LL] [i_7] [i_7] = ((short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)220)))) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6]))) : (-1LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
