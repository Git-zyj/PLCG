/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177009
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
    var_14 = ((/* implicit */unsigned short) ((((-902076329) <= (((/* implicit */int) var_11)))) ? ((-(((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)244)))))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (((~(274876858368LL))) == (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [(unsigned short)7] [(unsigned short)2])))))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_15 [15LL] [(_Bool)1] [(signed char)17] [14U] [i_1] [(_Bool)1] [(signed char)3] = ((/* implicit */int) arr_2 [6ULL]);
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (signed char)99))))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) (unsigned short)65535)));
            arr_17 [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_1] [16] [13] [i_1]);
        }
        for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            arr_20 [16] [(signed char)15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65528))) ? (((/* implicit */int) ((_Bool) (-2147483647 - 1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58549))))))))));
            var_18 ^= min((arr_6 [0LL] [(signed char)4] [(signed char)9]), (min((((/* implicit */int) arr_7 [i_0 - 1])), ((+(((/* implicit */int) var_11)))))));
            var_19 = ((((var_2) + (2147483647))) >> (((/* implicit */int) ((_Bool) min((arr_9 [4U] [(unsigned char)16] [14LL] [(signed char)12]), (arr_9 [(unsigned short)2] [6] [(unsigned short)8] [16U]))))));
        }
        arr_21 [(unsigned short)4] |= ((/* implicit */int) max(((~(max((var_7), (((/* implicit */long long int) (short)32754)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) -1073741824)), (3221225472U))))));
    }
}
