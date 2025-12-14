/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1246
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
    var_19 = var_15;
    var_20 = ((/* implicit */unsigned char) -2840086017040704616LL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7))) : (2840086017040704640LL)))) ? (((/* implicit */int) (!(arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_22 ^= ((/* implicit */unsigned long long int) (short)22426);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (((unsigned long long int) ((2840086017040704640LL) >> (((arr_3 [i_1] [i_1]) - (1126091802))))))));
                    var_24 = ((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_17)))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8))))) : (((/* implicit */int) ((arr_0 [i_0]) <= (arr_0 [i_0]))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) var_11);
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)5)) >> (((/* implicit */int) (_Bool)1))))) : ((+(-6806840748199279512LL))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))))));
            var_27 = ((/* implicit */unsigned int) (signed char)43);
            var_28 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 2840086017040704616LL)) != (arr_11 [i_4 - 1]))))));
        }
        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_29 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_3] [16U] [i_3])) >= (var_9))))));
            var_30 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-30706996))))));
        }
    }
    var_31 = ((/* implicit */signed char) ((long long int) var_13));
}
