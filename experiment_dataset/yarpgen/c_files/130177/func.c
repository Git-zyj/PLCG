/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130177
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = (((-(min((((/* implicit */unsigned int) (unsigned char)149)), (var_0))))) % (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)149)), (var_7))))));
        var_20 = ((/* implicit */unsigned short) var_6);
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned char) ((var_15) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), ((unsigned char)149)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_22 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) (unsigned char)106))))))));
                arr_7 [14ULL] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)141)), (var_1))))))));
                arr_8 [(unsigned short)9] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
            }
            arr_9 [i_0] &= ((/* implicit */int) var_3);
        }
    }
}
