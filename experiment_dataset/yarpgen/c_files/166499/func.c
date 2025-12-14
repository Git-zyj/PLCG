/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166499
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1])))) * (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((1554519938U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-28382))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (-9223372036854775807LL))), (((/* implicit */long long int) ((short) (signed char)84)))))))));
        arr_2 [i_0] [i_0] = var_11;
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))))) / (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((arr_6 [(signed char)16]) / (((/* implicit */long long int) max((arr_5 [i_1] [i_1]), (((/* implicit */int) (unsigned char)142))))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(max((max((562949919866880LL), (((/* implicit */long long int) 805324033U)))), (-792512581991871368LL))))))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) var_14)))) * (((((/* implicit */int) var_1)) + (((/* implicit */int) var_9))))))) + ((((-(1311728829U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)64)))))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) min(((short)-5312), (((/* implicit */short) (signed char)-85)))))))) >> (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_8))))))))));
        var_24 += ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)64463)) | (((/* implicit */int) arr_1 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) var_9);
                    arr_16 [i_4] [i_4] = ((((/* implicit */_Bool) 14)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18705)) ^ (((/* implicit */int) (signed char)11))))) : (3824217763970703416LL));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */int) max((arr_17 [i_3 - 1] [i_6 + 1]), ((unsigned char)227)))) * (((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_6 + 1] [i_6 + 3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_17 [i_3 - 1] [i_6 + 1])))))))));
                                arr_22 [i_2] [i_2] [i_6] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_6] [i_2])) && (((/* implicit */_Bool) (+(562949919866864LL))))));
                                var_27 = ((/* implicit */int) ((signed char) -562949919866863LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_28 = ((/* implicit */int) ((unsigned int) (_Bool)0));
    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_7))));
}
