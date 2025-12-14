/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160773
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (_Bool)1);
                var_18 |= 770871328U;
            }
        } 
    } 
    var_19 |= ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (unsigned char)119);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) 18060897778965172914ULL);
                arr_14 [i_3] [(unsigned char)10] [i_4] = ((/* implicit */unsigned long long int) 3524095941U);
            }
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                arr_18 [i_3] = ((/* implicit */unsigned long long int) 770871355U);
                var_21 += ((/* implicit */unsigned char) (signed char)72);
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        {
                            arr_25 [(_Bool)1] [(unsigned char)17] [i_7 - 3] [i_7 + 2] [(short)18] [i_7] [i_3] = ((/* implicit */_Bool) (short)26521);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
            }
            arr_26 [i_3] = ((/* implicit */unsigned long long int) 2782531872U);
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned char)164))));
            var_24 = ((/* implicit */_Bool) (unsigned char)95);
            var_25 += ((/* implicit */signed char) (unsigned short)24847);
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) 770871377U))));
            arr_31 [i_8] [i_8] = 12416622727522411253ULL;
            var_27 = ((/* implicit */signed char) (short)1849);
        }
        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) 3524095968U))));
            var_29 = 3524095996U;
        }
    }
    for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) (short)9377);
        var_31 -= ((/* implicit */unsigned long long int) 1510211532U);
        arr_37 [i_10] |= ((/* implicit */unsigned long long int) (short)23775);
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            var_32 += ((/* implicit */int) (short)-9726);
            var_33 = (unsigned char)106;
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */short) 1868005171U);
            var_35 = ((/* implicit */int) (unsigned char)232);
            var_36 += ((/* implicit */unsigned short) (signed char)-39);
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 21; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    {
                        arr_48 [i_10] = ((/* implicit */unsigned long long int) 263045343);
                        var_37 = ((/* implicit */_Bool) (short)-5980);
                        var_38 = (_Bool)0;
                        arr_49 [i_14] [i_13 - 2] [i_12] [i_10] |= ((/* implicit */_Bool) (unsigned short)27799);
                    }
                } 
            } 
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 1) 
            {
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 23; i_18 += 2) 
                        {
                            var_39 = 1207907207U;
                            var_40 = ((/* implicit */short) (unsigned short)10301);
                            arr_61 [i_10] [i_10] [(short)17] [i_17] [i_15] = ((/* implicit */unsigned char) 230309650U);
                            var_41 = ((/* implicit */signed char) (unsigned short)45759);
                            var_42 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        arr_62 [i_15] [i_15] [i_16] [i_17] [i_15] = ((/* implicit */unsigned char) 233126913932256971ULL);
                        var_43 = ((/* implicit */unsigned short) (signed char)72);
                    }
                } 
            } 
            var_44 = 8664656013048761215ULL;
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_45 -= ((/* implicit */unsigned long long int) (signed char)93);
            var_46 = ((/* implicit */_Bool) (unsigned short)40709);
        }
        arr_66 [i_10] [i_10] |= ((/* implicit */unsigned int) (unsigned char)132);
    }
    for (unsigned char i_20 = 0; i_20 < 19; i_20 += 1) 
    {
        var_47 = ((/* implicit */unsigned int) 16063527045490751883ULL);
        arr_69 [i_20] [i_20] = ((/* implicit */unsigned long long int) (signed char)-87);
        arr_70 [i_20] = ((/* implicit */unsigned short) (_Bool)1);
        var_48 = ((/* implicit */_Bool) (unsigned short)27799);
    }
    var_49 = ((/* implicit */_Bool) var_15);
}
