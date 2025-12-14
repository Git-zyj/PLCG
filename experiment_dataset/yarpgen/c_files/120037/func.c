/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120037
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
    var_12 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-4835794016054199542LL))), (((/* implicit */long long int) ((signed char) (unsigned char)43))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)14)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (var_8)))))))));
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_1 [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) min((3464265910U), (((/* implicit */unsigned int) (unsigned char)10))));
        var_16 = ((/* implicit */unsigned short) (((-((~(var_8))))) >= (((/* implicit */unsigned long long int) ((max((4294967293U), (((/* implicit */unsigned int) (signed char)-70)))) << (((max((5078514514474488705LL), (((/* implicit */long long int) var_0)))) - (5078514514474488695LL))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 16U)) ? (4294967275U) : (16U))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)22371))))))))) : (((unsigned int) arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
    {
        arr_6 [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned int) (unsigned char)149)), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 24))))) : (((((((/* implicit */int) var_0)) >> (((var_10) - (3569343446U))))) >> ((((((_Bool)0) ? (arr_3 [i_1]) : (((/* implicit */long long int) 1732825930U)))) - (1732825910LL)))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)127))))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_1 + 1] [i_2 + 1])), ((-(((/* implicit */int) (signed char)15))))))) : (((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1 - 2]))) ? (arr_3 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1111510497U)))))))))))));
        }
        for (long long int i_3 = 2; i_3 < 22; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((max((5945823561940858755ULL), (((/* implicit */unsigned long long int) 1311049427327327793LL)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))))))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) 4294967290U)))));
            arr_11 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 2] [i_3])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))) : (min((((/* implicit */unsigned int) arr_8 [i_1] [i_1] [18U])), (4294967293U)))))) ? (((min((arr_7 [i_1]), (((/* implicit */int) arr_8 [i_1] [i_1] [(unsigned short)12])))) | (((/* implicit */int) arr_8 [i_3] [i_3] [18])))) : (((/* implicit */int) arr_2 [i_1] [i_1])));
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (min((var_7), (((/* implicit */unsigned int) -22)))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2])) ? (16U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [2ULL])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 1]))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_10))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_9))))))))));
    }
}
