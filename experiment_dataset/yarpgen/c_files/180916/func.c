/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180916
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
    var_16 = (!(((/* implicit */_Bool) var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)235))))));
                    var_18 = ((/* implicit */_Bool) ((long long int) var_4));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_1 [i_0]))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((var_5) || (arr_3 [i_0]))) ? (((/* implicit */int) ((short) (signed char)-25))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)-125))))) && ((!(arr_3 [(_Bool)1])))))))))));
                    var_21 &= ((/* implicit */signed char) (_Bool)0);
                    var_22 = (!(((((/* implicit */_Bool) var_1)) && (var_9))));
                    var_23 ^= var_5;
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */int) ((short) arr_5 [i_0]))) < (((/* implicit */int) arr_7 [1LL]))))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [(_Bool)1]) ? (((/* implicit */int) arr_8 [12LL] [i_0] [i_1] [(signed char)0])) : (((((/* implicit */int) var_5)) << (((908317082) - (908317081)))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_5 [17LL]))) + (var_0))) >> (((((3818174112842304548LL) / (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (3818174112842304540LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    arr_13 [(signed char)11] [(signed char)9] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)26)), (max((-248685646), (((/* implicit */int) (short)-20714))))));
                    var_26 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) -1377402612)) >= (6315894894890047788LL))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_27 *= ((/* implicit */long long int) max((((arr_17 [10] [i_7 - 1] [i_7 - 1] [i_7 - 1]) / (var_2))), (((/* implicit */int) max((arr_3 [i_7 - 1]), (arr_3 [i_7 - 1]))))));
                                arr_23 [i_7 - 1] [i_6] [i_6] [7LL] [i_1] [i_0] [12LL] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((int) -1742049293473837369LL))))));
                                arr_24 [i_0] [(_Bool)1] [i_5] [8LL] [i_7 - 1] |= ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) * (var_6))) - (((var_14) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))));
                }
                var_29 = (!(((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_3 [i_0])))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) (_Bool)0);
}
