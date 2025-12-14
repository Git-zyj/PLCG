/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151659
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
    var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)5808)), (var_16)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2371121237770562977ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) 0ULL);
                            arr_9 [i_2] [i_1] [3U] [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [i_0]);
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) 16075622835938988639ULL))))) ^ (((/* implicit */int) min((((((/* implicit */int) var_11)) == (((/* implicit */int) arr_2 [i_0])))), ((!(((/* implicit */_Bool) var_1))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_11))));
                                arr_13 [(unsigned short)0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) var_11)))))));
                                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_1 [i_1])), ((((+(0ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))));
                            }
                            for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_14 [i_3] [i_1] [i_2] [(signed char)13] [i_0] [i_5]))))));
                                var_20 = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_1] [i_2] [i_3] [i_0]));
                                var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))) ^ (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) arr_6 [i_0])), (18446744073709551615ULL))))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((short) (~(arr_7 [i_0] [i_0]))));
                var_23 = (i_0 % 2 == zero) ? (((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_0])) - ((~(((/* implicit */int) arr_2 [i_0])))))), ((((((-(((/* implicit */int) var_8)))) + (2147483647))) >> ((((-(arr_11 [i_0] [i_0]))) - (2064707432)))))))) : (((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_0])) - ((~(((/* implicit */int) arr_2 [i_0])))))), ((((((-(((/* implicit */int) var_8)))) + (2147483647))) >> ((((((-(arr_11 [i_0] [i_0]))) - (2064707432))) + (1042352682))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                                arr_27 [i_0] [i_0] = (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_6] [i_7] [i_8])));
                            }
                        } 
                    } 
                } 
                arr_28 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (~((~(16075622835938988639ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]))))) ? (((/* implicit */long long int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (arr_1 [i_0])))) : (max((((/* implicit */unsigned long long int) 2282102176U)), (6ULL))));
            }
        } 
    } 
    var_25 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) < (((((/* implicit */unsigned long long int) ((int) var_1))) ^ (max((((/* implicit */unsigned long long int) var_3)), (16075622835938988638ULL)))))));
}
