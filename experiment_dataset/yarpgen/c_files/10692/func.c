/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10692
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((var_6), (((/* implicit */short) arr_1 [i_0] [i_0])))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) var_4)) : (arr_6 [i_1] [i_1] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1])))))))) ? ((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)62)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (7968948372862820766LL) : (-7968948372862820767LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) var_9))));
                        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_2]))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_19 -= ((/* implicit */signed char) arr_10 [(signed char)16] [i_2] [i_1] [(signed char)16]);
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) var_12);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1])) != (((/* implicit */int) ((_Bool) (signed char)46)))));
                        }
                        var_22 = ((/* implicit */short) arr_6 [i_1] [i_1] [i_4]);
                    }
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == ((+(max((((/* implicit */unsigned long long int) arr_14 [i_0] [(short)0])), (0ULL)))))));
                    var_24 = ((/* implicit */_Bool) ((signed char) 0ULL));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) var_0);
}
