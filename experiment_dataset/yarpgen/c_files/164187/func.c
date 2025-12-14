/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164187
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
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(max((1740612426580610589ULL), (((/* implicit */unsigned long long int) (signed char)92)))))))));
    var_21 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_6))) > (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_5 [i_0] [11ULL] [i_2 + 1])))))))))));
                    var_23 |= ((/* implicit */unsigned short) ((var_6) != (((((620250273U) * (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2])))))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_2 - 2]))))) ? (var_3) : (((/* implicit */long long int) min((((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) : (620250273U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)2922))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 2] [i_1]))));
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)58))))) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_2 + 1])))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)57)))), ((~(arr_1 [i_1])))))) : (((unsigned int) arr_2 [i_2 + 1] [i_1]))));
                    }
                }
            } 
        } 
    } 
}
