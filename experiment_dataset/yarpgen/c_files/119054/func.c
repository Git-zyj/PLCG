/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119054
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) var_14);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
        var_19 ^= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (var_7)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) 0U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_20 |= ((/* implicit */short) var_12);
                        var_21 = ((/* implicit */_Bool) ((int) max(((unsigned short)7034), ((unsigned short)3785))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_19 [i_3] = (+(((unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_14))))));
                            var_22 += ((/* implicit */unsigned int) ((unsigned short) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_15))))));
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_4] [i_5])) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7040)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58496))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)14661))))) : (((/* implicit */int) arr_16 [i_3 + 1] [i_4] [i_4] [i_3 + 1] [i_4]))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3 - 1]))))) ? (((((/* implicit */_Bool) 15645162727431837248ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3797)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) && (((/* implicit */_Bool) arr_4 [i_3 - 1])))))));
                            var_24 += ((/* implicit */long long int) ((unsigned short) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) arr_5 [i_3] [i_1])))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2059806992)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)61751))));
                        }
                        var_26 = ((min((8742252631374798711ULL), (((/* implicit */unsigned long long int) (unsigned short)61721)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) var_8);
    }
    var_28 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned char)186))) | (((/* implicit */int) var_14))))), (((((/* implicit */long long int) ((/* implicit */int) var_15))) % (((long long int) var_8))))));
}
