/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138879
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_7)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))) ? (var_5) : (((/* implicit */unsigned int) (~(min((var_3), (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2835081224287103820LL))) << (((((/* implicit */int) (unsigned short)459)) - (401)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_3)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (var_3))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2835081224287103820LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) (unsigned short)459)) - (401))) - (58)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_3)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (var_3))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) var_2);
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_13 [(unsigned short)12] [i_0 - 1] [(signed char)10] [i_0] [i_1] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_9 [i_3] [i_3]))))));
                        var_13 = ((/* implicit */unsigned int) (signed char)15);
                        arr_14 [i_0 - 1] [i_0] [i_2 - 2] [i_3 - 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)));
                        var_14 = ((/* implicit */int) var_0);
                    }
                } 
            } 
        }
        arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) >> (((var_3) - (591763690))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_5))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_2 [i_0] [i_0]))));
    }
    var_16 = (!((!((_Bool)0))));
}
