/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137886
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
    var_14 = min((var_5), (((/* implicit */long long int) max((((/* implicit */int) min(((signed char)-36), (var_1)))), (((((/* implicit */_Bool) (unsigned short)41068)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (signed char)36);
            var_15 = ((/* implicit */long long int) arr_1 [i_0]);
            var_16 = ((/* implicit */long long int) min((max((((/* implicit */int) arr_1 [i_0])), (((int) var_8)))), (var_8)));
            arr_5 [(signed char)11] [i_0] = ((/* implicit */signed char) max((var_5), (min((((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_6)))))))));
            arr_6 [(short)12] &= ((/* implicit */long long int) min((max((((/* implicit */int) arr_3 [i_1 + 1] [i_1] [12])), ((-(((/* implicit */int) (signed char)-1)))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned char)4])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) arr_0 [(unsigned short)2] [(unsigned short)2])))) <= (((((/* implicit */int) (signed char)-36)) * (((/* implicit */int) var_3)))))))));
        }
        for (short i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned short) var_11);
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_3] [i_3])), ((+((-(((/* implicit */int) arr_1 [i_3])))))))))));
                        var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-36))))) : (((long long int) var_10))))));
                    }
                } 
            } 
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -1152921504606846976LL);
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (int i_6 = 2; i_6 < 11; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) - ((-(var_10)))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((1152921504606846963LL) & (max((((/* implicit */long long int) arr_19 [i_6])), (arr_17 [6LL] [i_5] [i_6]))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-36))))), (max((((/* implicit */long long int) (signed char)94)), (-1LL))))))))));
                    arr_23 [i_6] [i_0] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_21 [i_6 + 1] [i_0]) + (2147483647))) << (((726382482U) - (726382482U)))))) ? (min((arr_14 [i_0] [i_5] [i_5] [i_6 - 1]), (((((/* implicit */_Bool) (signed char)-64)) ? (-1152921504606846976LL) : (18LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_11 [i_0] [i_5] [i_5] [i_6 + 2]))))))))));
                    var_23 = ((/* implicit */signed char) ((long long int) -1108236912));
                }
            } 
        } 
    }
}
