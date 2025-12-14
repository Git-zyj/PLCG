/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171379
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-761434487) : (((/* implicit */int) var_2))))))));
                    var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) (unsigned char)244)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
                    var_21 |= (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)4))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -5258116929646653535LL)) : (var_1)))))) ? ((~(((((/* implicit */_Bool) -4052380855777271060LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))) : ((+((+(((/* implicit */int) var_9))))))));
}
