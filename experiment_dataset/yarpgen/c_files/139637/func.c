/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139637
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) max((var_10), (((((/* implicit */_Bool) ((int) arr_0 [i_0 + 2]))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) + (207349860)))) : (((long long int) max((1370618097105724651ULL), (((/* implicit */unsigned long long int) var_3)))))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) max(((((-(var_9))) - ((-(7058374677648366890ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_0 [i_0]), (var_6)))) & (((/* implicit */int) (unsigned char)0))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) arr_0 [i_1]);
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_0 [i_2]))))))))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)31470)) != (((/* implicit */int) var_1)))) ? (((/* implicit */int) max((var_2), (((/* implicit */short) (unsigned char)63))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57626)) > (((/* implicit */int) var_5)))))))) : ((-(1073741823U)))));
}
