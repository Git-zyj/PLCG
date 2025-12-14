/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139707
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)17771)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((var_13) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)26)) - (26))))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)47)))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_3) - (var_3))), (((/* implicit */long long int) ((short) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)219)), (var_4)))) ? (arr_1 [i_1] [i_1]) : (((unsigned int) var_2))))));
        var_19 = ((/* implicit */signed char) ((unsigned int) max((938789947U), (((/* implicit */unsigned int) var_14)))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (short)-32748)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)32748))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)231)) ^ (((/* implicit */int) (short)31281))))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_0 [i_2])), (var_4))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((short) arr_1 [i_3] [i_3]));
                    var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((-6885684965928074657LL) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4])))))), ((unsigned char)203)))) ? (((/* implicit */unsigned int) var_6)) : ((((!(((/* implicit */_Bool) -6027184227760438614LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_1 [i_3] [i_3]))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((((/* implicit */long long int) max((1225049709), (((/* implicit */int) (unsigned char)52))))) | (((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-27926))))))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) var_4);
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((max((861462801U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) var_6))))) : (max((((/* implicit */long long int) ((unsigned char) 6027184227760438599LL))), (min((((/* implicit */long long int) var_7)), (var_9))))))))));
}
