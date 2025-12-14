/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167039
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
    var_18 = ((/* implicit */unsigned int) ((min((var_13), (((/* implicit */unsigned long long int) var_17)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) var_0))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_19 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 17633470473029888218ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (var_10))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [(_Bool)1])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 3; i_2 < 12; i_2 += 3) /* same iter space */
            {
                var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [(short)6] [i_0 - 1])) ? (17633470473029888218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 2])))));
                var_21 ^= ((/* implicit */short) ((int) arr_5 [i_0 - 1] [i_2] [i_2 - 2]));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 3] [i_0])) || (((/* implicit */_Bool) ((unsigned short) var_14)))));
            }
            for (signed char i_3 = 3; i_3 < 12; i_3 += 3) /* same iter space */
            {
                arr_11 [i_0] [i_0] [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((arr_8 [i_0] [i_0 - 1] [i_1] [8LL]), (var_10)))))) ? (max((arr_8 [i_0 - 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((var_0), ((unsigned short)15290))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17633470473029888239ULL)))))))))));
                arr_12 [(unsigned short)6] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
            }
            for (signed char i_4 = 3; i_4 < 12; i_4 += 3) /* same iter space */
            {
                var_23 = ((unsigned short) ((unsigned short) min((((/* implicit */unsigned short) var_9)), (var_17))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(var_14))), (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_7)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (var_16)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (-8295755445712194364LL))))))) : (((/* implicit */int) arr_1 [(unsigned short)8])))))));
            }
        }
        arr_15 [i_0] = ((/* implicit */short) (unsigned short)50241);
        arr_16 [i_0] = ((/* implicit */long long int) var_11);
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_7))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) var_16))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_11))));
}
