/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169420
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)62335), (((/* implicit */unsigned short) (unsigned char)120))))) ? (var_3) : (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) var_17)))), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) (unsigned char)131))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)130), ((unsigned char)125))))) : (((((/* implicit */_Bool) var_10)) ? (-1152921504606846976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)496)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_21 = min((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 - 1])), (min((4800036007414793513ULL), (((/* implicit */unsigned long long int) -151236458)))))));
                        var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (arr_4 [i_0 - 2] [i_0 - 2]))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [(_Bool)1])) ? (arr_4 [i_0 + 1] [i_0]) : (arr_4 [i_0 + 1] [(unsigned char)9])))));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_9 [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_2])))) : (((((/* implicit */int) arr_12 [3ULL] [i_1] [i_2] [i_2] [14ULL])) ^ (((/* implicit */int) arr_12 [i_4] [8] [i_2] [i_0 - 2] [i_0 - 2])))))), (((/* implicit */int) var_5))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_2 + 1])) ? (arr_13 [i_4] [i_3] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15920)))));
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_17)))) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 - 2])))))) | (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? ((+(var_6))) : (((/* implicit */unsigned int) arr_6 [(_Bool)1]))))));
        var_26 = ((/* implicit */unsigned long long int) (unsigned short)22884);
    }
}
