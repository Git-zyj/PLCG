/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133390
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
    var_18 = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12530))) & (var_7))))) << (((/* implicit */int) ((((/* implicit */int) (short)12530)) < (((/* implicit */int) (unsigned short)9868)))))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)25)), ((short)-12530)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned long long int) arr_3 [i_1 - 1]))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32289)))))) ? (((/* implicit */int) ((unsigned short) 1770455713))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)5931)) : (var_17))))) : (((((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))) & (((/* implicit */int) ((unsigned short) var_1)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */int) (unsigned char)194);
                    var_21 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) (unsigned char)126)) - (98)))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) arr_3 [i_0])), (max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-2)))), (11155166528549180097ULL))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(unsigned char)17] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+((-(14004917793765871550ULL)))))));
                }
                arr_13 [i_0] [i_1 + 2] [i_0] = ((/* implicit */long long int) var_9);
            }
        } 
    } 
}
