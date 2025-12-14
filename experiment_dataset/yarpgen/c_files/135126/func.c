/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135126
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))) ? (((/* implicit */unsigned long long int) max(((+(var_3))), (((/* implicit */long long int) ((var_8) < (((/* implicit */int) var_13)))))))) : (min(((((_Bool)0) ? (var_16) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)133)), (var_14))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_6 [7ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((0) != (((/* implicit */int) (unsigned char)54))));
            var_19 *= (((+(((/* implicit */int) (_Bool)0)))) & ((+(((/* implicit */int) ((_Bool) (_Bool)1))))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [(_Bool)1]);
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) 3695843531598948018ULL));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */long long int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0] [i_2])))))))), (arr_3 [i_0] [i_2]))))));
            var_21 = ((((((/* implicit */_Bool) 3919982221739527144ULL)) ? (((((/* implicit */long long int) var_14)) + (-1888599485976456642LL))) : (((long long int) var_6)))) / (((((/* implicit */_Bool) max(((short)2525), (((/* implicit */short) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((((_Bool)1) ? (-1LL) : (-1LL))))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned char) (-((+((-(6615644519679111964LL)))))));
        var_22 ^= var_10;
        var_23 = ((/* implicit */long long int) arr_9 [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (short)4415))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) 22))));
        var_26 = ((/* implicit */unsigned long long int) var_5);
    }
    var_27 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (281474976710655LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((((/* implicit */_Bool) (unsigned short)44364)) && (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) (((+(var_12))) <= ((+(var_11)))))));
}
