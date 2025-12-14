/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120993
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
    var_18 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47744))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)17792)) : (((/* implicit */int) (signed char)126))))) ? (min((17309469174806706196ULL), (17309469174806706203ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))))))));
    var_19 = ((/* implicit */_Bool) var_2);
    var_20 = ((((/* implicit */_Bool) 10287142488423478970ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (405224764174811621LL));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [3] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_8 [7LL] [i_3] [i_1 + 2] [i_3])))));
                                arr_13 [3U] [3U] [3U] [i_0] [3U] [2U] = ((/* implicit */unsigned short) 10287142488423478970ULL);
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)47743);
                                arr_15 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47743))) != (max((((/* implicit */unsigned long long int) min((arr_4 [(unsigned short)6] [i_3] [i_0] [i_0]), ((unsigned short)47743)))), (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-74))))) & (max((-955650787), (((/* implicit */int) (unsigned short)38509))))))) ? (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)85)), (arr_11 [8ULL] [(short)8] [8] [i_2] [i_2]))))))) : (max((((unsigned long long int) arr_2 [i_2] [(unsigned char)5])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12571)) >> (((8159601585286072661ULL) - (8159601585286072636ULL))))))))));
                    arr_17 [6] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? ((((+(var_10))) - (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (var_6)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((-4) + (2147483647))) >> (0ULL)))), (((unsigned long long int) var_11))));
}
