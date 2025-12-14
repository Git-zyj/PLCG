/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164225
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
    var_19 = var_8;
    var_20 |= ((/* implicit */int) (unsigned short)2258);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (-2147483647 - 1));
                            arr_10 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */int) (+(7366376769007710615LL)));
                            arr_11 [(unsigned short)17] [(unsigned short)17] [i_2] [i_3] |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2076696633U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3125))) : (min((var_2), (var_1))))) * (((/* implicit */unsigned int) arr_0 [i_0]))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned char) 2076696633U);
                                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46278)) <= (max((619208824), (((619208824) << (((((-5245528544923219584LL) + (5245528544923219595LL))) - (10LL)))))))));
                                var_25 = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) > ((-2147483647 - 1))));
                            }
                            arr_14 [(unsigned short)12] [i_1 + 1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_7 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) ((-7366376769007710616LL) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_14))))) != (max((0U), (((/* implicit */unsigned int) (unsigned short)47397)))))))) : (max((((/* implicit */unsigned int) (unsigned short)0)), (2076696633U)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) && (((/* implicit */_Bool) ((int) -1520726094)))));
                arr_15 [14U] [i_0 - 3] [i_0 - 3] = ((/* implicit */short) min(((+(min((((/* implicit */long long int) -280814518)), (-5245528544923219584LL))))), ((((-(0LL))) + (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
            }
        } 
    } 
}
