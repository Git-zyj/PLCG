/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117421
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) var_6))), (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_7))))), (min((((/* implicit */int) var_11)), (var_9)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_13)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-936)), (var_6)))) : (var_0)))));
        var_15 = ((/* implicit */_Bool) (short)-922);
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)129))));
            var_17 = ((((/* implicit */_Bool) (short)921)) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_2] [(_Bool)1] [i_2])) : (var_5))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned short) (signed char)57);
                        var_19 -= ((/* implicit */unsigned char) (short)958);
                    }
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */int) (_Bool)1);
                            var_21 = ((/* implicit */signed char) ((int) arr_23 [i_1] [i_8] [i_6] [i_8] [i_6]));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            var_22 -= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-952)) + (963))))));
                            arr_26 [i_1] [i_5] [i_6] [i_6] [i_7] [i_9] = ((/* implicit */unsigned char) 1ULL);
                        }
                        arr_27 [i_7] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_25 [i_1] [(unsigned short)3] [i_6] [i_6] [i_7]);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 3] [i_1] [i_6] [i_6] [i_6])) ? ((~(26ULL))) : (((/* implicit */unsigned long long int) (+(var_4))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (var_6)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                var_25 = ((/* implicit */short) max((var_25), ((short)-29921)));
                var_26 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
            }
            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_11] [i_11]))));
                var_28 = ((/* implicit */long long int) ((unsigned long long int) 18446744073709551614ULL));
                var_29 = ((/* implicit */int) max((var_29), ((+(((((/* implicit */_Bool) (unsigned short)28797)) ? (((/* implicit */int) arr_28 [i_11] [i_5] [i_1 - 1])) : (((/* implicit */int) var_11))))))));
            }
        }
        var_30 = ((/* implicit */long long int) (unsigned short)40479);
    }
    var_31 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            for (long long int i_14 = 1; i_14 < 10; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(var_5))))));
                        arr_46 [i_15] [i_13] [8LL] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_33 = ((/* implicit */short) (~(var_9)));
                    }
                } 
            } 
        } 
        var_34 *= ((/* implicit */short) ((unsigned short) arr_43 [i_12] [i_12] [i_12]));
    }
    /* LoopNest 2 */
    for (short i_16 = 1; i_16 < 20; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            {
                arr_55 [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_47 [i_17]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */short) (-((~(-600458699)))));
                                arr_63 [6] [6] [10ULL] [i_19] [i_19] = ((/* implicit */long long int) arr_62 [(unsigned char)9] [i_19] [i_19] [i_18] [i_17] [i_16 - 1]);
                                arr_64 [10] [10] [i_17] [i_18] [i_19] [i_20] = ((/* implicit */unsigned short) (~(((var_6) >> (((var_6) - (1321581567)))))));
                                var_36 = ((/* implicit */unsigned int) arr_53 [i_17] [i_19]);
                                var_37 = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned int) ((signed char) arr_52 [i_17]));
                }
                var_39 = min((((/* implicit */short) (signed char)-112)), ((short)-5256));
            }
        } 
    } 
}
