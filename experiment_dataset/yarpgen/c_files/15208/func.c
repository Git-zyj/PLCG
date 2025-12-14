/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15208
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_0])) ? (((/* implicit */int) max((arr_3 [i_1 - 1] [i_0]), ((unsigned short)44179)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_0])) : (((/* implicit */int) (unsigned short)6373))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20348)) ? (((/* implicit */int) (unsigned short)49663)) : (((/* implicit */int) (unsigned char)218))))) ? (((((/* implicit */_Bool) 10741840766976134540ULL)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (max((((/* implicit */int) ((unsigned short) (unsigned short)65532))), (((((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)10594)) : (((/* implicit */int) (unsigned short)34754))))))));
                        }
                    } 
                } 
                arr_12 [i_0] = (_Bool)1;
                arr_13 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_3 [i_0] [i_0])) << (0ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((max((((unsigned long long int) arr_5 [i_4] [i_4] [i_6])), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)37612))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned short)31197)) | (((/* implicit */int) arr_6 [i_4] [i_4] [i_6] [i_4]))))))));
                    var_16 = min((((((/* implicit */_Bool) 2366438472682535195ULL)) ? (18119335446283590731ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)39025))))));
                    var_17 = ((/* implicit */int) max((var_17), ((-(((((/* implicit */int) arr_19 [i_6] [i_5] [i_4])) + (((((/* implicit */_Bool) (unsigned short)54715)) ? (((/* implicit */int) (unsigned short)40186)) : (((/* implicit */int) arr_9 [i_4]))))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)64792)) : (((/* implicit */int) arr_1 [i_4])))))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)-24476))));
    var_20 = (-(((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (5120762014477592397LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_13))))));
}
