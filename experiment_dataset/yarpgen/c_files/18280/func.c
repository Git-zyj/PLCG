/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18280
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (1957912477)))) ? (2001641312) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_0]))))))));
        var_18 = ((max((-1957912483), (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (var_16))) >= (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_19 += ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1957912478))))) == (((/* implicit */int) (!(((/* implicit */_Bool) 1957912478)))))))), ((unsigned short)39792)));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_8 [i_1] |= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) == (((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 1957912478)))))))));
        var_20 |= ((((/* implicit */_Bool) (unsigned char)255)) ? (1957912478) : (((/* implicit */int) (signed char)-36)));
        var_21 -= arr_2 [i_1];
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_10))) < ((+(max((arr_5 [i_1]), (((/* implicit */int) arr_1 [i_1] [i_1])))))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_11 [i_1] [(unsigned short)9] = ((/* implicit */long long int) max((-1957912478), (-1808675428)));
            arr_12 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [(signed char)3])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)3208)))) : (var_13)));
            var_23 = ((/* implicit */signed char) max((arr_10 [i_2] [i_1]), (((arr_7 [i_1]) == (arr_7 [i_1])))));
        }
    }
    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned char)211)) : (1957912478))) == ((-(1957912482)))));
}
