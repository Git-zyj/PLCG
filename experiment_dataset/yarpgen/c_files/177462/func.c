/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177462
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_1])) ^ (((/* implicit */int) arr_2 [i_0] [i_0]))));
            var_14 = ((/* implicit */long long int) arr_0 [i_0]);
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((arr_0 [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) 9976420932948230171ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))));
        }
        for (int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */signed char) (unsigned short)43893);
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] = ((/* implicit */signed char) var_11);
                            var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (12964973270212902208ULL) : (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) (~(var_0)));
            }
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    arr_24 [i_2] [i_2] [i_6] = ((/* implicit */int) (((+(14380713879626501388ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) + (4785007506601179608LL))))));
                    arr_25 [(unsigned char)4] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 15424138012157236425ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_18 = ((/* implicit */short) ((int) (-(8419295641865762575ULL))));
                    var_19 = ((/* implicit */short) var_10);
                    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                    var_21 -= ((/* implicit */long long int) (+(arr_4 [7ULL] [i_2 + 1])));
                    /* LoopSeq 3 */
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_23 = ((/* implicit */_Bool) arr_11 [i_0] [i_8] [i_0]);
                    }
                    for (long long int i_10 = 2; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        var_24 = ((((/* implicit */_Bool) arr_30 [i_0] [(unsigned char)9] [i_2] [(unsigned char)9] [i_2 - 1] [i_10] [i_10])) ? (arr_30 [i_0] [i_2] [i_2] [i_2] [i_2 - 1] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        var_25 -= ((/* implicit */unsigned long long int) arr_4 [i_8] [i_10 - 1]);
                    }
                    for (long long int i_11 = 2; i_11 < 12; i_11 += 2) /* same iter space */
                    {
                        arr_37 [i_6] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)9342)) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                        var_26 = ((/* implicit */signed char) (_Bool)1);
                    }
                }
                for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_0] [i_2 - 1])) ? (8419295641865762561ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0] [(_Bool)1] [i_2 - 1]))));
                    var_28 = ((/* implicit */short) ((unsigned long long int) (unsigned short)4385));
                    arr_40 [i_0] [i_2] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9342)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551602ULL)));
                    arr_41 [i_0] [i_6] [i_6] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-14657)) : (((/* implicit */int) arr_12 [i_0] [i_2 + 1] [i_6])))) ^ (((/* implicit */int) (short)-9349))));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 12; i_14 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) 5348849902304417154LL);
                            arr_47 [(unsigned char)7] [i_2] [i_6] [i_2] [(unsigned char)7] = ((/* implicit */_Bool) ((signed char) arr_35 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [11]));
                            var_30 += ((/* implicit */long long int) ((int) ((int) (short)-16384)));
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
            {
                var_31 *= ((/* implicit */_Bool) ((unsigned short) arr_35 [i_2] [i_2 - 1] [11LL] [(_Bool)1] [i_2] [i_2 + 1] [i_2 - 1]));
                var_32 = ((/* implicit */short) (~(((/* implicit */int) arr_26 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [i_2 + 1]))));
            }
            arr_51 [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_0)))));
            var_33 = ((/* implicit */long long int) arr_26 [(_Bool)1] [i_2] [i_0] [i_0] [i_0]);
        }
        var_34 = ((/* implicit */int) ((_Bool) arr_32 [12LL]));
        var_35 *= ((/* implicit */unsigned char) arr_43 [(_Bool)1] [(unsigned char)10] [(_Bool)1] [(_Bool)1]);
    }
    /* LoopNest 2 */
    for (signed char i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            {
                var_36 -= ((/* implicit */unsigned char) arr_4 [i_16] [i_16]);
                var_37 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_38 [i_17] [i_17] [i_17] [i_16] [i_16] [i_16]), (arr_38 [i_16] [i_16] [i_16] [i_16] [i_16] [(_Bool)1])))) << (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5092033666638892428LL)) ? (((/* implicit */int) (_Bool)1)) : (-470558799)));
                var_39 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_31 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (((/* implicit */unsigned char) arr_49 [i_16] [i_16] [i_16]))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_17] [i_16] [i_16])), ((unsigned short)62539)))) > (-2132746905)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_12) ? (var_11) : (8727792120345745962ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_16] [(unsigned short)2])) * (((/* implicit */int) (_Bool)1))))))))));
                var_40 += ((/* implicit */int) arr_52 [i_16] [i_17]);
            }
        } 
    } 
    var_41 += min((((((/* implicit */_Bool) min((8419295641865762575ULL), (((/* implicit */unsigned long long int) (short)28672))))) ? (((/* implicit */unsigned long long int) 1778890183)) : (var_11))), (((/* implicit */unsigned long long int) ((max((var_1), (var_10))) || (((/* implicit */_Bool) ((long long int) (signed char)-66)))))));
}
