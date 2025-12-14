/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161453
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
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */_Bool) (~(((1289510164003664038ULL) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0])))))));
        var_17 = ((/* implicit */int) ((unsigned int) (_Bool)1));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [18])) + (((/* implicit */int) arr_3 [i_0]))))) ? (((int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((arr_0 [i_0] [(signed char)6]) >= (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_4 [(unsigned char)9] [(unsigned char)9]);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [18LL])) / (((/* implicit */int) arr_6 [i_1]))))) <= (arr_5 [i_1])))) ^ (((/* implicit */int) arr_6 [(signed char)4]))));
        var_21 = ((/* implicit */signed char) ((short) ((_Bool) ((unsigned short) arr_6 [i_1]))));
        var_22 = ((/* implicit */unsigned int) ((_Bool) ((((unsigned int) arr_6 [i_1])) ^ (((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((arr_0 [i_2] [19ULL]) + (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])))) : ((-(7ULL)))))) ? ((((-(((/* implicit */int) arr_2 [i_2] [i_2])))) ^ (((/* implicit */int) ((_Bool) (_Bool)0))))) : (((((/* implicit */int) ((_Bool) arr_4 [i_2] [i_2]))) * (((/* implicit */int) ((signed char) 8386560U)))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) arr_5 [i_2]);
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((signed char) (((~(((/* implicit */int) arr_2 [15LL] [15LL])))) & (((/* implicit */int) ((_Bool) arr_1 [i_3]))))));
                            arr_19 [i_2] [i_3] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3])) && (((/* implicit */_Bool) arr_3 [i_4]))));
                        }
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_4])) ? (arr_5 [i_2]) : (arr_5 [i_2])));
                    }
                } 
            } 
        } 
        var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_2])))) >= (arr_5 [i_2]));
    }
}
