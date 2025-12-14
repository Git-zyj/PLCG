/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11945
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
    var_15 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) (+(var_3)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned int) ((2262985120721798448LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [0U])) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)3612)) > (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0 + 1] [i_0])))) : (((/* implicit */int) var_0))))) : (((long long int) (unsigned short)48107))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0]))))) ? (min((7318745785605149048LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0])))))));
                    arr_8 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)32759)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_0 + 1] [i_0] [i_0 + 2]) < ((~(0LL))))))) : (-7318745785605149064LL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_19 = ((long long int) var_9);
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (var_13) : (-2137247967114553402LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34827))) < (-7318745785605149048LL)))))));
                        arr_12 [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_0] [(_Bool)1] [i_0 + 2] [i_0]));
                    }
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2137247967114553402LL)) && (((/* implicit */_Bool) arr_2 [i_4 - 2] [i_4 + 1] [i_4 - 2])))))) == (arr_9 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4]));
        var_23 = ((/* implicit */long long int) min((var_23), (max((((long long int) (_Bool)1)), (arr_13 [i_4 + 1])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((long long int) (unsigned short)1));
        var_25 = ((/* implicit */unsigned int) var_14);
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((4070058580U) - (4070058558U)))))) || (((/* implicit */_Bool) (~(arr_3 [12U])))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)65522)) * (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */long long int) arr_9 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5])), (((var_3) >> (((((/* implicit */int) var_5)) - (755))))))))))));
    }
    var_27 = var_13;
}
