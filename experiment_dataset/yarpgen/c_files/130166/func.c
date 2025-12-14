/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130166
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
    var_20 = var_16;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((var_5), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2623364411U)) ? (-764395867) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3])))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((_Bool) ((((/* implicit */_Bool) (unsigned short)36577)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16029)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_1 [i_0]))));
                        arr_17 [i_0] [i_0] [(signed char)6] [(short)3] [i_0] = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) max((var_10), (arr_12 [i_0] [i_1] [(unsigned short)5] [i_5] [i_5])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3365824549792688328LL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) 11099173281181525278ULL)))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)48673))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_0] [(short)5] [i_2 + 2] [i_6] [i_2 + 2])), ((unsigned short)65535)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)15] [4U]))))) : (((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 2]))))))))));
                        arr_20 [i_6] [i_2] [(_Bool)1] [i_0] = ((/* implicit */int) var_18);
                        var_25 ^= ((/* implicit */unsigned long long int) 618410615712310440LL);
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) (unsigned short)48673);
                        var_27 *= ((/* implicit */unsigned short) ((unsigned int) (short)9927));
                        arr_23 [i_0] [i_0] [i_0] [14U] [i_0] &= ((/* implicit */short) var_12);
                        arr_24 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_2] [i_7] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_14 [i_2 + 2] [i_2 - 2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)255))))) : (((long long int) arr_19 [i_0] [i_1] [i_2 + 3] [i_7] [i_1]))));
                        arr_25 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 3426937091933661837LL)) ? (((((/* implicit */_Bool) min((var_3), ((signed char)-59)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (1839294269U) : (16776960U)))) ? (((/* implicit */int) (unsigned short)16863)) : (((/* implicit */int) ((short) 16737279862895679231ULL))))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~((-2147483647 - 1))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 3])) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_9)) : (12661150995092061647ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
                    }
                    arr_30 [i_0] [i_1] [i_2] [(signed char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2])), (((((/* implicit */_Bool) 16737279862895679240ULL)) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_27 [i_2] [i_0] [i_0]))))))) ? (((/* implicit */int) ((short) (short)-2863))) : (((((/* implicit */_Bool) (unsigned short)39634)) ? (((/* implicit */int) (short)1664)) : (((/* implicit */int) (unsigned char)205))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), ((-((~(((/* implicit */int) var_5))))))));
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -618410615712310440LL)) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)16850))) ? (max((1387942740), (-1))) : (((/* implicit */int) (signed char)16)))) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_15))))))))));
    var_30 &= ((/* implicit */short) var_13);
}
