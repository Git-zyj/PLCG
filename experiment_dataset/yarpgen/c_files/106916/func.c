/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106916
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((11364200625937522318ULL), (((/* implicit */unsigned long long int) (unsigned char)85))))) ? (((/* implicit */int) (!(var_9)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)48)))))) | (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (~(((/* implicit */int) var_17)))))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_19 *= ((/* implicit */_Bool) -5930950038241109861LL);
                            arr_15 [17LL] [i_1] [i_1] [13LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_13 [i_1])))) ? (((/* implicit */int) (unsigned short)51153)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1 + 2] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_0]))));
                            var_21 = ((/* implicit */_Bool) (+(109579903242184666LL)));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) 2147483647))), ((+((((_Bool)1) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_3] [i_2] [13])) : (arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_5])))))));
                            arr_18 [i_0] [i_1] [i_1] [i_3] [i_5] [8LL] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_1 - 1] [i_2] [i_1] [i_6] = ((/* implicit */long long int) arr_10 [i_0] [(_Bool)1] [i_0]);
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 + 2] [5] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [(unsigned char)3] [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) var_9))));
                            var_24 = ((/* implicit */int) arr_3 [i_1 + 1] [i_1]);
                            var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))));
                            var_26 = ((/* implicit */long long int) var_9);
                        }
                        for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) var_8);
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_3] |= min((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)14393)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-593394763614332471LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_3] [i_2] [i_3] [i_7])))))))));
                        }
                        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) var_15)) : (18446744073709551600ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))))) << (((((/* implicit */int) (short)24138)) - (24087)))));
                    }
                } 
            } 
            var_29 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (5930950038241109861LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
            {
                arr_28 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) -1627922651))) != (((/* implicit */int) (!(var_11))))));
                var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((((/* implicit */_Bool) 1747887321)) ? (((/* implicit */int) arr_20 [(_Bool)1] [i_0] [i_1] [(_Bool)1] [i_8])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned char)5)))))));
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) var_17);
                            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_9 + 1] [i_9] [i_9 + 1] [i_1 + 1] [i_1 + 1]))));
                            arr_33 [i_1] [i_0] [i_8] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_22 [i_0] [i_1] [i_1] [i_8] [i_1] [6] [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-5930950038241109861LL)));
                            var_33 = ((/* implicit */short) (~(((/* implicit */int) arr_27 [i_0] [i_1]))));
                            var_34 ^= ((((/* implicit */_Bool) (-(arr_30 [i_0] [i_1])))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_8] [i_8])) >= (((/* implicit */int) (unsigned short)36411))))));
                        }
                    } 
                } 
            }
            for (long long int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_5)))) | (((((/* implicit */_Bool) 9175937664188613996LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_24 [i_0] [(_Bool)0] [i_1] [(short)16] [i_1] [i_1])))))))));
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_11] [i_11] [i_0] [i_0] [i_0] [i_0]))) / (arr_13 [i_0])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (short)24138)) / (((/* implicit */int) (_Bool)1)))))))));
            }
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (signed char)-9))));
                /* LoopNest 2 */
                for (long long int i_13 = 3; i_13 < 17; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) arr_11 [i_14]))));
                            arr_44 [i_1] [i_13 - 3] [i_12] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) var_17);
                            arr_45 [i_0] [3] [i_12] [i_1] [i_1] = ((/* implicit */long long int) arr_39 [i_14] [i_13 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0]);
                            var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                            arr_46 [i_0] [i_1] [i_12] [i_13 - 1] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_17)) + (137970764))) >= (((/* implicit */int) (unsigned short)65535)))) ? (((long long int) ((var_16) && (((/* implicit */_Bool) -1461952810))))) : (((/* implicit */long long int) ((/* implicit */int) min((((unsigned char) arr_42 [i_0] [i_12] [i_12] [i_1] [i_12] [i_13])), (((/* implicit */unsigned char) ((signed char) arr_39 [(unsigned char)8] [i_13] [i_1 + 1] [i_1 + 1] [i_1 - 2] [(_Bool)0])))))))));
                        }
                    } 
                } 
                var_40 ^= min((538380649), (((/* implicit */int) (unsigned char)252)));
                /* LoopNest 2 */
                for (signed char i_15 = 4; i_15 < 17; i_15 += 1) 
                {
                    for (unsigned char i_16 = 3; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_41 += ((/* implicit */signed char) var_13);
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 4534632444426971307LL)), (var_13))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_1 + 1] [i_1 - 1] [i_15 - 4] [i_16] [i_16 - 2] [i_16])))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (signed char)54))))) : (((((((/* implicit */_Bool) 1782169610)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (-1627922651))) - (((/* implicit */int) ((((/* implicit */long long int) 2147483647)) == (-516211833984071954LL))))))));
                            var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)58675))));
                            var_44 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_12]))));
                        }
                    } 
                } 
                arr_51 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) ((arr_42 [i_0] [i_0] [9LL] [i_1] [i_12] [i_12]) ? (min((((/* implicit */long long int) (short)-25290)), (arr_26 [i_0] [i_1 + 2] [(_Bool)1] [i_1 + 2]))) : ((-(arr_47 [13ULL] [i_0] [9LL] [i_1] [i_12] [13ULL]))))));
            }
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) 
                {
                    for (long long int i_19 = 1; i_19 < 16; i_19 += 4) 
                    {
                        {
                            arr_58 [i_0] [i_1] [i_17] [i_18] [i_1] [i_1] = ((/* implicit */short) ((_Bool) ((unsigned long long int) (short)-10795)));
                            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) arr_3 [i_1] [(unsigned char)8]))));
                            arr_59 [i_0] [(_Bool)1] [i_17] [i_1] [(signed char)4] [i_19] = ((/* implicit */long long int) arr_7 [i_1] [i_1]);
                        }
                    } 
                } 
            } 
        }
        var_46 = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)15]);
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                {
                    var_47 = (unsigned char)111;
                    var_48 = ((/* implicit */int) 12122013474796104066ULL);
                }
            } 
        } 
    }
    var_49 = ((/* implicit */unsigned long long int) min((733093328), (((/* implicit */int) var_17))));
    var_50 = var_11;
    var_51 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) (unsigned char)101))));
}
