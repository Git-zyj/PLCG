/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109941
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
    var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -543730439)) : (9223301668110598144ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (var_13) : (var_6)))) : ((~(var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((short) (-(min((((/* implicit */unsigned long long int) var_13)), (arr_3 [13] [i_1] [13]))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_0 [i_1 - 1]))))))));
            }
        } 
    } 
    var_20 = 288230367561777152ULL;
    /* LoopSeq 3 */
    for (short i_2 = 2; i_2 < 7; i_2 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) ((var_12) << (((min((((/* implicit */unsigned long long int) arr_8 [i_2])), (var_14))) - (7092296392507189466ULL)))))) ? (((/* implicit */unsigned long long int) ((int) (short)-8203))) : (arr_5 [i_2]));
        var_22 = ((/* implicit */int) min((var_22), (((int) ((((/* implicit */_Bool) arr_3 [i_2 + 3] [10ULL] [i_2])) ? (((/* implicit */unsigned long long int) max((1071644672), (((/* implicit */int) (short)-849))))) : ((~(9223301668110598144ULL))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2])))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((140737488354304ULL), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2 - 1] [i_2]))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_4 [(short)0] [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) arr_4 [i_2] [i_2 + 4] [i_2])))) : (((/* implicit */int) ((short) (-2147483647 - 1))))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_25 = arr_5 [i_3];
        var_26 = ((((/* implicit */_Bool) (-(4194304)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 140737488354304ULL)) ? ((-2147483647 - 1)) : (arr_7 [(short)1])))))) : (9223442405598953467ULL));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_27 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_4]))));
        var_28 = max((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) arr_6 [0] [(short)17] [i_4])), (arr_5 [i_4]))))), (15358412943826991907ULL));
    }
}
