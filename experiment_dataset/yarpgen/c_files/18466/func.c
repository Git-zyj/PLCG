/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18466
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) var_0)));
        var_17 += ((/* implicit */signed char) var_9);
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)5))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) <= (((long long int) 0LL)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((((((/* implicit */int) var_14)) - (((/* implicit */int) (signed char)-108)))) >= (max((((/* implicit */int) (signed char)5)), (-138599540)))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_4] [i_3]))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (int i_5 = 4; i_5 < 20; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) (short)(-32767 - 1)))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -138599551))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
                            {
                                arr_22 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_3] [i_2] [i_6]);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) ((11679562419612337233ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
                            {
                                arr_27 [i_1] [i_2] [i_3] [15U] [i_1] = (~(arr_15 [i_2] [i_2] [i_2] [i_2] [i_4 + 2] [i_4]));
                                var_24 = ((/* implicit */long long int) 10686261387303374089ULL);
                            }
                            for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
                            {
                                var_25 = ((/* implicit */signed char) max((min(((+(((/* implicit */int) (short)19438)))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_14 [i_4] [1LL] [1LL] [i_4] [i_8] [i_2])) : (((/* implicit */int) (_Bool)1)))))), (max((arr_16 [i_1] [i_1] [i_2 + 1] [i_4 + 1] [i_1] [i_8 - 1] [i_2]), (((/* implicit */int) (signed char)-1))))));
                                var_26 = ((/* implicit */long long int) max(((-(var_9))), ((~(18446744073709551615ULL)))));
                            }
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_4] [i_4]))))) || (((/* implicit */_Bool) var_10)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 21; i_9 += 4) 
                {
                    for (unsigned short i_10 = 4; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_28 = 8195775128877875976ULL;
                            /* LoopSeq 1 */
                            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                            {
                                var_29 = ((/* implicit */int) ((((/* implicit */int) max(((signed char)32), (var_10)))) >= (((/* implicit */int) arr_37 [i_2] [i_9 - 1] [i_9 - 1] [i_2 + 1] [i_9 - 1]))));
                                var_30 = ((8386560U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))));
                                var_31 -= ((/* implicit */short) ((long long int) max((((/* implicit */unsigned long long int) (unsigned short)58217)), (((((/* implicit */_Bool) 1528331190U)) ? (6327947747518012750ULL) : (((/* implicit */unsigned long long int) 2766636093U)))))));
                            }
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned long long int) max((((((int) (_Bool)1)) << (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (signed char)-6))))))), (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_33 = ((((/* implicit */_Bool) (short)7374)) ? (((/* implicit */int) (_Bool)1)) : (-546188714));
    var_34 = (+((+(((/* implicit */int) (_Bool)1)))));
}
