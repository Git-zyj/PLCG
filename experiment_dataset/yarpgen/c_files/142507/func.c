/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142507
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (min((((int) (short)-3610)), (((((/* implicit */int) (unsigned char)255)) - (426147681)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_4] |= ((/* implicit */unsigned char) 18446744073709551614ULL);
                                arr_13 [i_0] [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    var_11 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_0), (var_0)))) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) ((var_2) >= (((/* implicit */int) (unsigned char)25))))))) | (min((((/* implicit */int) ((var_2) != (((/* implicit */int) var_9))))), (((int) 490692602))))));
    var_13 = max((((var_3) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) (unsigned short)58090))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_4)))) || (((/* implicit */_Bool) var_4))))));
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned short i_8 = 3; i_8 < 14; i_8 += 4) 
                {
                    {
                        arr_26 [i_7] [i_7] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_22 [i_5] [i_5] [(unsigned short)0] [i_8 - 3] [i_8 + 1] [i_6])))));
                        var_14 += ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
        } 
        var_15 &= ((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5]);
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)255)) ? (6708180092957003993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_19 [i_5])), (arr_15 [i_5]))))));
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        arr_29 [i_9] [i_9] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_15 [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (15303689682958295821ULL)))))));
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (arr_28 [i_9])))), (max((16988303672543684477ULL), (((/* implicit */unsigned long long int) var_4))))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 11; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    arr_35 [i_11] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)24896)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)31161)), (11353010176609812456ULL)))) ? (((((/* implicit */_Bool) arr_18 [i_9] [i_10] [(unsigned char)10])) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)19)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_5))))))) : (((/* implicit */int) var_0))));
                    arr_36 [i_11] [i_10] [i_9] = ((/* implicit */unsigned short) arr_31 [i_11]);
                    arr_37 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_31 [i_9])) % (((/* implicit */int) arr_31 [i_11])))) >> (((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))) - (570230210ULL)))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (_Bool)1))));
                }
            } 
        } 
    }
}
