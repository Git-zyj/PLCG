/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146600
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
    var_19 &= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_1))) > (((/* implicit */int) min((var_0), ((signed char)91))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */int) (short)-1)), (-616038996)))))) ? (((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (signed char)-69)))) : (((((/* implicit */_Bool) -616038996)) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (signed char)-69)))) : (((/* implicit */int) ((signed char) (signed char)111))))))))));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-66))));
        var_22 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_2 [i_0 - 2]))), (((((/* implicit */int) (signed char)0)) % (((/* implicit */int) var_4))))));
    }
    var_23 = ((int) var_11);
    /* LoopNest 3 */
    for (short i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        for (short i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    var_24 = ((var_8) * (((((/* implicit */_Bool) max((var_9), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))) : (min((((/* implicit */int) var_14)), (arr_4 [(unsigned char)5]))))));
                    arr_11 [(signed char)7] [i_3] [(signed char)4] = ((/* implicit */unsigned char) max((((((((/* implicit */int) (signed char)-123)) == (((/* implicit */int) (signed char)62)))) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (short)-4)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) min(((unsigned char)163), (((/* implicit */unsigned char) (signed char)68))))) : (((((/* implicit */int) (short)32767)) << (((((/* implicit */int) (unsigned char)92)) - (81)))))))));
                    var_25 = max((((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)-15)) || (((/* implicit */_Bool) -1990224541))))))), (((signed char) max((((/* implicit */unsigned char) arr_2 [i_3])), ((unsigned char)209)))));
                }
            } 
        } 
    } 
}
