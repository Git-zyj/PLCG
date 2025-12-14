/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157467
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (_Bool)0))))) * (((var_14) / (arr_0 [i_0] [3LL]))))), (min((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_18 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) < (min((var_14), (((/* implicit */unsigned int) arr_3 [i_5])))))))) < ((-(((arr_11 [i_1] [i_4] [i_4]) + (((/* implicit */long long int) arr_0 [i_5] [i_5])))))));
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_1] [i_1] [i_3] [i_4] [i_5]), ((unsigned char)180))))) : ((~(var_6)))))) && (((/* implicit */_Bool) (((_Bool)1) ? (4095LL) : (((/* implicit */long long int) 0U)))))));
                                arr_18 [i_5] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) 20798963491357100LL)) ? (1395279620U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_19 [i_1] [i_2] [i_1] [i_4] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(68229172U))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) : ((((~(var_8))) % (((var_8) | (var_6)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_23 [i_6] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_9 [i_1])))) & (((/* implicit */int) min(((unsigned char)153), ((unsigned char)62))))))));
                        var_20 |= min((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) (unsigned char)255))))))), ((((_Bool)0) ? ((~(3367543578U))) : (4226738124U))));
                    }
                }
            } 
        } 
        arr_24 [i_1] [i_1] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_3 [(unsigned char)10])) - (((/* implicit */int) var_11))))))), ((-(min((var_6), (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [4U] [i_1]))))))));
    }
    var_21 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))))) * (min((4294967295U), (((/* implicit */unsigned int) (unsigned char)235))))))));
}
