/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131293
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (max((2824616695U), (((/* implicit */unsigned int) (unsigned short)26932))))))) ? (((/* implicit */int) max((max((var_3), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) var_2))))) : (((max(((_Bool)1), (var_6))) ? (((/* implicit */int) max(((unsigned short)56596), (var_4)))) : ((~(((/* implicit */int) (unsigned short)64317))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((253952LL) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4088))) : (206158430208LL))))))));
                    var_17 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4088)) != (((/* implicit */int) (_Bool)1))));
                    arr_7 [(unsigned short)14] [i_1] [i_2] [i_1] &= arr_4 [16];
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (((-(((/* implicit */int) var_3)))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) != (0LL))))))) - (((((/* implicit */int) max((arr_5 [i_1] [(_Bool)1]), ((unsigned short)45140)))) ^ (879914429))))))));
                }
                for (unsigned short i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) var_3);
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1065665572)) != (max(((-(3788022427U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_17 [i_0 + 2] [i_0] [6] [6] = ((-5874575308210223138LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43350))));
                        arr_18 [i_0] [i_1] [12LL] [12] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(_Bool)1]))));
                        var_21 = ((((/* implicit */_Bool) -4458588437353088875LL)) && (((/* implicit */_Bool) (unsigned short)64317)));
                        arr_19 [i_1] [i_1] [i_1] [i_6] [(unsigned short)12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_1 [i_0]))));
                        arr_20 [i_0 - 1] [i_1] [i_3] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [(unsigned short)7] [i_0] [i_1] [i_3] [i_0])) ? (0LL) : (-5959707976839764340LL)))) ? (((/* implicit */unsigned int) (~(-2083800152)))) : (165380558U)));
                    }
                    arr_21 [i_0] [i_0] [i_0] = arr_15 [i_0] [i_1] [i_0] [i_0 + 3];
                    arr_22 [i_0] = ((/* implicit */_Bool) (unsigned short)31663);
                    arr_23 [(unsigned short)6] [i_1] [i_0] = ((/* implicit */long long int) (~(1204112693U)));
                }
                arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_10 [i_0 + 3] [i_0 + 3] [i_1] [i_0 + 2] [i_0 - 4] [i_0]), (arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0] [i_1] [i_1])))) - (((((/* implicit */_Bool) -1289109109)) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_0])))));
                var_22 = ((/* implicit */long long int) max((var_22), ((+(((long long int) (!(((/* implicit */_Bool) (unsigned short)56088)))))))));
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((745558087), (686340970)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 159845545U)) ? (985147842828894938LL) : (3515408676444013987LL)))))) || ((_Bool)1));
}
