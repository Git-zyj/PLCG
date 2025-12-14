/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175430
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
    var_14 = (+(var_2));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_11)))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_16 = max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (6804143192212265443LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (signed char)-37)) : (((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_11 [i_0 + 1] [i_0] [i_0] [(signed char)10] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) max((var_8), (var_11)))) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_0] [(signed char)0] [i_2] [i_3])) : (((/* implicit */int) var_6))))))), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (var_13))))));
                        var_17 = ((/* implicit */long long int) var_3);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_2 + 2])) ? (min((((/* implicit */long long int) arr_6 [i_0 + 1] [i_1 - 1] [i_2 + 1] [i_3 + 1])), (max((arr_10 [i_0] [i_1]), (var_9))))) : (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_2] [i_2 - 3] [i_3 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_8 [i_0 + 1] [i_1] [i_2 - 3] [i_3 - 1])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((4360903753238411892LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))));
        arr_14 [i_4] [i_4] = ((long long int) var_8);
        /* LoopSeq 1 */
        for (signed char i_5 = 2; i_5 < 21; i_5 += 4) 
        {
            arr_17 [0LL] = var_2;
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_4])))))));
            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5 - 2] [i_5 + 2] [i_5 + 2])) ? (((((/* implicit */_Bool) var_1)) ? (-6804143192212265443LL) : (6804143192212265443LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                var_22 = ((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 2]))));
                arr_22 [i_4] [i_4] [i_6] = ((/* implicit */signed char) arr_8 [i_4] [i_4] [(signed char)1] [i_6]);
                var_23 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (((var_5) / (arr_3 [21LL]))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4))));
            }
            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (-6804143192212265444LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-36)))))))))));
                var_26 = ((((/* implicit */_Bool) var_5)) ? (arr_19 [i_4 + 1] [i_5 - 1] [i_5 + 2] [i_7]) : (var_9));
                arr_25 [i_4] [(signed char)10] [(signed char)18] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_19 [i_4] [i_4] [i_5] [i_7])))));
            }
        }
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 21; i_8 += 4) /* same iter space */
    {
        arr_28 [i_8] |= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8 + 1] [i_8]))) : (((var_13) + (var_13))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) arr_5 [i_8] [i_8 + 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)19] [i_8 - 2])))))));
    }
}
