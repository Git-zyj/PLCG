/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165647
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), ((~(var_3)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((arr_2 [i_0]), (arr_5 [i_0] [i_1] [13U] [15LL])));
                            arr_9 [14ULL] [14ULL] [i_2] [i_3] = ((/* implicit */_Bool) max((arr_7 [(signed char)10] [(signed char)10] [i_2] [(short)7]), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_22 |= ((/* implicit */_Bool) ((unsigned long long int) ((long long int) (+(((/* implicit */int) var_11))))));
                            /* LoopSeq 3 */
                            for (short i_6 = 3; i_6 < 15; i_6 += 1) 
                            {
                                var_23 = ((/* implicit */long long int) var_1);
                                var_24 = ((/* implicit */short) (unsigned short)23585);
                            }
                            for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_4] [i_5] [i_7] = ((/* implicit */unsigned short) ((unsigned int) (~(arr_12 [9LL] [i_4] [i_4] [i_4 - 2]))));
                                var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 2096481083)), (3945836372U)))) != (((unsigned long long int) arr_14 [i_4]))))), (((short) (signed char)-24))));
                                arr_19 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_16);
                                var_26 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) arr_4 [(_Bool)1] [3ULL] [i_0])) > (((/* implicit */int) (short)-16568)))) ? ((~(3881612178U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                            {
                                var_27 -= ((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) ((signed char) 8003823221962729562ULL))) : (((/* implicit */int) (unsigned short)64325))));
                                var_28 -= ((/* implicit */signed char) (+(arr_10 [i_4 - 1])));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45917))) <= (var_6)));
                                var_30 = ((/* implicit */int) ((unsigned short) var_5));
                            }
                            arr_23 [i_4] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)0)), ((-(((/* implicit */int) (short)23518))))));
                            var_31 = ((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_0] [i_4 - 3]), (arr_7 [i_0] [i_1] [i_0] [i_4 - 3])))) ? ((+(arr_7 [i_0] [(signed char)0] [i_4] [i_4 - 3]))) : (((/* implicit */unsigned long long int) (+(2096481083)))));
                        }
                    } 
                } 
                var_32 ^= ((/* implicit */unsigned long long int) (((_Bool)0) ? (min((((((/* implicit */_Bool) var_2)) ? (3945836372U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))))), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) -538370898))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [i_9])), (4784564372324361577ULL)))) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_25 [i_9]))))))));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    {
                        arr_37 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_32 [i_10 + 1] [i_10 + 1] [i_11] [i_10 + 1]);
                        var_35 *= ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))))), (((long long int) ((unsigned short) arr_32 [(unsigned short)12] [i_10] [i_11] [i_12])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                var_36 = var_8;
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)2))) ? ((+(((/* implicit */int) arr_40 [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_29 [i_13] [i_14])) * (((/* implicit */int) arr_26 [i_9]))))))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_46 [(unsigned char)8] [21LL] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) arr_32 [(signed char)6] [i_10 + 1] [i_13] [(signed char)0]))))) - ((+((~(var_15)))))));
                            arr_48 [i_9] = ((/* implicit */_Bool) ((min((arr_41 [i_9] [(signed char)3] [i_9]), (arr_41 [i_9] [i_10] [i_10]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)33266), ((unsigned short)14)))) ? ((~(((/* implicit */int) arr_44 [i_9] [(signed char)9] [i_13] [i_13] [(short)13] [i_13])))) : ((~(((/* implicit */int) arr_42 [i_9] [i_13])))))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((4139659876U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11112))))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) - (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) % (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2355))))))));
                var_40 = ((/* implicit */int) ((unsigned short) ((long long int) ((long long int) (short)23525))));
            }
            for (signed char i_16 = 2; i_16 < 22; i_16 += 4) 
            {
                arr_51 [i_9] [(signed char)11] [i_9] [i_9] = ((/* implicit */unsigned short) 170081493U);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (long long int i_18 = 1; i_18 < 19; i_18 += 2) 
                    {
                        {
                            var_41 *= ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) -1082065133)))));
                            var_42 = ((/* implicit */short) max((var_42), (arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
                            arr_59 [i_9] [i_10 + 1] [i_16] [i_9] [i_18] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) var_10)))));
                        }
                    } 
                } 
                arr_60 [i_9] [i_9] = ((/* implicit */long long int) (short)16567);
                var_43 = ((/* implicit */int) min((var_43), (((((/* implicit */_Bool) (short)16567)) ? ((~(((/* implicit */int) arr_38 [i_9] [i_10 + 1] [i_10 - 1])))) : (((((/* implicit */_Bool) max(((unsigned short)65535), ((unsigned short)64449)))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) arr_30 [i_9] [i_16 - 1] [i_10 + 2] [i_10]))))))));
            }
        }
    }
    var_44 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) ((var_3) <= (((/* implicit */unsigned long long int) var_7)))))), (var_3)));
    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_17))), (((/* implicit */long long int) (signed char)23)))))));
}
