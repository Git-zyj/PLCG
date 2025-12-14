/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15883
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_5))))) ? (var_13) : (((long long int) (signed char)-120)))), (((/* implicit */long long int) var_4)))))));
        var_17 -= min((4294967284U), (((/* implicit */unsigned int) (signed char)-120)));
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
    }
    for (int i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        arr_6 [6LL] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_5 [i_1 - 1]), ((unsigned char)57))))));
        var_19 = ((/* implicit */unsigned char) arr_0 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                arr_12 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_9 [i_1 - 2]) & (((/* implicit */int) (signed char)124))));
                var_20 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)246)) <= (((/* implicit */int) arr_10 [i_1] [i_2] [i_3])))) ? (arr_7 [i_1 - 3] [i_3 + 2]) : (arr_2 [i_1 + 3] [i_1 + 3])));
                var_21 = (~(((/* implicit */int) arr_10 [i_3 + 2] [i_3 + 4] [i_3 + 2])));
                var_22 = ((/* implicit */long long int) (signed char)79);
                var_23 = (+(arr_1 [i_1 + 2]));
            }
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) == (((((/* implicit */_Bool) (signed char)126)) ? (arr_7 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))));
        }
    }
    var_25 -= ((/* implicit */short) min((283489636), (((/* implicit */int) (_Bool)1))));
}
