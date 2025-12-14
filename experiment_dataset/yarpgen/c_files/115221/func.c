/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115221
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7602509386515488079LL)) ? ((+(4294967295U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_5))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1U)) : (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) var_11);
        var_13 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (short)-16242))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))))));
                    arr_9 [i_0 - 1] [i_1 - 1] = ((/* implicit */_Bool) var_8);
                    arr_10 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) arr_4 [i_0 + 1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) (signed char)-26);
                arr_19 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) ^ (((/* implicit */int) arr_1 [i_4] [i_4]))));
            }
            /* LoopSeq 3 */
            for (long long int i_5 = 1; i_5 < 8; i_5 += 2) 
            {
                arr_22 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) ((long long int) var_3));
                var_15 = ((/* implicit */_Bool) min((var_15), (((((((/* implicit */int) var_3)) / (((/* implicit */int) arr_1 [i_0 + 1] [i_5 + 2])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_5 + 1])))))))));
            }
            /* vectorizable */
            for (signed char i_6 = 1; i_6 < 7; i_6 += 1) /* same iter space */
            {
                var_16 += ((/* implicit */unsigned char) ((unsigned short) var_8));
                var_17 = ((/* implicit */signed char) max((var_17), (var_6)));
                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_16 [i_0 - 1]) ? (-5445525975179609581LL) : (((/* implicit */long long int) 31U))))) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_6 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                arr_25 [i_0 + 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned short) arr_7 [i_6 + 1] [i_6 + 2] [i_6 + 3] [i_0 + 1]);
            }
            for (signed char i_7 = 1; i_7 < 7; i_7 += 1) /* same iter space */
            {
                arr_28 [i_0 - 1] = ((/* implicit */signed char) arr_16 [i_0 - 1]);
                var_19 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_3 - 1] [i_7 + 1])) ? (-9133265750768536620LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)91))))), (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0 + 1] [i_0 - 1] [i_0 - 1])) * (((/* implicit */int) var_3))))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (long long int i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        {
                            arr_33 [i_0 - 1] [i_9] [i_0 + 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned int) arr_13 [i_3 - 1]);
                            arr_34 [i_9] [i_0 - 1] [i_3 - 1] [i_7 + 1] [i_7 + 1] [i_8] [i_9 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) -1968649320)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (unsigned char)225)), (1968649315)))))) ? (((((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) % ((((_Bool)1) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (signed char)-99)))))) : (min((((/* implicit */int) (signed char)107)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_30 [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                            arr_35 [i_0 + 1] [i_0 - 1] [i_3 - 1] [i_7 - 1] [i_8] [i_9 - 2] [i_8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_7 + 2] [i_8] [i_9 + 1])) : (((/* implicit */int) arr_32 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_10)) ? (-7703777887530451865LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [i_7 + 1] [i_3 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_3 - 1] [i_7 + 1] [i_8])) : (((/* implicit */int) arr_13 [i_3 - 1])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_17 [i_0 - 1] [i_3 - 1] [i_7 - 1] [i_3 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))))))) : (((/* implicit */int) ((((_Bool) (signed char)19)) || ((!(((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))))))));
                        }
                    } 
                } 
            }
            arr_36 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((((/* implicit */long long int) ((4090550071U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1968649320)) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (unsigned short)26535)))))))) < (((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_7)) : (var_5))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) min((arr_13 [i_0 - 1]), (arr_13 [i_3 - 1])))))) ? (((((/* implicit */_Bool) 4294967290U)) ? (((arr_21 [i_3 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_3 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0 - 1] [i_3 - 1] [i_3 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        }
    }
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) || ((!(((/* implicit */_Bool) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (1308047765U)))))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)5766))))), (min((((/* implicit */unsigned int) (_Bool)1)), (2324437331U)))))));
}
