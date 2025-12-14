/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103976
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_2] [i_2] [i_2] [(short)0] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)74)), ((unsigned short)65523))))));
                                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_4]))));
                                var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 63050394783186944ULL)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)19] [i_0] [(unsigned short)19])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)120)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_11 [i_3] [i_0])))))) != (((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4] [i_4] [i_4 - 2] [(unsigned char)18] [(signed char)16])) ? (((arr_2 [i_4]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)19214)))) : (((/* implicit */int) var_3))))));
                                arr_13 [(signed char)15] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (arr_6 [i_0] [i_1])))) : (min((arr_9 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) (signed char)-48);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 24; i_5 += 4) 
    {
        for (unsigned short i_6 = 2; i_6 < 24; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            arr_24 [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_5] [i_5])) * (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_22 [i_8] [i_5] [i_6 + 1] [i_5 - 1] [i_5]))))));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((max((arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_7]), (arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_8]))), (((((/* implicit */_Bool) arr_23 [i_5 + 1] [i_8] [i_6 - 2] [i_6 - 2])) ? (arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_6 - 1]) : (arr_23 [i_5 + 1] [i_7] [i_6 - 2] [i_8]))))))));
                            arr_25 [(signed char)21] [i_5] [i_5] [(signed char)21] = ((/* implicit */unsigned int) (signed char)120);
                        }
                    } 
                } 
                arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) max(((((_Bool)1) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) (unsigned short)32768)))), (min((((/* implicit */int) ((((/* implicit */int) (signed char)-112)) > (((/* implicit */int) (signed char)46))))), (((((/* implicit */_Bool) (unsigned short)44027)) ? (((/* implicit */int) arr_19 [i_5] [i_6])) : (((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_6);
}
