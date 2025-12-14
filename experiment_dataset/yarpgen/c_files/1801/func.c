/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1801
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
    var_11 ^= ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */unsigned long long int) -54603768);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((max((var_1), (arr_0 [i_0 - 2]))) ? (min((((/* implicit */int) arr_0 [i_0 + 1])), (var_8))) : ((~(((/* implicit */int) arr_0 [i_0 + 2]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_14 = ((/* implicit */long long int) var_2);
            var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) (short)-28958))), (((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_9 [i_0 + 1] = ((/* implicit */unsigned char) (short)21321);
            arr_10 [i_2] [(short)9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 15660246505244832541ULL))) << (((/* implicit */int) ((unsigned short) arr_0 [i_0 + 2])))));
        }
        var_16 -= ((_Bool) ((var_1) ? (((/* implicit */unsigned long long int) arr_7 [i_0 + 1])) : (var_6)));
    }
    var_17 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (-((+(((/* implicit */int) var_4))))))), (min((var_5), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44601)) ^ (((/* implicit */int) (short)-21333)))))))));
    var_18 = ((/* implicit */long long int) (-(var_8)));
}
