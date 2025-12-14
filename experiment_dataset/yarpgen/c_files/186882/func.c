/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186882
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
    var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (2674556125U) : (((/* implicit */unsigned int) 2112640634))))) <= (((unsigned long long int) var_6)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_1] [11LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)3699))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1])))) * (((long long int) (unsigned short)9482))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0] = arr_2 [i_1] [i_3] [i_0];
                                var_21 = ((/* implicit */long long int) (-(-2112640634)));
                                var_22 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) 10927449312950853098ULL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (429414959U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92)))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61809))) : (arr_1 [i_0] [i_0]))))))));
                    arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27220))) + (max(((+(16314588467722838677ULL))), (((/* implicit */unsigned long long int) -261033920819935144LL))))));
                    arr_14 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((var_13), (arr_6 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0]))), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_1])) >= (((/* implicit */int) arr_9 [i_2] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1111710655291029213LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28636))) : (16541681247301195247ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21167)) | (((/* implicit */int) (signed char)(-127 - 1))))))));
                                arr_19 [i_0] = ((/* implicit */long long int) (~(18446744073709551615ULL)));
                                var_25 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1719839893)) && (((/* implicit */_Bool) (short)-6116)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1] [i_5 - 1] [i_6])) ? (var_0) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_5 + 1] [i_5] [i_6 - 2])))))));
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
}
