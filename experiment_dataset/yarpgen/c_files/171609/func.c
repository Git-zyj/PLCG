/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171609
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (-(((7198975626668678351LL) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (165)))))));
        arr_2 [i_0] = ((/* implicit */signed char) (-(((long long int) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && ((_Bool)1)))), (min((((/* implicit */long long int) (_Bool)1)), (2015745872773203321LL)))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(arr_3 [i_1] [i_1 - 1])))) - (5829267923145606633ULL)));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_17 = (_Bool)1;
            var_18 = ((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2]);
        }
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((short) arr_9 [i_2])))));
        var_20 ^= ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_9 [i_2]))))));
    }
    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 1) 
    {
        var_21 = ((/* implicit */long long int) arr_7 [i_4]);
        var_22 = max((min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [(unsigned char)5])))), (8884205648591698290LL))), (7102130559728563190LL));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) - (7213272554254012037ULL))))))))));
    }
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_9) >> (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11)))))))) != (((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) (unsigned short)31259))))) ^ ((~(1568846659709476006ULL))))))))));
    var_25 = ((/* implicit */short) ((unsigned char) var_0));
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_12))))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)127))))) + (var_10))))))));
}
