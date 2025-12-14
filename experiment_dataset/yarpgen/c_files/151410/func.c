/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151410
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
    var_10 = (unsigned short)54096;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_12 = ((/* implicit */_Bool) 3116802306U);
                    var_13 = ((/* implicit */unsigned char) var_5);
                }
                for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_17 [i_3] [i_3] [i_4] [i_4] [(signed char)21] = ((/* implicit */_Bool) var_0);
                                arr_18 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_5))) >> (((unsigned long long int) var_1))));
                                arr_19 [i_3] [(short)15] [i_3] [(short)15] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)56742))))) : ((-(var_0))))) != (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(var_3)))), (2763019084809426549ULL)));
                    var_15 = ((/* implicit */unsigned short) (-(min((((long long int) var_5)), (((/* implicit */long long int) ((int) (-9223372036854775807LL - 1LL))))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (var_2)))) && (((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                }
                arr_20 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */unsigned char) ((((_Bool) ((short) 9223372036854775807LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -4688672456808926578LL))))))) : (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_1)) : (var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 3956377851700277087LL)) : (2763019084809426549ULL))) : (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))))));
                arr_21 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL))))))) >> (((var_4) - (82673250)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) 189823144);
}
