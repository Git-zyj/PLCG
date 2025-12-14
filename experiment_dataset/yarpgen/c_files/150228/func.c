/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150228
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_2))))), (max((var_14), (((/* implicit */short) (unsigned char)66)))))))) + (((unsigned int) (~(var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-98)) | (var_7))) * (((/* implicit */int) ((signed char) (signed char)-98)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) -1410721739))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (4906915034919899056LL) : (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)232))))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))))));
        var_24 &= ((/* implicit */unsigned int) ((signed char) 370115433U));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            var_25 -= ((((/* implicit */int) arr_5 [i_2 + 3])) <= ((-(1246939752))));
            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [1ULL]))));
            var_27 = ((/* implicit */_Bool) (unsigned char)0);
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (-1246939753))))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3])) * (((int) (signed char)-82)))))))));
            arr_13 [i_1] [i_1] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_16)) : (arr_11 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_19)) : (var_16))))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3620700728U))))), ((unsigned char)8))))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)106)) | (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) var_12)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (5LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) (unsigned short)65535))))))));
        }
    }
}
