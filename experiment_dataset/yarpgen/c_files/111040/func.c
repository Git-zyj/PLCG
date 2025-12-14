/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111040
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) (unsigned char)3)) ? (min((4239011202U), (((/* implicit */unsigned int) (signed char)-117)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2147)) ? ((~(((/* implicit */int) (signed char)28)))) : (((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_0]))));
                    var_14 = ((/* implicit */int) ((unsigned long long int) (short)16384));
                    var_15 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)16393)) <= (1228952052)))), (((unsigned int) (unsigned char)12))));
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_11)) > (min((((unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_3 + 2])), (((/* implicit */unsigned long long int) -30))))));
                        var_17 = ((/* implicit */short) 6115921446121392703ULL);
                    }
                    for (unsigned int i_4 = 4; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) arr_14 [(signed char)12]);
                        arr_16 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */long long int) min((arr_13 [i_4 - 4] [i_4] [i_2 + 2] [i_1] [i_0 - 3]), (arr_13 [i_4 - 4] [i_4] [i_2 + 2] [i_0] [i_0 - 3])));
                        arr_17 [i_0] [i_0] [(unsigned char)14] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)51)) << (((((/* implicit */int) (unsigned char)56)) - (39)))));
                        var_19 ^= ((/* implicit */int) min((((/* implicit */short) (unsigned char)106)), ((short)1024)));
                        var_20 += ((short) ((((/* implicit */int) max(((short)1020), (((/* implicit */short) (signed char)54))))) + (((/* implicit */int) ((signed char) 3057980614U)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 4; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (short)-2342);
                        var_22 = ((((/* implicit */long long int) ((arr_2 [i_0 + 1] [i_0 - 3] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5]))) - (var_11))));
                        var_23 -= ((/* implicit */unsigned int) (+(var_10)));
                        var_24 = ((/* implicit */signed char) ((unsigned short) arr_14 [i_1]));
                    }
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (signed char i_8 = 3; i_8 < 15; i_8 += 3) 
            {
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20016))) | (((((/* implicit */_Bool) (unsigned short)48119)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) 1826966239))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) (~(var_3)));
                            var_28 = ((/* implicit */signed char) ((((_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) 494304178))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2147483648U))))))))));
                            var_29 = ((/* implicit */long long int) arr_25 [i_6 + 2] [i_6 + 2] [i_6 + 2]);
                            arr_35 [i_6] [i_7] [i_8] [i_7] [i_10] = ((/* implicit */short) arr_27 [6] [i_7] [i_8] [i_8]);
                            var_30 += ((/* implicit */signed char) ((int) -1800753573));
                        }
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_3)) > (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) / ((~(1195092812892498742LL))))))))));
                        arr_36 [i_6 - 1] [i_6 - 1] [11U] [i_6 - 1] = ((/* implicit */unsigned char) arr_26 [i_6] [i_8] [7U]);
                        arr_37 [i_7] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) ((int) 18446744073709551613ULL));
                    }
                }
            } 
        } 
    } 
}
