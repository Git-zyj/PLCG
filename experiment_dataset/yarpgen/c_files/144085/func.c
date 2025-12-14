/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144085
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
    var_16 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_7))))));
    var_17 = ((/* implicit */unsigned short) ((var_9) <= (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)212), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_8)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)28302)))), (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */short) arr_1 [(short)2]);
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(1264735700)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)37156))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (signed char)122);
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)28563))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3836301577U)) ? (11641739509579156200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])))))) ? (((/* implicit */unsigned long long int) (-(-1LL)))) : (((((/* implicit */unsigned long long int) arr_2 [i_1])) / (arr_4 [i_1 + 1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */unsigned char) (-(((arr_2 [i_1 - 1]) << (((arr_2 [i_1 - 1]) - (825564505)))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((min((((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) -656770965)) : (6805004564130395415ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))))), (((/* implicit */unsigned long long int) 1264735706)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_25 ^= ((/* implicit */short) ((3260429658U) <= (arr_8 [i_2 - 1] [i_2 - 2])));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (short)7618))));
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_27 += ((/* implicit */_Bool) (~(((unsigned int) (unsigned short)28587))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_16 [i_3] [i_4] [i_5] = min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_3] [i_3]))))), (4074380685U));
                    arr_17 [i_3] [i_3] [i_3] |= ((/* implicit */unsigned short) 3989808034U);
                    var_28 = ((/* implicit */unsigned short) ((int) min(((unsigned short)7), (arr_11 [i_3] [i_4 + 1] [i_4 - 2]))));
                    arr_18 [i_3] [(unsigned short)1] [i_3] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) (short)63)))));
                    var_29 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(804863431)))) ? (((/* implicit */unsigned long long int) (-(0)))) : (((((/* implicit */_Bool) 4294967295U)) ? (11641739509579156184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [(_Bool)1])))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)32738)), (arr_11 [i_3] [i_3] [i_3]))))));
    }
    var_31 = ((/* implicit */int) min((var_31), ((~(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (unsigned char)165)))))))));
}
