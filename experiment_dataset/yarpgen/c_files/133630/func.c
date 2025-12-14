/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133630
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
    var_12 = var_8;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_13 &= ((((/* implicit */_Bool) ((short) -4634106144823612338LL))) ? (max((((((/* implicit */_Bool) (short)-4765)) ? (0LL) : (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)22933))))));
                        var_14 = min(((unsigned char)29), ((unsigned char)225));
                        var_15 = min((((/* implicit */long long int) 4294967295U)), (-9LL));
                        arr_11 [i_0 - 2] [i_2] [i_2 + 3] [i_2] [i_3] = ((/* implicit */unsigned int) max(((-((~(9LL))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-58)), (3597518104U)))), (((long long int) var_4))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -847051409)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)28982))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~((~(((/* implicit */int) ((unsigned char) (signed char)(-127 - 1)))))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
                        var_18 = ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (short)0)))) : (((/* implicit */int) (signed char)-116)));
                        /* LoopSeq 3 */
                        for (short i_8 = 2; i_8 < 11; i_8 += 4) 
                        {
                            arr_24 [i_8 + 1] [i_5] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */signed char) var_9);
                            var_19 = ((/* implicit */short) 1688840632);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_4] [i_5 + 1] [i_6] [i_5] [i_9] = (~((+(((/* implicit */int) (short)32767)))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (13689874174232081267ULL)));
                            var_21 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 17892288957763831257ULL)) ? (((/* implicit */long long int) -1345299215)) : (-1191683342681798972LL)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((((_Bool) var_10)) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))) : (-5983177606314987236LL)));
                            var_24 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_11)) : (131072))));
                        }
                    }
                    arr_32 [i_6] [i_5] [(signed char)9] [0] = ((/* implicit */unsigned char) min(((~(max((var_5), (var_5))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32738)) : (2147483647)))));
                    arr_33 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)252)) : (-1))) : (((int) (_Bool)0))))), (((unsigned long long int) var_4))));
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        for (int i_12 = 3; i_12 < 11; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (_Bool)1)))));
                                arr_39 [i_4] [i_5] [i_6] [i_11] [i_5] [i_12] [i_4] = ((/* implicit */_Bool) (unsigned char)225);
                                var_26 = ((/* implicit */long long int) max((1147883070), ((+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (short)-32738))))))));
                            }
                        } 
                    } 
                    arr_40 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4728723481142488817LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-2351125626950042145LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28982))) : (((((/* implicit */_Bool) -927520756)) ? (((/* implicit */unsigned int) -134217728)) : (var_4)))))) ? ((~(min((var_5), (((/* implicit */int) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2147483641) : (((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048560)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31981))) : (10700398995657763097ULL)))) ? (((unsigned long long int) ((long long int) 4728723481142488831LL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)1)))))));
        /* LoopSeq 1 */
        for (long long int i_14 = 3; i_14 < 10; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 2; i_15 < 11; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_6))));
                        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned long long int) 18446744073709551615ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7661780989950481357LL)) ? (((/* implicit */int) (short)-15530)) : ((-2147483647 - 1)))))))) ? ((+(((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)23)))) : (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)10)))))))));
                        arr_50 [i_15] [i_13] = ((/* implicit */_Bool) ((int) ((int) var_10)));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (short)-20976)))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_11)))) ? (((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)254)), ((short)-32748))))) : (161151891U))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) -1147883069)) ? (var_10) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (unsigned char)0)) ? (var_10) : (((/* implicit */int) (short)32767)))))))));
        }
    }
    var_32 = ((/* implicit */short) (~(562400197607424LL)));
}
