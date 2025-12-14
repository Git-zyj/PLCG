/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154179
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
    var_15 = var_9;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!((_Bool)0)))) : (max((var_0), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (68719476480ULL)));
        arr_4 [7ULL] [7ULL] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : ((((!(((/* implicit */_Bool) 1263827986)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0])))))));
        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) arr_1 [(unsigned char)12])))) : (((/* implicit */int) var_7)))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_4))))) < (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (68718952448ULL) : (((/* implicit */unsigned long long int) 3354704522U)))))))));
        arr_5 [i_0] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_2 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0) & (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_8 [i_1])))))) : (((unsigned long long int) (unsigned short)48106))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_8 [i_1])) <= (4294967295U)));
        arr_10 [i_1] [i_1] = ((/* implicit */int) var_1);
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) arr_11 [i_2]);
        var_21 |= ((/* implicit */_Bool) 1193128588U);
    }
    /* LoopSeq 2 */
    for (long long int i_3 = 3; i_3 < 16; i_3 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) max(((-(var_12))), (arr_14 [i_3])))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45816)) + (((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49104))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) arr_11 [i_3 + 2]))))))));
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */short) (+(((long long int) arr_12 [i_4]))));
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) var_5);
        var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))), (min((((/* implicit */unsigned long long int) max((-6492904629903706860LL), (((/* implicit */long long int) 523264))))), (((1145567159691800130ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)5])))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_0);
    var_26 = var_9;
}
