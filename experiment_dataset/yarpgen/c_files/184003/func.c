/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184003
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
    var_11 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-104)), ((unsigned short)65520)))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)104))))));
    var_12 = ((/* implicit */unsigned char) (-((+(max((((/* implicit */int) (signed char)103)), (var_0)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 24; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_3] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((long long int) (signed char)-105));
                        var_13 -= ((/* implicit */long long int) (~(((unsigned int) (signed char)-104))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_13 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1] [i_2] [i_2] [i_2]))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)104)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_4 [i_0 + 2] [i_1] [i_2])))));
                            arr_14 [i_1] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_5 [i_0] [i_1] [i_2 + 1] [i_3]))) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)-73))));
                            var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1] [i_1]))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 24; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2))));
                            arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_3 - 2] [i_5] = ((/* implicit */signed char) ((short) var_9));
                        }
                    }
                    for (signed char i_6 = 2; i_6 < 24; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)181)) <= (((/* implicit */int) (unsigned char)83)))))) - (((var_7) | (((/* implicit */long long int) var_0))))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((arr_6 [i_0] [i_0] [i_6 + 1] [i_7]) == (arr_20 [i_0] [i_0] [i_2] [i_0] [i_6 - 1] [i_7]))) ? (arr_21 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))))))));
                        }
                        for (long long int i_8 = 3; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_1] [i_0] [i_8] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_8 - 3] [i_8 - 3] [i_6 - 2])) ? (arr_6 [i_0 - 1] [i_8 - 3] [i_2] [i_6 + 1]) : (var_7)));
                            arr_28 [i_1] = ((/* implicit */unsigned short) (~(arr_0 [i_0 - 1] [i_2 + 1])));
                        }
                        for (long long int i_9 = 3; i_9 < 23; i_9 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) (unsigned char)175);
                            arr_32 [i_9] [i_9] [i_2] [i_6 - 1] [i_2] = ((/* implicit */signed char) ((var_10) + (((/* implicit */int) ((((/* implicit */int) (signed char)-56)) == (((/* implicit */int) arr_16 [i_2])))))));
                            arr_33 [i_0] [i_9] = ((/* implicit */int) ((unsigned short) (signed char)112));
                        }
                        arr_34 [i_6] [i_1] = (~(((/* implicit */int) ((31U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)29517)))))));
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1])))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                var_21 = ((((((/* implicit */long long int) -256247261)) & (arr_6 [i_11] [i_11] [i_11] [i_11]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65507)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)17))))));
                                var_22 -= arr_8 [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_39 [i_0] [i_0] [i_2 - 1] [i_10] [i_11] = ((/* implicit */int) (-(((((/* implicit */_Bool) 1772049634U)) ? (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_1] [i_1] [i_10])) : (18446744073709551599ULL)))));
                            }
                        } 
                    } 
                }
                arr_40 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_9)))), ((~(((/* implicit */int) var_8)))))), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 1624671259))))), ((signed char)114))))));
            }
        } 
    } 
}
