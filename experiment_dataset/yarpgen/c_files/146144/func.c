/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146144
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_1] [(unsigned short)0] = ((/* implicit */signed char) ((unsigned int) arr_3 [i_3]));
                        var_14 = ((/* implicit */unsigned int) 178512173);
                        var_15 = ((/* implicit */int) 3305148985U);
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_16 *= ((/* implicit */unsigned long long int) ((10235467126908697714ULL) <= (((/* implicit */unsigned long long int) var_1))));
                        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) -2042712895611930231LL))));
                    }
                    var_18 = ((/* implicit */unsigned int) (~(max((max((10235467126908697716ULL), (arr_3 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))))));
                    arr_15 [i_0] [i_1 - 2] [i_0] = (-(((((/* implicit */_Bool) var_6)) ? (5672214054433052537ULL) : (var_6))));
                }
                var_19 = ((/* implicit */unsigned char) arr_14 [i_0]);
                var_20 = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) (unsigned char)45)), (max((((/* implicit */unsigned long long int) 3448565641U)), (192216483674553342ULL))))));
                var_21 = ((/* implicit */unsigned long long int) ((var_1) & (3260806872U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            {
                arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (min((((/* implicit */unsigned long long int) -4701714651382093143LL)), (((((/* implicit */_Bool) 4701714651382093148LL)) ? (12016522949273631197ULL) : (((/* implicit */unsigned long long int) -4701714651382093143LL))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) ((int) arr_23 [i_7 + 3] [i_5]));
                    arr_24 [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_5] [i_6]))));
                    var_23 = ((/* implicit */int) 8211276946800853873ULL);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        var_24 = ((((_Bool) arr_17 [i_5])) ? (var_4) : (((/* implicit */long long int) 4065027629U)));
                        arr_27 [i_5] [i_5] [i_7] [i_5] = (short)-12665;
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                        {
                            arr_31 [i_5] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) arr_16 [i_5]);
                            arr_32 [i_5] = ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)255)));
                            var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                        {
                            var_26 = ((signed char) 10235467126908697716ULL);
                            arr_35 [i_5] [i_8 + 2] [i_7] [i_6] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_34 [i_7 + 1]))));
                        }
                        arr_36 [i_5] [i_5] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60482))) / (var_9)))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [i_6]))) : (var_1))) ^ (1439123123U)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        arr_39 [21] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_11]);
                        arr_40 [i_7] [i_7] [i_7 - 2] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) & (18254527590034998274ULL));
                        arr_41 [i_5] [i_5] [i_7] = ((/* implicit */long long int) 18254527590034998275ULL);
                    }
                }
            }
        } 
    } 
    var_28 = var_1;
}
