/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161272
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
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 0LL)), (17162655241461072625ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_13))));
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) max((var_12), (var_17))))), (var_4)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_22 = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
        var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned long long int) 16384U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (((arr_1 [i_0]) || (arr_1 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : ((((_Bool)1) ? (7411367239628961348ULL) : (((/* implicit */unsigned long long int) 8090780360577004178LL))))))));
        var_24 = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)8269));
        var_25 = ((/* implicit */short) var_3);
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)11423))) <= (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_27 = ((/* implicit */short) (~(min((((long long int) arr_2 [i_1])), (((/* implicit */long long int) min((arr_4 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) arr_6 [i_1] [i_3 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)45789)))), (((/* implicit */int) arr_5 [i_2] [i_3])))));
                    arr_11 [i_3] [i_3] = ((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2]);
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11423)) || ((_Bool)1)))))))));
                    arr_12 [i_3] [i_1] [i_1] = ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (346206626182637025LL) : (arr_8 [i_2] [i_1])));
                    var_30 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(arr_8 [i_2] [i_2])))) ? ((~(16274621427052801604ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_2])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)45789)), (-346206626182637026LL))))));
                }
            } 
        } 
        var_31 = ((/* implicit */short) arr_3 [i_1] [i_1]);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47221)) ? (((/* implicit */int) (unsigned short)45762)) : (((/* implicit */int) (unsigned short)54100)))));
        var_32 ^= ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_14 [i_4] [i_4])) * (((/* implicit */int) var_13)))) >= (((/* implicit */int) min((arr_4 [i_4] [i_4]), ((unsigned short)65518))))))) < (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4]))));
        var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [(_Bool)1])) / (((/* implicit */int) arr_0 [i_4] [(unsigned short)2]))))) / (arr_13 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) min((min((arr_14 [i_4] [i_4]), (arr_6 [i_4] [i_4]))), (((unsigned short) (unsigned short)55209)))))) : (((((/* implicit */_Bool) arr_0 [i_4] [6ULL])) ? (-346206626182637012LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [(unsigned short)6])))))));
    }
}
