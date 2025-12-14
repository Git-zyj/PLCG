/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166919
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
    var_19 += ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned char) max((((/* implicit */signed char) var_13)), (var_2)))), (var_1))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((unsigned int) var_9)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14))))))) : (((((/* implicit */int) ((unsigned char) (unsigned short)65535))) - (((/* implicit */int) var_6))))));
    var_21 = ((/* implicit */unsigned int) min((max((((long long int) var_12)), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((short) var_18)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_22 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533)))))));
        var_23 += var_10;
        var_24 -= ((/* implicit */long long int) ((signed char) arr_0 [i_0 + 3]));
        var_25 = ((/* implicit */unsigned int) ((short) (unsigned char)128));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_26 = ((/* implicit */long long int) (+(arr_3 [i_1])));
        var_27 += ((/* implicit */int) var_13);
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(28U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (((((/* implicit */_Bool) 536870880U)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967295U)))));
        var_29 += (!(((var_16) && (((/* implicit */_Bool) (unsigned short)65535)))));
    }
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
    {
        var_30 -= ((/* implicit */unsigned short) min((((var_10) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 3]))))), (((/* implicit */long long int) var_16))));
        arr_7 [i_2 - 2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) | (((/* implicit */int) var_18))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_31 += max((((long long int) (-(((/* implicit */int) (signed char)-112))))), (((/* implicit */long long int) (signed char)-114)));
            var_32 = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_2 - 2]))) / (1604493428227800826LL))), (((/* implicit */long long int) var_1))));
            arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_2 - 3])), (1521717747529831579ULL))))));
            arr_14 [i_3] [(short)16] [(short)16] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (~(-1604493428227800827LL)))))));
            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) > (4294967295U))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) arr_5 [i_2]))))))) : ((-(((((/* implicit */_Bool) arr_6 [i_4] [i_2])) ? (var_10) : (var_10)))))));
            var_35 += ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : ((-(8613445671689041308LL))))), (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_4))))))));
            arr_18 [i_2 - 3] [i_4] [i_2] &= ((/* implicit */unsigned short) arr_5 [i_2]);
        }
    }
    for (unsigned int i_5 = 2; i_5 < 24; i_5 += 3) 
    {
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_21 [i_5 + 1] [i_5 + 1]) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))) && (var_16)));
        var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) -1604493428227800827LL))), ((-(((((/* implicit */_Bool) (short)-5029)) ? (438654768484648920LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 3079547749104288677LL))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1873615759U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17662)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)44162)))) : (((/* implicit */int) min((var_13), (var_13))))))))))));
    }
    var_39 = ((/* implicit */unsigned int) var_7);
}
