/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139108
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
    var_11 = ((/* implicit */long long int) max((137521863U), (((/* implicit */unsigned int) (unsigned short)32999))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */long long int) min((((/* implicit */int) ((4136318841661022110LL) > (4136318841661022110LL)))), (min((((/* implicit */int) var_4)), (var_7)))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)3777)), (arr_3 [i_1 - 1] [i_1 - 1] [4ULL])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_1), (((/* implicit */short) (unsigned char)98))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)20826))) + (4157445441U))))))));
                        var_14 = ((/* implicit */short) var_0);
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_0 - 1] [i_2])) ? (min((min((((/* implicit */long long int) var_3)), (-9LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2995257614U)) ? (((/* implicit */int) (short)20822)) : (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) 2995257603U))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32545))) < (18446744073709551612ULL))))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */long long int) 137521863U)) - (((((((((/* implicit */_Bool) (signed char)-76)) ? (-4136318841661022125LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) + (9223372036854775807LL))) >> (((((arr_8 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))) + (7492668868716081085LL)))))));
    }
}
