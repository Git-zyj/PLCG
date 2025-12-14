/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162687
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
    var_11 = ((/* implicit */int) (~(7497532317571028280ULL)));
    var_12 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_3)))), ((!((!((_Bool)0)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((unsigned long long int) var_4)) != (7497532317571028303ULL))))));
                            var_14 ^= ((/* implicit */unsigned short) ((((arr_2 [i_0 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (((unsigned int) ((((/* implicit */_Bool) 10949211756138523334ULL)) && (((/* implicit */_Bool) var_6)))))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 10949211756138523313ULL))));
                            arr_11 [i_0] [i_0] [i_1] [2LL] [(unsigned short)7] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1825400933)), (10949211756138523335ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) >= (((/* implicit */int) arr_4 [i_3 + 1])))))) : (min((((/* implicit */unsigned long long int) 1892621027)), ((~(var_6)))))));
                            arr_12 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_3 + 3] = var_10;
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) (unsigned char)242);
                var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26324))) / (arr_9 [i_0] [i_0 + 2] [(unsigned short)13] [i_0] [i_0 + 2]))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 7497532317571028280ULL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1]))) - (7497532317571028280ULL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_18 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_4] [i_4])) && (((/* implicit */_Bool) 3535800823906319179ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4])) && (((/* implicit */_Bool) var_6))))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(var_8)))) & (arr_14 [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)51928))))) : (17387774399210499204ULL)));
        var_20 &= ((/* implicit */signed char) min(((-(((/* implicit */int) arr_13 [i_4])))), (((/* implicit */int) min(((unsigned char)109), (var_1))))));
    }
}
