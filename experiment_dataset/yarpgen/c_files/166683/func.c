/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166683
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
    var_20 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_13)))), (((/* implicit */int) var_17))));
    var_21 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) (unsigned char)8)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255)))))));
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (134217728) : (((/* implicit */int) (unsigned char)0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)33151))))))) : (((((/* implicit */_Bool) var_5)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_24 = ((/* implicit */short) ((_Bool) var_16));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_25 = ((/* implicit */int) var_18);
                        arr_11 [(unsigned char)19] [i_1] = ((/* implicit */int) var_2);
                        arr_12 [3LL] [i_1] [21ULL] [(short)17] = ((/* implicit */unsigned short) (!(arr_10 [23U] [23U] [(_Bool)1])));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned char) 14073363775333759834ULL));
                            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1]))));
                        }
                    }
                } 
            } 
        }
    }
}
