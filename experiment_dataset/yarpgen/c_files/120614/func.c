/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120614
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
    var_20 ^= ((((/* implicit */_Bool) -559128225)) ? (2924474327U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((1370492943U), (((/* implicit */unsigned int) (unsigned short)4270))))) | (var_16)));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_23 = var_10;
            var_24 = 2147483647LL;
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) -1331629685))));
                arr_8 [i_1] [i_1] [i_1] [7] = ((/* implicit */unsigned long long int) var_8);
                arr_9 [i_1] [i_1] = ((/* implicit */short) ((_Bool) arr_4 [i_1] [i_2 + 1]));
                var_26 ^= ((/* implicit */unsigned short) ((((unsigned int) (unsigned char)250)) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            }
        }
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_27 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_3]);
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) ((arr_10 [i_0] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4278))))))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 4294967295U);
            var_29 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((short) var_10))), (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (var_16))))));
        }
        arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((signed char) var_17)))))) * (((/* implicit */int) ((((((/* implicit */int) var_8)) / (((/* implicit */int) var_1)))) < (min((((/* implicit */int) var_12)), (1331629706))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((_Bool) (short)-18637)))));
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (short)21027))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_32 = ((/* implicit */signed char) ((unsigned long long int) ((max((((/* implicit */unsigned long long int) (short)18626)), (523669300297223413ULL))) * (var_16))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_5]) ? (((/* implicit */int) arr_12 [i_5] [i_6] [i_6])) : (((/* implicit */int) arr_12 [i_5] [i_6] [i_6]))))) ? (((/* implicit */int) min((arr_12 [i_5] [i_5] [i_6]), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) max((arr_4 [i_5] [i_5]), (((/* implicit */signed char) arr_6 [i_5])))))));
            arr_21 [i_5] [i_6] = ((/* implicit */long long int) var_6);
            arr_22 [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_17))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) var_5))) : (((((/* implicit */int) var_11)) ^ (var_0)))))));
        }
    }
}
