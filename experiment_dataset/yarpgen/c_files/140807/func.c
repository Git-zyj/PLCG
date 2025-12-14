/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140807
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned long long int) (+(arr_6 [i_0])));
            var_13 += ((/* implicit */unsigned long long int) var_6);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((-867712219), (((/* implicit */int) (signed char)62)))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) + (4247154301773260683ULL)))));
            arr_12 [(signed char)22] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
            arr_13 [i_0] = ((/* implicit */unsigned short) ((8887893238972982343ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        }
        var_15 = ((/* implicit */_Bool) min(((-(18446744073709551615ULL))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (18446744073709551598ULL))), (((/* implicit */unsigned long long int) (+(4294967272U))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        var_16 = ((/* implicit */signed char) 1712704692520462005ULL);
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) var_4);
                        /* LoopSeq 1 */
                        for (int i_7 = 2; i_7 < 20; i_7 += 1) 
                        {
                            var_18 *= ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))) : (arr_14 [i_6 - 3] [i_7])));
                            var_19 = ((/* implicit */unsigned long long int) ((_Bool) (-(22LL))));
                        }
                    }
                } 
            } 
            var_20 = ((((/* implicit */_Bool) 0ULL)) ? (18446744073709551601ULL) : (11307558441746038712ULL));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 11307558441746038712ULL))));
                var_22 = ((/* implicit */signed char) ((unsigned long long int) var_10));
            }
            var_23 = ((/* implicit */signed char) (-(4247154301773260662ULL)));
        }
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_24 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 22; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_29 [i_3 - 2] [i_3 - 2] [i_10 - 2]))));
                    arr_36 [i_3] = ((/* implicit */unsigned char) arr_23 [i_10 - 2]);
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_3 - 1]))) - (4247154301773260684ULL))))));
                }
                var_27 = ((/* implicit */_Bool) (((~(var_0))) & (((/* implicit */unsigned int) (+(arr_32 [i_3] [i_3] [i_9] [i_10 - 1]))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        {
                            var_28 *= ((/* implicit */_Bool) (short)-128);
                            var_29 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_3] [i_9] [i_10] [i_3 - 1]))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)42)) || (((/* implicit */_Bool) var_5))))) : ((~(((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned long long int) (-(var_1)));
            }
        }
    }
}
