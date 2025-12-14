/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110542
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
    var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((3965365518279898347LL) << (((/* implicit */int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_2 [i_0]))))) : (var_3)));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2323419095345751534LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (6556648382770019944ULL)))) || ((!(((/* implicit */_Bool) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */int) var_11)) != (((((/* implicit */_Bool) arr_4 [i_2] [(short)4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))));
                            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2 - 3]))));
                            arr_16 [i_0] [i_0] [(signed char)3] [i_0] [(signed char)3] [i_0] = ((/* implicit */int) ((var_2) || (((/* implicit */_Bool) arr_4 [i_0] [(short)10]))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) % (arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_5 = 4; i_5 < 11; i_5 += 4) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) (+(min(((-(((/* implicit */int) var_10)))), (arr_18 [i_5 + 3])))));
        var_18 += ((/* implicit */unsigned long long int) arr_18 [i_5]);
        var_19 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_10)) <= (arr_18 [i_5 - 4]))))));
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12166117589720156627ULL))));
                        var_21 = (((~(arr_22 [i_5 - 2] [i_6]))) * (((/* implicit */long long int) ((/* implicit */int) min((arr_27 [i_5] [i_5] [i_5 - 1]), (((/* implicit */unsigned char) var_2)))))));
                        arr_29 [i_6] [i_5 - 3] [i_6] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 12166117589720156630ULL))) & (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))))) ? ((-(max((arr_18 [i_6]), (((/* implicit */int) var_4)))))) : ((+(((/* implicit */int) var_9))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 3; i_9 < 12; i_9 += 1) 
                        {
                            arr_34 [i_5] [i_5 - 2] [i_5] [i_6] [i_6] = ((/* implicit */int) var_11);
                            var_22 |= ((/* implicit */long long int) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_32 [i_5]))))));
                            var_23 = ((/* implicit */int) var_3);
                        }
                        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_1)))) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_31 [i_5] [i_5] [i_5 + 1] [i_5 - 3] [i_6] [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_22 [i_7] [i_6]) : (((/* implicit */long long int) arr_37 [i_5] [i_5] [i_5] [i_5] [i_5])))))))))));
                            arr_39 [9LL] [i_8] [i_6] [i_8] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_33 [i_5] [i_6] [i_7] [i_8] [i_10] [i_6 + 1] [i_5])))) | ((~(((/* implicit */int) var_10))))));
                            var_25 = ((/* implicit */long long int) 6280626483989394989ULL);
                            var_26 = ((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)97)))), (((/* implicit */int) max((((unsigned char) var_1)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)15112))))))))));
                            arr_40 [i_6] [i_5] [i_7] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) << ((-(((/* implicit */int) var_2))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            var_27 &= ((/* implicit */short) (+(((/* implicit */int) var_0))));
                            var_28 = var_5;
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_47 [i_5] [i_6] [i_7] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_22 [i_6] [i_6])))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) var_10))));
                            var_29 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_5] [i_6 - 2] [i_8]))));
                        }
                        var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_6] [i_5 - 2] [i_5 - 2] [i_6] [i_6 - 2]))))), (6556648382770019944ULL)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_22 [i_13] [8U])) < (var_7)));
        var_32 = ((/* implicit */short) (-((+(-1316850579)))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 25; i_14 += 4) 
    {
        var_33 = (+(((((/* implicit */_Bool) arr_51 [i_14])) ? (var_7) : (((/* implicit */unsigned long long int) -954018403)))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (arr_53 [i_14])));
        arr_55 [i_14] [i_14] = ((/* implicit */unsigned int) 9247034720139173621ULL);
    }
    var_35 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_4)))) ? ((-(576460752303423487LL))) : (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
