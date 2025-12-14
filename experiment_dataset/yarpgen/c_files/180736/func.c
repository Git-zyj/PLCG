/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180736
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */long long int) (-(((/* implicit */int) (short)0))))) + (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (-7321689807669703808LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-1))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 12979811883953380002ULL)) || (((/* implicit */_Bool) 0ULL))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    var_22 = var_17;
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_23 &= ((/* implicit */signed char) (((+(18446744073709551606ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), ((unsigned char)6)))) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_4])) : (((/* implicit */int) var_5)))))));
                        arr_14 [i_1] [i_2] [(unsigned char)10] [i_3] [i_4] = ((/* implicit */signed char) min(((short)-9275), ((short)-1)));
                    }
                    arr_15 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [8U] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-7321689807669703820LL))), (max((arr_7 [i_1] [i_2] [i_3]), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)0)))))) : (max((((arr_7 [i_1] [i_1] [i_3]) + (0LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) (signed char)-69)))))))));
                    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42925)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)255))) ? (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [(unsigned char)13] [i_3])))))) : (((/* implicit */int) var_14))))) : (max((((/* implicit */long long int) ((19U) << (((((/* implicit */int) var_1)) - (18)))))), (min((var_3), (((/* implicit */long long int) arr_6 [i_1] [i_1]))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1]);
    }
    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_5])) > (((/* implicit */int) (short)-1))))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) != (0ULL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5])) / (((/* implicit */int) (signed char)85))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */short) arr_17 [i_5])), (arr_16 [i_5])))))) : (((/* implicit */int) var_11))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_15)))), ((+(((/* implicit */int) (short)0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8498228861467280127ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)7147))))))))));
        var_28 -= ((/* implicit */signed char) arr_17 [i_5]);
    }
    var_29 = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (short)22596)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_10)), (var_11))))) : (((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) ((short) (short)25861))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1132868871073094522LL))))))))));
    var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-105)) % (((/* implicit */int) max((((/* implicit */short) var_6)), (var_18)))))))));
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((+(6252218351581678541ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45789)))));
}
