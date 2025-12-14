/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141229
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
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)29)) ? (4076031962356725028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_15 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (_Bool)1)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) arr_10 [i_0] [i_0 + 3] [i_0]);
                        arr_11 [3LL] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (-7459458853036578133LL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_18 = ((_Bool) ((arr_7 [i_4 + 1] [i_4] [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4 + 3] [i_4])))));
        arr_14 [i_4] = ((/* implicit */unsigned char) ((min((arr_7 [i_4 + 1] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (2031616) : (((/* implicit */int) (short)30851))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 265849667))))))));
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (((/* implicit */int) (!(arr_4 [i_4 + 1] [i_4 + 2])))) : (((/* implicit */int) arr_6 [i_4 - 1] [i_4 + 2]))));
    }
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) arr_7 [i_5] [(unsigned char)10] [(unsigned char)10] [i_5 + 2]);
        /* LoopSeq 1 */
        for (unsigned char i_6 = 4; i_6 < 17; i_6 += 4) 
        {
            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_20 [(_Bool)1] [i_6 + 2]), (arr_20 [i_5] [i_6 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6 - 4])) ? (((/* implicit */int) arr_20 [i_5 + 1] [i_6 - 4])) : ((-2147483647 - 1)))))));
            arr_22 [i_5 + 2] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (arr_9 [2U]))), (((arr_5 [i_5] [i_6]) ? (((/* implicit */int) arr_10 [(short)5] [i_5] [i_5])) : (arr_13 [(unsigned char)10] [(_Bool)1])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_6]))) : (arr_8 [i_5] [i_6 - 1] [i_6])))) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? (3093396333371302191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2908)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_6 - 2] [i_5 + 3])) | (((/* implicit */int) arr_4 [i_6 - 1] [i_5 + 3]))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_6 + 2] [i_5 + 3]))) : (((/* implicit */int) arr_4 [i_6 - 2] [i_5 + 2])))))));
                var_21 = ((/* implicit */long long int) (-(2013265920U)));
            }
        }
    }
    var_22 += ((/* implicit */signed char) var_13);
    var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) 9223372036854775807LL))))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7)))))))));
}
