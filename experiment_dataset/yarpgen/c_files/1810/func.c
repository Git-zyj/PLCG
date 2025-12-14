/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1810
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1879048192))))) >= (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_5)))))))) < ((~(((/* implicit */int) ((528482304) <= (((/* implicit */int) (signed char)6)))))))));
                arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) (signed char)-6))))) | (((((/* implicit */_Bool) (signed char)-6)) ? (2399693772U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                arr_5 [i_0] [i_1] [(unsigned char)14] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43310)) ^ (((var_9) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)-6))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), ((signed char)-6))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) -900299691))));
                var_15 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (35184372088704LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26266)))))) && (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)46041)), (var_1))))))), (min((-900299691), (((/* implicit */int) (signed char)-6))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1905885417U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */unsigned int) -530077480)), (819169284U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)35345)))))));
}
