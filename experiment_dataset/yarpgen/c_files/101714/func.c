/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101714
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_18 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -910777672)) ? (((((/* implicit */_Bool) -910777669)) ? (arr_0 [(signed char)18] [(signed char)18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [18ULL])) ? (arr_1 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))))));
        var_19 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 910777669)))))) <= (min((var_0), (3230149004U)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))));
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (14754651594172651098ULL)))) ? (((((/* implicit */_Bool) -910777672)) ? (-5197037756253191996LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_13) == (910777671)))))));
        var_22 |= ((/* implicit */int) ((arr_0 [14] [14]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) == (((/* implicit */int) var_15))))))));
    }
    for (short i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_23 = ((/* implicit */signed char) arr_6 [i_3]);
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_5 + 3] [i_5 - 1] [i_5 + 3] [i_5 - 1])) : (((/* implicit */int) arr_10 [i_5 + 3] [i_5 + 1] [i_5 + 1] [i_5 + 3])))) % (((/* implicit */int) arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_2] [i_3]) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((int) -5197037756253191996LL)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) var_8))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 2) 
        {
            arr_15 [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_3 [i_2]) <= (((/* implicit */int) var_8))))) / (max((var_5), (910777668))))) % (((/* implicit */int) var_8))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31650)) | (((/* implicit */int) var_15))))) < (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2]))))), (((var_12) - (var_9)))))));
        }
        arr_16 [i_2] [i_2] = 910777669;
        var_27 *= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)252)), (((((/* implicit */_Bool) -910777669)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((910777660) <= (((/* implicit */int) (unsigned char)30)))))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (((((/* implicit */_Bool) ((-910777672) / (((/* implicit */int) var_10))))) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)28))))))));
}
