/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115302
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = arr_2 [i_0];
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    var_17 = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
                    var_18 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    arr_8 [i_0] [i_1] [i_0] [i_2 + 2] = ((/* implicit */signed char) (~(((/* implicit */int) ((max((arr_4 [8U] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_16)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_19 += ((((/* implicit */_Bool) min((arr_6 [i_3] [i_1] [i_0]), (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 2147483647)))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) (signed char)19))))))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_14))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 7; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_15 [i_6] [i_5 - 3] [(signed char)9] [i_5 - 1] [i_4])))) ? (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_5 + 3] [i_1])) ? (arr_15 [i_6] [i_5] [i_5] [i_5 - 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [(_Bool)1] [2ULL] [i_5 + 3] [i_1])))))));
                                var_22 *= ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61)))))));
                                var_23 = ((/* implicit */_Bool) ((2147483647) << ((((((~(((/* implicit */int) (signed char)127)))) + (145))) - (17)))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_7))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */_Bool) ((short) arr_0 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_1])))))) : (min((((/* implicit */unsigned long long int) var_12)), (15279757699572557342ULL))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    arr_21 [i_0] [i_1] [5] = ((/* implicit */int) (~(var_14)));
                    arr_22 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                }
                arr_23 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0] [i_1])) + (2147483647))) << (((((((/* implicit */int) var_0)) + (27))) - (12)))))) < (((((/* implicit */_Bool) ((unsigned char) 5011693229948779478ULL))) ? (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_0]))) : (arr_9 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_0 [i_0] [i_1])) - (2147483647))) + (2147483647))) << (((((((/* implicit */int) var_0)) + (27))) - (12)))))) < (((((/* implicit */_Bool) ((unsigned char) 5011693229948779478ULL))) ? (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_0]))) : (arr_9 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                arr_24 [i_0] [(signed char)9] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_15 [i_0] [(unsigned char)4] [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (signed char i_9 = 4; i_9 < 18; i_9 += 1) 
        {
            for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) 
            {
                {
                    arr_34 [i_8] [6ULL] [i_10] [i_10 - 1] = ((/* implicit */signed char) ((unsigned short) 16083323396692768198ULL));
                    var_26 += ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
}
