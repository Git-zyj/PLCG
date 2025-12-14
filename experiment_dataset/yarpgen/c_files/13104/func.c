/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13104
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
    var_18 = ((/* implicit */unsigned char) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))));
    var_19 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [8ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_20 |= ((/* implicit */unsigned short) (short)20763);
        var_21 = ((/* implicit */unsigned short) var_7);
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) var_11);
                var_23 &= ((/* implicit */unsigned short) max((min((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)148)), (arr_7 [2LL]))))));
                arr_9 [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (arr_5 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)94))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_11)))))))) ? (((((/* implicit */int) ((arr_4 [2U]) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2])))))) % (((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)110)) << (((arr_7 [i_2]) - (2564005127U)))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (arr_5 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)94))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_11)))))))) ? (((((/* implicit */int) ((arr_4 [2U]) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2])))))) % (((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)110)) << (((((arr_7 [i_2]) - (2564005127U))) - (3856646358U))))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (1125899906842623LL)))) | (max((var_15), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_1 - 1]), (((/* implicit */long long int) (unsigned char)15))))) : (min((min((var_8), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) 2035661207U))))));
            }
        } 
    } 
}
