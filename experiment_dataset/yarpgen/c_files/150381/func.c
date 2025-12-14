/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150381
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) % (var_3)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
    var_17 = ((/* implicit */unsigned short) ((4057621483930876579LL) | (-330650607766390032LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)49152)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)141)) ? (arr_3 [(signed char)6] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (unsigned char)128)))));
        var_22 = ((/* implicit */_Bool) var_9);
    }
}
