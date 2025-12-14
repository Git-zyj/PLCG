/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139290
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned short) var_4)));
        var_11 = ((/* implicit */int) ((short) 418614264U));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_12 &= arr_4 [(unsigned short)3];
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(min((((arr_1 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)46998)))))))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_4 [i_1]))) >> (((/* implicit */int) ((_Bool) arr_0 [i_1] [i_0])))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))) % (((/* implicit */int) ((short) 418614264U)))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((arr_1 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))))) >> (((((/* implicit */int) var_7)) + (3407)))));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [21U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) >= (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (4831092397272185504LL)))));
                            arr_18 [i_0] [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) arr_4 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18538)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)119))))), (var_6)));
                            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((var_9), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)61135)), ((~(((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_5 + 1] [i_6] [i_6]))))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
            {
                arr_26 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0]);
                var_18 = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_7])))) >= (arr_9 [i_7] [i_1] [i_7] [i_1]));
            }
        }
        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            arr_29 [i_8] [i_8] [(short)6] = ((/* implicit */unsigned int) ((short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_0] [i_8])))))));
            /* LoopNest 2 */
            for (signed char i_9 = 3; i_9 < 22; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (max((arr_32 [i_10] [i_9] [i_9 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                        var_20 = ((/* implicit */unsigned short) var_9);
                        var_21 = ((/* implicit */unsigned long long int) arr_24 [i_8] [i_8] [(unsigned char)8] [i_8]);
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_16 [i_9 + 2] [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 2])))));
                        var_23 = ((/* implicit */_Bool) ((min((arr_12 [i_9 - 2]), (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) (short)-11713))))))))));
                    }
                } 
            } 
            var_24 = arr_21 [i_0] [i_0] [i_0] [i_0] [i_0];
            /* LoopNest 3 */
            for (unsigned short i_11 = 2; i_11 < 23; i_11 += 2) 
            {
                for (unsigned char i_12 = 2; i_12 < 23; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32725)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_23 [i_12])))) ? (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) min(((short)11712), (((/* implicit */short) (unsigned char)139)))))))) : (((((/* implicit */int) (unsigned short)42983)) % (((/* implicit */int) ((signed char) var_1)))))));
                            var_26 -= ((/* implicit */signed char) (unsigned short)18533);
                        }
                    } 
                } 
            } 
        }
        for (int i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_5)) ? (arr_11 [i_0] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_14]))))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned short) arr_38 [i_0] [i_14] [i_14]))))))) << ((((+(((((/* implicit */_Bool) 1931045337U)) ? (((/* implicit */int) (short)-15446)) : (((/* implicit */int) var_10)))))) + (15502)))));
            var_28 += ((((/* implicit */int) min((arr_28 [i_0] [i_0] [i_0]), (arr_28 [9LL] [9LL] [9LL])))) == (((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) (unsigned short)18559)) : (((/* implicit */int) arr_28 [i_14] [i_14] [i_14])))));
        }
        var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_28 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_1)))))));
        var_30 *= ((/* implicit */unsigned char) max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) min((((/* implicit */int) var_0)), (545908945)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            var_31 -= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)120))));
            var_32 = ((/* implicit */short) ((arr_32 [i_16] [i_16] [i_15] [i_15] [i_15]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31254)))));
            arr_50 [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11388))) > (arr_1 [i_15])));
        }
        var_34 = ((/* implicit */long long int) ((unsigned char) arr_43 [i_15]));
    }
    /* LoopNest 2 */
    for (signed char i_17 = 1; i_17 < 15; i_17 += 4) 
    {
        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_19 = 2; i_19 < 17; i_19 += 4) 
                {
                    for (unsigned int i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 19; i_21 += 1) 
                        {
                            {
                                var_35 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_17] [i_18] [i_17]))) / (var_6))));
                                arr_66 [i_21] [i_20] [i_20] [(short)0] [i_20] [i_17 + 2] [(short)0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)245))))) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1)))) > (((((/* implicit */int) var_3)) | (((/* implicit */int) (short)10946)))))))));
                            }
                        } 
                    } 
                } 
                var_36 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */short) arr_22 [(unsigned short)22])), (arr_14 [i_17] [i_17 + 3] [i_17 + 4] [i_17 + 1] [i_17 + 1])))), (var_6)));
                arr_67 [i_18] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_51 [i_17 + 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_51 [i_17 + 1])))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)8))))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((signed char) ((unsigned char) var_10))))));
}
