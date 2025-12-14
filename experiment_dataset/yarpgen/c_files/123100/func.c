/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123100
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1] [i_2]);
                    arr_7 [i_0] = ((/* implicit */short) (((((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_1])))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) var_17))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1] [i_1])))))));
                        var_20 = ((/* implicit */unsigned short) (-((~(((((/* implicit */int) (_Bool)1)) << (((arr_5 [i_0] [i_1] [i_2] [i_3]) + (1641036862)))))))));
                    }
                    for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_4]))) * (var_15)));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4])) ? (-1137896890) : (-1137896911))))))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), ((unsigned char)221)));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_4 [i_0] [i_2] [i_2] [i_4])) >> (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (8999957782088501041ULL)))))))) ? (704853456) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_4] [i_2] [i_1] [i_0]) : (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) arr_1 [i_0]))))))))));
                        arr_16 [i_4] = ((/* implicit */long long int) max(((short)21623), (((/* implicit */short) (_Bool)1))));
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2]))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2]) / (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2])))) ? (((arr_5 [i_1 - 1] [i_2 + 2] [i_2 + 3] [i_5]) - (arr_5 [i_1 + 1] [i_2 + 2] [i_2 - 1] [i_5]))) : ((+(((/* implicit */int) arr_0 [i_1 - 2]))))));
                        var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 3] [i_2 - 1] [i_2] [i_2 + 2])) & (((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 3] [i_2 - 1] [i_2] [i_2 + 2]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_27 &= -1855559857034963915LL;
                                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_1 [i_7])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */int) var_14)) % (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) != (var_1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1137896913)))))))))))));
    var_30 = ((/* implicit */short) ((int) var_7));
    var_31 = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (short)10596))))));
}
