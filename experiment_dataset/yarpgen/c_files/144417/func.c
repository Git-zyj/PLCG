/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144417
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = max((1337030879215230438ULL), (((/* implicit */unsigned long long int) ((int) (signed char)83))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (-5434581643171977882LL)))) || (((/* implicit */_Bool) max((1337030879215230438ULL), (17109713194494321157ULL)))))))));
            var_19 = min((((_Bool) arr_1 [i_0] [i_1 - 1])), (((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) != (-392851798512195976LL))) && (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((signed char) (signed char)-101)));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((18064884284095442051ULL) - (17109713194494321178ULL))))));
        }
    }
    var_21 = ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9512))) | (var_12))))) >> (((((((_Bool) (_Bool)1)) ? (min((((/* implicit */unsigned long long int) 4247085192U)), (17109713194494321178ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (4247085166ULL)))));
}
