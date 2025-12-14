/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166055
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) var_1);
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)0)), (0ULL)))) ? (((/* implicit */int) (unsigned char)255)) : ((((((_Bool)0) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (short)23987)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 3274399432263068943ULL)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) (signed char)96);
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [(_Bool)1])) ? (arr_5 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) arr_6 [i_1])))))));
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
            var_14 = ((/* implicit */int) ((var_4) != (7186187381837391444ULL)));
        }
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
        {
            arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) * (arr_4 [i_1])));
            arr_12 [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_7))));
        }
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
        {
            arr_15 [i_1] [i_1] [i_4] = ((/* implicit */long long int) arr_13 [i_1]);
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_7 [i_1] [(unsigned short)14] [i_4])) < (((/* implicit */int) var_5)))));
        }
        var_15 |= ((/* implicit */signed char) ((arr_5 [i_1] [i_1] [i_1]) & (var_0)));
    }
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((((/* implicit */int) var_7)) + (((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((var_6), (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_7))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_5))));
    var_18 = (-((((!(((/* implicit */_Bool) var_6)))) ? (var_6) : (((((/* implicit */_Bool) 2365679403U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))))));
}
