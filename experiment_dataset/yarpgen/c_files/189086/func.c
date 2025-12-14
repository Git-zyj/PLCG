/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189086
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) / (var_10)))) ? (max((max((var_7), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) (short)-8239))))))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((/* implicit */int) (short)6534)) << (((((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-8244)))) + (120))));
                arr_5 [(short)5] [10U] [10U] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-8257)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8238))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((((/* implicit */signed char) ((var_18) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (short)-8223))))))))), (((signed char) ((var_16) <= (((/* implicit */long long int) -627192102)))))));
    var_22 = ((/* implicit */int) var_6);
    /* LoopSeq 4 */
    for (signed char i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((((var_11) && (((/* implicit */_Bool) 738933187)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) arr_6 [(unsigned char)7]))))) : ((-(((/* implicit */int) arr_0 [i_2])))))) | (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)8246))) <= (var_7))) && (((/* implicit */_Bool) var_8)))))));
        arr_8 [i_2] &= var_17;
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_24 = ((/* implicit */short) var_7);
        var_25 = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)249))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4]))))))))));
        var_27 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-6524)) ? (1729519000337436631LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))))));
        var_28 &= ((/* implicit */unsigned int) var_2);
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_29 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-6545), (((/* implicit */short) arr_11 [(_Bool)1])))))) + (((((/* implicit */_Bool) min((arr_11 [i_5]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((int) 1055443559))) : (((((/* implicit */_Bool) var_13)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5])))))))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)64)))))));
    }
}
