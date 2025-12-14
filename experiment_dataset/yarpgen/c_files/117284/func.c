/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117284
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_0) / (((/* implicit */long long int) ((/* implicit */int) (short)-12401))))), (((/* implicit */long long int) ((unsigned char) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0])))));
        var_16 = ((/* implicit */int) 11757220466981615487ULL);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((short) (~(var_14))));
                        var_18 -= ((/* implicit */short) ((_Bool) (~(((/* implicit */int) (short)-12401)))));
                        var_19 |= arr_8 [i_1] [i_1] [i_2] [i_3 + 1];
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_2 [i_3] [i_1]))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((int) var_8)) : (((/* implicit */int) var_11)))))));
        arr_11 [i_0] [i_0] = ((/* implicit */short) (!(arr_8 [i_0] [3LL] [i_0] [3LL])));
    }
    var_22 = ((/* implicit */int) (!((_Bool)1)));
}
