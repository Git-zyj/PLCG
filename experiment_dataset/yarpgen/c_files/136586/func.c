/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136586
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
    var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)16)) ? ((+(14693524884643383851ULL))) : (2305843009209499648ULL)))));
    var_15 = ((/* implicit */int) 16140901064500051968ULL);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (-(min((min((((/* implicit */unsigned long long int) var_13)), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (520475528U))))))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] &= (+(max((max((((/* implicit */unsigned long long int) (unsigned short)34732)), (16140901064500051968ULL))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2])))));
                }
            } 
        } 
        arr_10 [i_0] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) (signed char)81)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))));
        arr_11 [i_0] = ((/* implicit */unsigned long long int) (~(min((max((3897595557U), (76398170U))), (((/* implicit */unsigned int) ((_Bool) arr_2 [i_0] [i_0])))))));
        arr_12 [i_0] = ((/* implicit */int) (-((-(((unsigned int) var_4))))));
    }
    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(max((arr_6 [i_3 + 2] [i_3 + 1]), (((/* implicit */unsigned int) var_4)))))))));
        arr_17 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [(signed char)4] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_4 [i_3] [i_3 - 1] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (2305843009209499665ULL))))) : ((-(arr_4 [i_3] [i_3 - 1] [i_3 + 2])))));
    }
    for (long long int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_11)))) ? (max((arr_13 [(_Bool)1] [i_4 + 1]), (((/* implicit */unsigned long long int) arr_14 [(signed char)10])))) : (((/* implicit */unsigned long long int) (~(-1963125123)))))) == ((-(min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_13 [6ULL] [i_4])))))));
        var_19 = ((/* implicit */unsigned int) (-(min((2305843009209499643ULL), (14693524884643383851ULL)))));
        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_18 [i_4 - 1])), (var_7))), (((/* implicit */unsigned int) (short)1920))))), (arr_19 [i_4])));
    }
    for (long long int i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (max((2305843009209499647ULL), (((/* implicit */unsigned long long int) (+(arr_16 [i_5 + 2] [4U]))))))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) (-((-(max((var_1), (((/* implicit */unsigned int) arr_1 [i_5] [i_5]))))))));
    }
}
