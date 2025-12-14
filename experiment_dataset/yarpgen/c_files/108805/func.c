/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108805
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
    var_17 = ((/* implicit */unsigned short) 4993850011692366275LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)28)), ((+(((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_0 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)28)), (1658984921)))), (((unsigned int) arr_3 [i_0]))))) || (((/* implicit */_Bool) 4993850011692366307LL))));
    }
    var_18 = max((((/* implicit */long long int) ((((/* implicit */_Bool) min((-212566975), (((/* implicit */int) (unsigned short)13))))) ? ((+(((/* implicit */int) (unsigned char)29)))) : (((/* implicit */int) (!((_Bool)1))))))), ((+(((((/* implicit */_Bool) (unsigned short)25578)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-4364455618774578727LL))))));
}
