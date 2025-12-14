/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128086
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))))) < (((((/* implicit */int) (_Bool)0)) / (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 20897753U)) : (10624978562535746857ULL))) & (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24266)) | (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)45069)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)223)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (arr_0 [i_0])))))) < (((((/* implicit */_Bool) var_13)) ? (var_18) : (((/* implicit */long long int) arr_0 [i_0]))))));
    }
    var_21 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) 11926806652159540813ULL);
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_2] [i_2]))))) || ((((_Bool)1) || (((/* implicit */_Bool) 2623275759U)))))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-1261168251)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2])) ^ (((/* implicit */int) (unsigned char)244))))) : (2623275759U)));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_1]);
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_3]);
            var_24 -= ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9448))) | (4018758782U))) <= (((1671691537U) | (arr_11 [i_1] [i_3]))));
        }
        var_25 = ((/* implicit */long long int) (+(4051543788U)));
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3521687281958833697LL)) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(56530680708382752ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))));
    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
}
