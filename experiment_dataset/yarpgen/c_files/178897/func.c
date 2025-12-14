/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178897
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
    var_16 = ((/* implicit */_Bool) ((var_5) / (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_10) - (9620249158182988054ULL)))))) ? (max((((/* implicit */unsigned int) var_12)), (3087283615U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 11866982477427419478ULL)) && (((/* implicit */_Bool) -1))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(1218408460))))));
        var_18 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((/* implicit */int) (short)30218)))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-30223)) * (((/* implicit */int) (signed char)123))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned int) (short)-30208);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_9 [0ULL] &= ((/* implicit */unsigned short) var_0);
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        var_21 = (~(arr_2 [i_2] [i_5] [i_2]));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_23 [18] [i_2] = ((/* implicit */short) ((_Bool) (short)30237));
                            var_22 = (-(((/* implicit */int) (unsigned short)44978)));
                            var_23 = (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_21 [i_4]))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_4] [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) (unsigned short)59884))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            arr_27 [9ULL] [i_3] [i_2] [13ULL] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-30223))));
                            arr_28 [i_2] [i_3] [1] [i_2] [i_7] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-30218)) : (((/* implicit */int) (unsigned char)90)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) ((int) (short)-30218));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_1))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) (short)-30247);
                            arr_35 [i_2] [i_2] [12] [i_4] [(unsigned short)2] [i_5] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_19 [i_2] [i_3] [i_3] [10ULL] [(short)6])) - (((/* implicit */int) (_Bool)1))))));
                            arr_36 [i_2] [i_3] [8] [i_4] [2U] [i_5] [i_9] = ((/* implicit */_Bool) (+(var_11)));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned short) arr_14 [i_2] [(short)14] [i_5] [i_4])))));
                            var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) 41798381)) ? (1167822474U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30229)))));
                        }
                        var_30 = ((/* implicit */long long int) var_5);
                    }
                } 
            } 
            var_31 = ((/* implicit */int) var_7);
        }
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2] [12] [i_2])) ? (4643071534418378804ULL) : (((/* implicit */unsigned long long int) arr_2 [i_2] [4ULL] [i_10]))));
            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) -1179177760)) > (13561883367937056466ULL))))));
        }
        arr_41 [i_2] [i_2] = ((unsigned short) arr_31 [i_2] [i_2] [(unsigned short)4] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
    {
        arr_45 [i_11] = ((((/* implicit */int) arr_13 [i_11] [i_11] [i_11])) >> (((((/* implicit */int) var_12)) - (141))));
        var_34 = 487609245;
    }
    var_35 = ((/* implicit */short) ((((_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((4643071534418378804ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30197))))), ((_Bool)1))))) : (var_7)));
}
