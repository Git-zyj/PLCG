/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161911
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
    var_18 -= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [i_4])))));
                                arr_15 [i_3] [i_2] [i_4] [(_Bool)1] [3ULL] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_16))))));
                                var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((short) -1317155429))) || (((((/* implicit */unsigned long long int) -1317155436)) > (arr_3 [(signed char)9] [i_1]))))));
                                var_21 &= ((/* implicit */short) ((unsigned short) ((((((/* implicit */int) var_11)) < (((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (var_13))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((((arr_9 [i_1]) + (arr_9 [i_1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [(signed char)16]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [16LL] [16LL])) > (arr_14 [i_2] [i_1] [(signed char)6] [i_0] [i_2])))))))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_11 [(signed char)4] [i_0] [1U] [19ULL] [i_2] [(unsigned short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_7 [(unsigned short)1] [(short)6] [i_0]))))), (((/* implicit */unsigned int) ((_Bool) ((arr_4 [i_2] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))))));
                }
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0])) ? (min((((/* implicit */unsigned int) var_9)), (arr_9 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1317155447)) ? (1317155436) : (((/* implicit */int) (signed char)-103)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) ((short) var_11))) : ((-(((/* implicit */int) var_9))))))), (var_10)));
    var_26 ^= ((/* implicit */signed char) var_13);
}
