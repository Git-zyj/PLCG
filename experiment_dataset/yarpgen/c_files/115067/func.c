/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115067
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
    var_19 -= ((/* implicit */signed char) ((214923304U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4080044002U)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_16)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((min((((long long int) arr_3 [i_0 + 2])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)4] [(unsigned char)4])) ? (501423911U) : (var_17)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)251))) ? (((((/* implicit */_Bool) var_10)) ? (2467790312U) : (((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 2] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))))))));
                var_21 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-2147483647 - 1))), (4080043988U)))) ? (1023702849U) : (2913934839U));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_13)))))))), (((((/* implicit */_Bool) var_2)) ? (((unsigned int) arr_8 [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 2])))))));
                    arr_10 [i_0] [i_0] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */int) (unsigned char)31)) : ((-(arr_4 [i_0] [i_1 - 2])))))) | (((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_2]))))));
                }
                arr_11 [i_0] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-110))))), (max((((/* implicit */unsigned int) ((unsigned char) 4080043993U))), ((-(var_13))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)2))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((long long int) var_18)))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((signed char) var_15)))))))));
    var_23 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)55197)))) & (((((/* implicit */_Bool) 122880U)) ? (1023U) : (1023702859U)))))) + (((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
}
