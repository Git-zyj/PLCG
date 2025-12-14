/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12895
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) 1U)) : (-921109303438378852LL))) | (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) -280318756)) && (((/* implicit */_Bool) 17589357761001181759ULL)))))))));
                        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-30)) ? (min((((6759460396003827620ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))))), (((/* implicit */unsigned long long int) var_12)))) : (((((((/* implicit */_Bool) 144115188075855872ULL)) ? (857386312708369876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36799)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [(unsigned short)20] [i_3])))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) (-(min((min((((/* implicit */unsigned long long int) arr_4 [i_0] [10] [i_0 + 2])), (10ULL))), (((/* implicit */unsigned long long int) var_5))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_10))));
    }
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((var_12) % (((unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2518420977U)))))))));
    var_16 = var_0;
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) 18446744073709551605ULL))));
}
