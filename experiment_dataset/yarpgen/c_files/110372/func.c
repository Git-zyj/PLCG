/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110372
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
    var_18 = ((/* implicit */unsigned short) var_8);
    var_19 ^= ((/* implicit */_Bool) var_15);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) 208181296U));
            var_20 = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0]));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                var_21 += ((/* implicit */unsigned char) var_4);
                var_22 *= ((/* implicit */short) ((unsigned char) arr_0 [(short)12]));
            }
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                var_23 ^= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_3] [6ULL] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)1))))))))) : (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) (signed char)12)), (16924204576941802480ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (3214916195U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))))))));
                arr_12 [i_0] [i_0] [i_1] [(unsigned short)12] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)46885)) : (((/* implicit */int) (_Bool)1))))) && (var_10))));
                var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_11 [i_0] [0])))) ? (max((arr_11 [i_3 + 1] [i_3]), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_3] [(unsigned char)6] [2]), (((/* implicit */unsigned short) (unsigned char)96))))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_2 [i_0] [i_3])))), (var_14)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (((long long int) arr_1 [i_0])))))));
            }
            for (unsigned short i_4 = 4; i_4 < 16; i_4 += 4) 
            {
                arr_16 [i_1] [i_4] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4 - 3] [i_1]))))))))), (min((arr_4 [i_0] [i_1] [i_1]), (((((/* implicit */_Bool) var_17)) ? (6212357515431775052ULL) : (1522539496767749153ULL)))))));
                arr_17 [i_0] [i_1] [i_1] [(_Bool)0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned char)228))) >= (((/* implicit */int) max(((unsigned short)18314), (arr_13 [i_4] [i_1] [i_0])))))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4 - 3] [i_4] [i_4]))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8079606094984165324ULL)) ? (arr_3 [i_0] [6LL] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : (((8801990230215767041ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
            }
            var_26 = ((int) 4U);
            var_27 = ((/* implicit */int) (short)25030);
        }
        arr_18 [(short)6] [i_0] = ((/* implicit */unsigned long long int) var_1);
        arr_19 [i_0] = ((/* implicit */unsigned long long int) (!(((arr_0 [i_0]) >= (arr_0 [i_0])))));
    }
    var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
}
