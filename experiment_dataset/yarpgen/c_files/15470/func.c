/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15470
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-1972))))) | (4644633655609286053ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((min((((/* implicit */unsigned int) (_Bool)1)), (2819867873U))), ((~(var_10)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((unsigned int) (+(423785641035343702ULL))))));
                            arr_13 [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (2064384LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) 1948463613908681957LL)) ? (((/* implicit */unsigned long long int) 1948463613908681957LL)) : (var_2))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) % (var_14)))) ? (max((-1398181546621847566LL), (((/* implicit */long long int) (short)8891)))) : (((/* implicit */long long int) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)1), (((/* implicit */unsigned char) var_1))))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] &= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (8191)))), (((((/* implicit */_Bool) -4373136378958489763LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_14))))) << (((/* implicit */int) ((((/* implicit */long long int) 2928603938U)) < (((9996500295725999LL) % (((/* implicit */long long int) 3225211424U)))))))));
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_5] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (((+(15185432565732056478ULL))) <= (((/* implicit */unsigned long long int) 2152813855U)))))) & ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 872109288U))))));
                        }
                        var_19 = (((_Bool)1) ? (((((/* implicit */_Bool) 1920514870U)) ? (1764342282209077325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((6689966079411547135ULL) >= (var_5)))) >> (((min((((/* implicit */unsigned long long int) 4294967295U)), (2161727821137838080ULL))) - (4294967284ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 47327973U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (short)16115))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((+(var_16)))))));
                        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5483524787515796638LL)) ? (2677457610U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20347)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (8936635269819686659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) var_16))));
                    }
                    var_21 = ((/* implicit */_Bool) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) 3024788862U)) || (((/* implicit */_Bool) 11756777994298004459ULL)))))));
                }
            } 
        } 
    } 
}
