/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122193
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((9020988093644665658ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 11266307894278552812ULL))))))))));
                        arr_12 [i_2] [i_2] = ((unsigned short) ((min((9425755980064885957ULL), (1875864111139493788ULL))) - (((((/* implicit */_Bool) 9425755980064885958ULL)) ? (16736247801920885621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32060)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [(unsigned short)13] [i_1 - 1] [i_2 - 1] [i_2] [16ULL] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)32989);
                                arr_20 [7ULL] [i_0] [15ULL] [i_2] [10ULL] [i_0] [i_0] = ((/* implicit */unsigned short) (~(11266307894278552812ULL)));
                                arr_21 [i_0] [i_2] [9ULL] [i_2] [i_0] = ((unsigned long long int) (~(((unsigned long long int) 0ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)56380)) ? ((~(((/* implicit */int) ((unsigned short) (unsigned short)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1596820959751532446ULL)))))));
}
