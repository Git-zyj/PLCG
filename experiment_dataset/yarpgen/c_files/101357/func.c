/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101357
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)56418));
                    arr_7 [i_0] [i_1 - 2] [i_2 - 2] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2]))) / (var_5))), (max((((/* implicit */long long int) arr_4 [i_1 - 2])), (3367232730289952349LL)))));
                    var_10 |= ((/* implicit */short) max((((((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_9))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_2 - 1] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1517029559)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30575))) : (var_3)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63488)))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63488)) - (((/* implicit */int) arr_2 [i_2] [i_0] [i_0]))))) ? (((((/* implicit */int) (short)8037)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_4 [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_1] [i_1])))) : (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-121)), ((unsigned short)52467)))) % (((((/* implicit */_Bool) (short)8037)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)63486))))))));
                }
            } 
        } 
    } 
    var_11 *= ((/* implicit */unsigned short) (-(var_4)));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) (_Bool)1);
        arr_11 [i_3] = ((/* implicit */short) ((2704333067U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_13 = ((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60249)) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_2 [5LL] [i_3] [i_3])))))));
        var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_3 [i_3] [i_3]))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((((((/* implicit */_Bool) ((signed char) arr_12 [i_4]))) && (((/* implicit */_Bool) max((18446744073709551612ULL), (((/* implicit */unsigned long long int) arr_13 [i_4]))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)11])))))) * (min((5934410340798980770ULL), (9879985340541904601ULL))))) : (((/* implicit */unsigned long long int) var_4)));
        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)127)))))));
    }
    var_16 = ((/* implicit */signed char) ((unsigned int) (short)-21051));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)65), (((/* implicit */unsigned char) (signed char)-50))))) ? (15470748509267125415ULL) : (((((/* implicit */_Bool) (unsigned short)34016)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -724840053)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (7143504U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 724840048)))) : (((((/* implicit */_Bool) var_8)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28120))))))) : (((/* implicit */unsigned long long int) var_5))));
}
