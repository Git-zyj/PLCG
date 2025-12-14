/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186274
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
    var_12 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 0))));
    var_13 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (unsigned short)23))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) + (7305013842386515400LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (min((((/* implicit */unsigned short) (_Bool)1)), (var_8))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) min((-2666456038959929459LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))), (max(((unsigned short)36), ((unsigned short)65500))))))));
        var_15 = ((/* implicit */int) (((_Bool)1) ? (max((5876161933951623384LL), (((/* implicit */long long int) arr_1 [i_0])))) : (6075758749340029828LL)));
        var_16 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) max((arr_4 [(unsigned char)20] [i_2]), (((/* implicit */unsigned short) var_4)))))));
            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) 8313478314390991838ULL)) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) == (-5885917661631554764LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) : (arr_3 [i_1] [i_2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)171)) == (((/* implicit */int) (unsigned short)4147))))))))));
        }
        var_19 = ((/* implicit */long long int) (unsigned char)0);
    }
}
