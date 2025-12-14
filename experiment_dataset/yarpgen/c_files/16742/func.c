/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16742
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
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) ((signed char) 1722241849))), (((((/* implicit */_Bool) 150189056)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 3])) : (((/* implicit */int) (signed char)40)))))));
            var_19 = ((((/* implicit */unsigned int) ((int) arr_3 [i_1 - 2] [i_1]))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned int) ((int) (unsigned short)61969))) : (max((503316480U), (((/* implicit */unsigned int) (unsigned short)24876)))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned long long int) max((max((min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1632533669)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)27076))))))), (((/* implicit */long long int) max(((+(4294967295U))), (((/* implicit */unsigned int) max((-1302152312), (-572985907)))))))));
        arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (short)13789)))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) == (0U)))), (((unsigned short) (-9223372036854775807LL - 1LL)))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 378744307)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (-1572750984))) - (216))))))));
    }
}
