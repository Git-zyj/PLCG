/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176334
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
    var_15 -= var_14;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [(unsigned short)3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)146)) != (((/* implicit */int) (short)-21033))))) + (((/* implicit */int) (_Bool)0))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 14539563857546418740ULL))) ? ((-(((/* implicit */int) (unsigned char)48)))) : (((/* implicit */int) ((unsigned char) -9007643807060083764LL)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) != (arr_5 [i_0])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3453)))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)21893)) ? (((/* implicit */int) (short)21040)) : (((/* implicit */int) (unsigned short)38749)))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_19 = ((/* implicit */long long int) arr_14 [i_0] [i_0]);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~((~(var_2))))))));
            }
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) && (var_13)));
        }
    }
    var_22 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_2)))))));
}
