/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122047
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (unsigned short)511);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_14));
        arr_5 [16U] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65025))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) var_4));
        var_18 *= ((/* implicit */unsigned char) var_8);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_5] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9))));
                            arr_20 [i_1] [i_1] [(short)7] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)160));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_27 [i_1] [i_1] [i_6] [i_7] = ((/* implicit */long long int) ((unsigned short) 6808654986764742046LL));
                            var_20 = ((/* implicit */long long int) ((unsigned short) (unsigned short)492));
                            var_21 = ((/* implicit */unsigned char) 4838828340826199625LL);
                        }
                    } 
                } 
                arr_28 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) (unsigned short)56336);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)96));
                            arr_35 [i_1] [i_1] [i_1] [i_1] = -607620393;
                            var_23 = ((/* implicit */int) ((unsigned long long int) (unsigned short)0));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */unsigned long long int) 607620416);
            }
            for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) var_8);
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                {
                    arr_43 [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned char) var_3));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */short) 984700527368560859LL);
                        var_27 = ((/* implicit */long long int) var_7);
                    }
                }
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                {
                    var_28 = ((unsigned short) 10880305672414242943ULL);
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_52 [i_10] [i_10] [i_2] = (unsigned char)190;
                        var_29 = ((/* implicit */short) var_3);
                    }
                }
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                {
                    arr_55 [i_10] [i_10] [i_10] [i_2] [i_10] [i_10] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) var_17)));
                    arr_56 [i_10] [i_2] [i_10] [i_10] [i_10] [i_15] = ((/* implicit */short) ((int) var_13));
                    var_30 = ((/* implicit */int) var_4);
                }
            }
            for (int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                var_31 = ((/* implicit */unsigned long long int) (+(var_17)));
                arr_59 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) 6808654986764742046LL));
                arr_60 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
            }
            arr_61 [i_1] = ((/* implicit */long long int) var_8);
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        {
                            arr_70 [i_1] [i_1] [i_17] [i_18] [i_19] = (unsigned short)2040;
                            arr_71 [i_19] |= ((/* implicit */short) 1039130238397962918ULL);
                            arr_72 [i_1] [i_1] [(unsigned short)7] [i_1] [i_1] = ((/* implicit */short) (unsigned char)250);
                        }
                    } 
                } 
                arr_73 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 51010070U))));
                arr_74 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                arr_75 [i_1] [i_2] [i_17] = ((/* implicit */unsigned long long int) ((unsigned short) -6808654986764742075LL));
            }
        }
    }
    for (int i_20 = 0; i_20 < 17; i_20 += 3) 
    {
        arr_78 [(unsigned char)5] = ((/* implicit */unsigned long long int) var_7);
        arr_79 [10] [i_20] &= ((/* implicit */int) -1134057849426201359LL);
    }
    /* vectorizable */
    for (unsigned short i_21 = 0; i_21 < 13; i_21 += 3) 
    {
        var_32 = ((/* implicit */int) ((unsigned short) var_13));
        arr_82 [i_21] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
        var_33 = (unsigned short)41423;
    }
    var_34 = ((/* implicit */short) ((unsigned short) var_1));
}
