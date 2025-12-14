/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146866
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
    var_10 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (2147483648U) : (var_9)))) && (((/* implicit */_Bool) (+(17099503320437121629ULL)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [(signed char)8] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((var_9), (max((((/* implicit */unsigned int) 1048575)), (4294950912U)))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)69))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)243)))) == (((/* implicit */int) (signed char)-109)))))) : (((((/* implicit */_Bool) (signed char)-109)) ? (389947807U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) 12089476384666340678ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-109))))))));
}
