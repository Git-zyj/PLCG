/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165340
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_9))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) 4294967295U)), (14887942882178098199ULL)))))) ? (7616113845956886165ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (var_14)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) var_8);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (signed char)127)) ? (-861558286145246976LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16384)))))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_2 [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (((((/* implicit */_Bool) 137405399040LL)) ? (2577126602U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))))))));
    }
    var_24 = ((/* implicit */unsigned char) (((~(((unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 3095477466U)), (var_12))) >= (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) << (((/* implicit */int) arr_2 [i_1]))))) : ((+(var_1)))));
    }
}
