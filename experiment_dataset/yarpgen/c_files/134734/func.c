/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134734
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) arr_0 [i_1]))));
            var_13 += (-(((/* implicit */int) arr_0 [i_1])));
        }
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2] [i_2])))))));
        var_15 = ((/* implicit */unsigned long long int) 2522736908U);
        var_16 -= ((/* implicit */unsigned char) (+(-109328896214948331LL)));
        arr_8 [i_2] = ((/* implicit */short) ((unsigned char) arr_6 [i_2] [i_2]));
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1244562495)) & (((13658551795304726904ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))))));
    }
    var_17 = ((/* implicit */int) (+(13658551795304726916ULL)));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_3)), (var_0))) & (min((((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_1))))), (max((2814792761U), (((/* implicit */unsigned int) -1922964073)))))))))));
}
