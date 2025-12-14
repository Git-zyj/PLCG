/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153093
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
    var_16 = ((/* implicit */signed char) min(((-((~(((/* implicit */int) var_3)))))), (((/* implicit */int) (signed char)117))));
    var_17 = ((/* implicit */short) min(((((+(var_13))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */signed char) var_4)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(3232325056U)))))))));
    var_18 = ((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((min(((-(((/* implicit */int) (unsigned char)22)))), (arr_3 [i_0] [i_1] [i_0]))) % ((-(((/* implicit */int) (signed char)-103))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)19))))), (((((unsigned int) var_14)) | (min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_2])), (var_6)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (signed char)-72)) : (arr_3 [i_1] [i_1] [i_3])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_0] [i_1] [i_0] [i_2]) : (var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1)))))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)992)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_2])), (arr_8 [i_0] [i_0] [i_0] [i_3])))) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)252)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */_Bool) var_13);
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) var_8);
                            arr_18 [i_0] [i_5] [i_2] [i_1] [i_5] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (signed char)101)) == (((/* implicit */int) (signed char)-10))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_23 &= ((/* implicit */unsigned int) var_11);
                            var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_22 [i_6] [i_2]))));
                            var_25 += ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                            arr_23 [i_0] [i_0] [i_0] [i_2] [i_4] [i_6] = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)215))))), ((signed char)-84)));
                        }
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1] [i_7 - 2])), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)-1)))), (((((/* implicit */int) var_12)) * (((/* implicit */int) var_5))))))));
                            arr_27 [i_7 - 1] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) arr_26 [i_0] [i_7 + 1] [i_2]))), (((((/* implicit */_Bool) arr_26 [i_7] [i_7 - 2] [i_2])) ? (((/* implicit */int) arr_26 [i_0] [i_7 + 3] [i_2])) : (arr_3 [i_7 + 3] [i_7 + 2] [i_7 + 3])))));
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                            var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_0)))))) ? ((-(((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_0] [i_7 + 2] [i_7 + 3] [i_1])))) : (((/* implicit */int) (unsigned short)54093))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) | ((+((-(((/* implicit */int) var_12))))))));
                        arr_31 [i_8] [i_2] = (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34527)))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((max((((unsigned int) var_4)), (((unsigned int) (unsigned char)61)))) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    }
                    var_31 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (5851771883772712470LL))))));
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_16 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1])))), (((unsigned int) arr_13 [i_2] [i_2] [i_0] [i_1] [i_1] [i_0])))), (2255154338U)));
                }
                var_32 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)2)))), ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)10330))))))));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (arr_8 [i_0] [i_1] [i_0] [i_0])))) ? (((/* implicit */int) arr_15 [i_0])) : (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))) : (((1062642245U) - (((/* implicit */unsigned int) 263577054))))));
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) var_14))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned int) var_9);
}
