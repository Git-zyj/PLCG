/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158593
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && ((!(((/* implicit */_Bool) (unsigned char)96))))));
    var_19 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)15243)), (545473459U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned char)2] [i_1] [i_2])) == (((/* implicit */int) arr_0 [i_2])))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (545473459U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15243)) ? (545473459U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)6] [(unsigned char)6] [i_2])))))))))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (short)19151)) : (((/* implicit */int) var_16)))) != ((~(((/* implicit */int) var_6))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((short) 3749493843U))))) ? (((((/* implicit */_Bool) ((unsigned short) var_15))) ? ((~(545473465U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3749493811U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) % (-8512050381889915326LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((-(((/* implicit */int) var_0)))))), (((/* implicit */int) var_0))));
}
