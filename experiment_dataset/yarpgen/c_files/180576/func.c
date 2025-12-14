/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180576
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
    var_11 = ((/* implicit */unsigned short) ((var_1) * (((((/* implicit */int) ((short) var_0))) / (((int) var_1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (((-(var_6))) > ((+(var_2))))))));
        var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5858))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)0))) % ((+(((/* implicit */int) (unsigned short)11))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)64)) ? (((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) (short)24082)) : (((/* implicit */int) (unsigned short)23)))) : (((/* implicit */int) (unsigned short)23))));
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_16 = ((short) var_10);
        var_17 = -248669431;
        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0)))))));
    }
    for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        arr_8 [(short)15] [(short)15] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1])))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            for (int i_4 = 4; i_4 < 22; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (unsigned short)65535);
                    var_20 &= ((/* implicit */signed char) 2372487856U);
                    var_21 = ((/* implicit */int) min((((arr_6 [i_4 - 2] [i_2 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1599222294)) && (((/* implicit */_Bool) var_8)))))));
                }
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        var_22 += ((int) max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (-397729781))))));
        arr_16 [i_5] = ((/* implicit */int) ((unsigned long long int) ((arr_6 [i_5 - 1] [12]) | (2372487847U))));
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_23 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) > (408832255))) ? (((-639197713) / (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (var_2)));
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((arr_18 [i_5] [i_5 + 3]) | (343417156)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516))) + (3773984309U)))))));
            var_25 = min((((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_19 [16] [i_5])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551602ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))), (((/* implicit */unsigned long long int) min((639197713), (0)))));
        }
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_23 [i_5] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_18 [i_5] [i_5 + 2])) ? (arr_18 [i_5] [i_5 + 3]) : (((/* implicit */int) (unsigned short)3))))));
            arr_24 [i_5] [i_5] = ((/* implicit */short) min((((arr_14 [i_5 + 3]) >> (((var_6) - (11754985728693798232ULL))))), (((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5 + 1])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_6 [i_5 - 1] [i_5 - 1]))))));
        }
    }
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((((unsigned int) min((((/* implicit */unsigned long long int) 524287U)), (var_6)))), (((/* implicit */unsigned int) var_10)))))));
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (unsigned short)2))));
}
