/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125204
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
    var_14 = ((/* implicit */short) ((var_8) << (((((/* implicit */int) var_1)) * (((/* implicit */int) var_9))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */int) (unsigned char)193)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)28356)) : (((/* implicit */int) (short)-4692)))))) : ((((!(((/* implicit */_Bool) (short)-28361)))) ? (((((/* implicit */_Bool) (unsigned short)53597)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) (unsigned char)230))))))));
    var_16 = ((/* implicit */long long int) 9827720012080034654ULL);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4713113887884330779ULL)) ? (-5822256549536471992LL) : (-2564225662327012816LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 2] [(short)0]), (((/* implicit */signed char) (_Bool)1))))) && (((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((((unsigned long long int) arr_0 [i_0 - 2] [i_0 - 2])) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32329)))))));
            arr_5 [6LL] &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [(signed char)10]))))));
            var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        }
        arr_6 [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (max((((/* implicit */int) var_13)), (((((/* implicit */int) (unsigned short)14945)) * (((/* implicit */int) arr_0 [i_0] [4ULL]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)247)), (var_7)));
                        arr_17 [i_2] [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_10 [i_2])) ^ (((/* implicit */int) (unsigned short)5468))))))), (max((max((((/* implicit */unsigned long long int) -394409559)), (1171785028112492860ULL))), (arr_15 [i_3])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48709))))) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_13))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) * ((+(((/* implicit */int) var_10))))));
}
