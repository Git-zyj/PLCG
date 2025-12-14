/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182862
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (+(((((((/* implicit */int) (signed char)127)) != (((/* implicit */int) arr_6 [i_0] [i_1])))) ? (((unsigned long long int) arr_6 [i_0] [i_1])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_15 [i_3] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) (signed char)-114)));
                            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (15303074023069913830ULL)))))));
                            var_22 = ((/* implicit */_Bool) ((short) arr_5 [i_1]));
                        }
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_23 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)24)) != (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)72)), ((unsigned char)157))))));
                            arr_20 [i_0] [(_Bool)1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))))), (min((arr_11 [5LL] [i_1] [i_1] [i_3] [i_5] [i_5]), (((/* implicit */unsigned char) (_Bool)1))))));
                        }
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-105)), ((short)24824)))) ? (((/* implicit */int) ((short) var_16))) : ((~(((/* implicit */int) (unsigned char)74)))))))))));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 |= ((/* implicit */signed char) (+(((/* implicit */int) (short)-17086))));
                        var_26 *= ((/* implicit */_Bool) (((!(arr_17 [i_0] [i_1] [i_6] [i_7] [i_0]))) ? ((-(((/* implicit */int) ((_Bool) var_10))))) : (((/* implicit */int) (unsigned char)39))));
                        arr_27 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) >> (((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : (var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_8 [i_1] [i_6])), ((unsigned char)224)))))) - (35ULL)))));
                        arr_28 [i_6] [i_1] [i_6] [i_7] = ((/* implicit */short) ((unsigned char) ((signed char) (signed char)-4)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_1] [(unsigned char)8] [i_6] [i_6] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_1] [i_1] [i_8]))));
                        var_27 = (unsigned char)0;
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-40))))), (((((/* implicit */_Bool) (unsigned char)219)) ? (12641084772528067389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                    }
                    var_29 = ((/* implicit */long long int) ((short) var_15));
                }
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((_Bool) ((unsigned long long int) var_0))))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)108)) - (((/* implicit */int) (unsigned char)57))))) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_9)))))))) != (((/* implicit */int) ((unsigned char) min(((unsigned char)74), ((unsigned char)245)))))));
}
