/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154738
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
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) max((max((var_4), (((/* implicit */int) (unsigned short)34194)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)34213))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_18 += ((/* implicit */int) (unsigned short)34186);
            var_19 = ((/* implicit */signed char) (unsigned short)54421);
        }
        for (signed char i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_18 [i_3] = ((/* implicit */unsigned char) 4236600145407218816ULL);
                            var_20 = ((/* implicit */unsigned long long int) 3649153616U);
                            var_21 -= ((/* implicit */int) (unsigned char)71);
                            var_22 *= (unsigned char)1;
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_23 = -5193573476994241882LL;
                            var_24 = (unsigned short)44360;
                            var_25 = ((/* implicit */int) (unsigned char)185);
                        }
                    }
                } 
            } 
            var_26 *= ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_11 [i_0] [i_2 + 1]), (var_5)))), (max((((/* implicit */int) (unsigned char)186)), (-1721968441)))));
        }
        /* vectorizable */
        for (signed char i_7 = 1; i_7 < 19; i_7 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) -1721968441);
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 4435902403152227186LL);
            arr_26 [i_7] = ((/* implicit */unsigned char) 1721968438);
            arr_27 [i_0] [16LL] = ((/* implicit */long long int) (unsigned char)126);
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (unsigned short)34194))));
            var_29 = ((/* implicit */long long int) (unsigned short)34184);
            var_30 = ((/* implicit */int) 9223372036854775807LL);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (long long int i_10 = 1; i_10 < 16; i_10 += 4) 
                {
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        {
                            arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) 948818480U);
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (unsigned short)60356))));
                            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1721968440);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            arr_42 [i_12] [i_12] = ((/* implicit */unsigned char) (signed char)31);
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                arr_47 [i_0] [i_12] [i_12] [i_12] = (unsigned char)153;
                var_32 = (signed char)-119;
            }
            var_33 = 1721968450;
        }
        var_34 = ((/* implicit */unsigned char) max((max((-2449025738865149062LL), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_35 = ((/* implicit */unsigned short) max((((/* implicit */int) max((var_16), ((unsigned char)0)))), (max((arr_19 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) 16777215);
        arr_50 [i_14] = ((/* implicit */int) (unsigned char)31);
        arr_51 [i_14] = ((/* implicit */long long int) (unsigned char)3);
        arr_52 [i_14] = (unsigned char)216;
        /* LoopSeq 2 */
        for (int i_15 = 3; i_15 < 17; i_15 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (unsigned char)165))));
            arr_56 [i_14] = (unsigned char)255;
            var_38 -= (unsigned char)31;
            arr_57 [i_14] = 1721968428;
            arr_58 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) 16383);
        }
        for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            arr_63 [i_14] = ((/* implicit */int) (unsigned char)103);
            arr_64 [i_14] [i_16] [i_16] = ((/* implicit */unsigned long long int) (unsigned char)192);
            /* LoopSeq 3 */
            for (unsigned char i_17 = 2; i_17 < 18; i_17 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_18 = 3; i_18 < 19; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        {
                            var_39 = (unsigned char)103;
                            arr_72 [i_14] [i_14] [i_17] [i_14] [15U] = ((/* implicit */long long int) (unsigned char)150);
                        }
                    } 
                } 
                var_40 = ((/* implicit */signed char) 2147483641);
                arr_73 [i_14] [i_16] = ((/* implicit */unsigned char) 1721968441);
            }
            for (unsigned char i_20 = 2; i_20 < 18; i_20 += 4) /* same iter space */
            {
                var_41 = (unsigned char)13;
                var_42 = -1721968426;
                var_43 = ((/* implicit */unsigned char) (unsigned short)45222);
                /* LoopNest 2 */
                for (long long int i_21 = 1; i_21 < 19; i_21 += 1) 
                {
                    for (signed char i_22 = 3; i_22 < 19; i_22 += 1) 
                    {
                        {
                            var_44 ^= ((/* implicit */int) (unsigned short)21458);
                            var_45 = (unsigned char)240;
                            var_46 = ((/* implicit */unsigned char) 0);
                            arr_84 [i_14] [i_14] [i_14] [i_14] [i_21 - 1] [i_14] [i_22 - 1] = (unsigned char)120;
                        }
                    } 
                } 
            }
            for (unsigned char i_23 = 2; i_23 < 18; i_23 += 4) /* same iter space */
            {
                var_47 -= ((/* implicit */unsigned char) -2726348564708414277LL);
                arr_87 [i_14] [i_14] = ((/* implicit */long long int) (unsigned char)200);
            }
        }
    }
    var_48 = var_14;
    var_49 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    var_50 -= ((/* implicit */unsigned int) var_14);
}
