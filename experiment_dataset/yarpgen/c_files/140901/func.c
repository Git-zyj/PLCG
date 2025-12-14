/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140901
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
    var_14 = max((var_6), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 7589461476042836936ULL)))))));
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) max((((/* implicit */int) (signed char)(-127 - 1))), (1855288298))))), (min((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_5)))), (max((var_2), (var_4)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) var_12);
            arr_6 [i_0] [i_1] = (+(var_10));
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                var_17 = ((/* implicit */int) 18446744073709551615ULL);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_6))));
            }
            for (int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_15 [i_0] [10ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                    var_19 = ((/* implicit */signed char) -1291590526);
                    var_20 = var_2;
                }
                for (short i_5 = 3; i_5 < 11; i_5 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        arr_21 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7589461476042836936ULL)))) ? (var_11) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)11537)))))));
                        var_21 |= ((/* implicit */unsigned char) var_9);
                        var_22 = ((((/* implicit */_Bool) var_8)) ? ((-(var_10))) : (((/* implicit */int) (signed char)-115)));
                    }
                    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (~(var_1))));
                        var_24 = ((/* implicit */int) var_6);
                    }
                    for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        var_25 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                        var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) var_3))))));
                        var_27 = ((/* implicit */int) ((unsigned char) var_12));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-110))));
                        var_29 = (+(((/* implicit */int) (_Bool)1)));
                    }
                    var_30 = ((int) ((int) var_1));
                    arr_30 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((int) var_4);
                    arr_31 [i_0] [i_5] = var_6;
                    var_31 = ((/* implicit */unsigned long long int) var_10);
                }
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) (~(var_9)));
                    var_33 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                    arr_35 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (~(((int) (unsigned char)219))));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        {
                            arr_42 [i_12] [i_12] [i_12] = ((/* implicit */signed char) var_3);
                            var_34 = (!(((/* implicit */_Bool) -307587056)));
                            arr_43 [i_12 + 1] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                            var_35 = (-(32767));
                            var_36 = ((/* implicit */unsigned int) 13904614368683717730ULL);
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned int) ((signed char) var_8));
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    arr_46 [i_1] = ((/* implicit */unsigned long long int) (~(4294967295U)));
                    arr_47 [i_3] = ((((/* implicit */_Bool) var_4)) ? (var_8) : ((~(102563487))));
                    var_38 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                    arr_48 [i_0] [i_3] [(unsigned char)5] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                }
            }
        }
        arr_49 [i_0] = ((/* implicit */unsigned int) min((min(((+(var_6))), (((/* implicit */unsigned long long int) ((signed char) var_12))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((var_9), (var_4)))), (((unsigned int) 18446744073709551615ULL)))))));
    }
}
