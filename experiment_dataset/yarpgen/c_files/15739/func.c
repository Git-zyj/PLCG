/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15739
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_18)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */int) (_Bool)1);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_14 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) 954408223)) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (17553604847758202473ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                            arr_15 [i_4] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (-(893139225951349149ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (893139225951349143ULL))));
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 17553604847758202473ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2656586146U)))))) ? (min((((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_18))), (((/* implicit */unsigned int) (unsigned short)65529)))) : (((/* implicit */unsigned int) (~(((int) var_13)))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+((~(17553604847758202473ULL))))))));
                            var_23 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_5] [i_5])) && (((/* implicit */_Bool) 2654868100U)))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_5] [i_3] [i_3] [i_2] [i_1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : ((+(11385139458821648614ULL))))))));
                            var_24 = ((/* implicit */int) 8U);
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_13))));
                        }
                        var_26 = ((/* implicit */int) min((var_26), ((((+(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))) / ((+(-954408219)))))));
                    }
                } 
            } 
        } 
    }
}
