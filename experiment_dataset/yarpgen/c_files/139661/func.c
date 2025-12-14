/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139661
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-31), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */int) var_10)) : ((-(-463468250)))))) ? (((((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) (unsigned short)48938)) : (2093056)))) ^ (min((var_17), (((/* implicit */unsigned int) var_16)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    var_20 += ((/* implicit */unsigned short) min(((unsigned char)87), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)196)) && (((/* implicit */_Bool) (signed char)126)))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1549104827)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)-117)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [0U] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-6)))) < (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)0))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)215);
            }
        } 
    } 
}
