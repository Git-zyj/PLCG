/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137493
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
    var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (1652581466105098782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned int) (_Bool)0)), (4294967274U)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [(signed char)6] [i_1 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((/* implicit */int) ((unsigned short) ((unsigned char) (signed char)-58))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_0 [i_0 - 1] [i_1 + 2]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)-91))))) && ((!(var_9))))))));
    var_21 = ((/* implicit */int) (signed char)-93);
    var_22 = ((/* implicit */_Bool) 829011376);
}
