/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175278
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_7))));
    var_16 = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (var_9))) / (((/* implicit */int) var_14)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min(((signed char)-82), ((signed char)-77))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_4))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((unsigned char) (~(((unsigned int) (signed char)-27)))));
                        arr_14 [i_1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [7U] [7U] [15LL] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_3] [i_3] [i_3 - 1] [i_3 + 1]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])) ? (365964589U) : (511U))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) var_8);
}
