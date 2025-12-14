/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162097
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (-(arr_1 [i_0])));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)56312)));
                        var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_1 - 1] [i_2] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56312))) : (4294967294U))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 2; i_4 < 23; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (min((-1631090595), (((/* implicit */int) (unsigned short)53003)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)9207)))))), (((((/* implicit */_Bool) 2530233086U)) ? (((/* implicit */int) (unsigned short)56308)) : (((/* implicit */int) (short)32767))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(0)))) | (((((/* implicit */long long int) var_10)) & ((~(4529988702652453798LL)))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1631090608)) || (((((/* implicit */int) arr_7 [19U] [i_4 - 2] [16] [i_0 + 3])) != (((/* implicit */int) ((unsigned short) (unsigned short)9223)))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) -10)) | (-1728609287176454095LL)));
            var_27 = ((/* implicit */int) -4529988702652453777LL);
        }
        for (int i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
        {
            arr_17 [i_5 + 1] [i_0] = ((int) (+(arr_2 [i_0 - 1] [i_5 + 1] [i_5])));
            arr_18 [i_5 + 1] [i_0] [i_0] &= ((/* implicit */unsigned long long int) -4529988702652453799LL);
            var_28 -= ((/* implicit */unsigned char) min(((~((+(var_17))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56284)))))) || (((/* implicit */_Bool) var_9)))))));
        }
        var_29 = ((/* implicit */int) (-(min((arr_3 [(unsigned char)10] [i_0 + 3] [i_0 + 3]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 3]))))));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 21; i_6 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) (((~(var_5))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6])))));
        var_31 = (-(((1631090585) & (((/* implicit */int) (unsigned short)9225)))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_13 [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 + 1] [i_6 + 2]))) : ((+(arr_0 [19])))));
    }
    var_33 = ((/* implicit */short) (+(var_8)));
    var_34 = ((/* implicit */unsigned char) (+(2123721139758057258ULL)));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    for (int i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            {
                                arr_39 [i_10] [i_8] [i_8] [i_10] [i_11] [i_11] [i_11] = ((/* implicit */signed char) 2147483647);
                                arr_40 [i_11] [i_10] [(signed char)2] [i_10] [i_7] = ((((((/* implicit */_Bool) arr_14 [i_8 - 1] [i_9] [i_9 + 2])) ? (7890909864380440387LL) : (var_8))) & (((/* implicit */long long int) ((unsigned int) arr_13 [i_8 - 1] [i_8] [i_9 + 2]))));
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)20890)) ? (((/* implicit */int) ((((int) (unsigned short)22856)) >= (((/* implicit */int) (unsigned short)56312))))) : ((+(((((/* implicit */int) arr_5 [i_7] [i_8 - 1] [(unsigned short)12] [i_10 + 2])) & (((/* implicit */int) arr_31 [(_Bool)1] [i_10] [i_9 - 1] [i_8]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
                            {
                                arr_50 [5U] [1LL] [i_8] [i_12] [i_13] [10U] = ((/* implicit */short) (((((-(arr_27 [i_13]))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_7] [i_13] [(_Bool)1] [i_13] [(signed char)5]))))))) ? (max(((-(7890909864380440387LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8)) || (((/* implicit */_Bool) 14905866792367390803ULL))))))) : (((/* implicit */long long int) var_3))));
                                var_36 = ((/* implicit */unsigned long long int) -7890909864380440403LL);
                                var_37 = ((/* implicit */unsigned long long int) ((var_17) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)9223))))))))));
                                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) 7)) != (4529988702652453798LL)))), ((unsigned char)178))))));
                            }
                            for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                            {
                                arr_53 [i_7] [i_7] [i_7] [i_7] [i_7] [i_12] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_15])) | (((/* implicit */int) arr_6 [i_7])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(2147483647)))) != (arr_26 [i_7] [i_12]))))));
                                var_39 = ((/* implicit */unsigned int) min((var_39), (var_5)));
                                arr_54 [i_7] [i_7] [i_12] [i_13] [i_13] = min((((short) (((_Bool)1) || ((_Bool)0)))), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_15]), (((/* implicit */signed char) arr_44 [i_15] [i_12]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4701953094487483887LL)) ? (4529988702652453798LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_12] [i_13] [i_12]))))))))));
                                arr_55 [(unsigned char)9] [i_12] [(unsigned char)9] [5U] = ((/* implicit */unsigned char) -8);
                                arr_56 [(short)7] [i_12] [(short)7] [(_Bool)1] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19596)))))))) ? (arr_0 [i_12]) : (var_17)));
                            }
                            var_40 = ((/* implicit */long long int) arr_51 [(short)7] [i_8] [(unsigned char)12] [i_12 - 2] [i_13] [i_13]);
                            var_41 = ((/* implicit */int) ((min((((/* implicit */long long int) var_12)), (-4529988702652453798LL))) & (((/* implicit */long long int) (+(4063326277U))))));
                            var_42 = (+(((((/* implicit */int) ((((/* implicit */_Bool) (short)-20890)) || ((_Bool)1)))) & (-2147483638))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    arr_59 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_7])), (((int) ((12254554636504154365ULL) | (arr_26 [i_16] [i_8 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        for (signed char i_18 = 2; i_18 < 12; i_18 += 4) 
                        {
                            {
                                var_43 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -8))))), (((4529988702652453798LL) & (arr_16 [i_17] [i_16])))))) ? (((/* implicit */int) (((-(arr_52 [(unsigned char)0] [3LL] [i_16]))) != (arr_28 [i_7])))) : (((int) ((((/* implicit */_Bool) 2703322224477858437LL)) || (((/* implicit */_Bool) (short)20890)))))));
                                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))) : (4529988702652453792LL)))))) ? (min((((/* implicit */unsigned long long int) 2199023239168LL)), (17726622393205292294ULL))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_14)))), (((/* implicit */int) max((var_9), (((/* implicit */signed char) var_16))))))))));
                                arr_65 [0ULL] [i_17] [i_16] [(unsigned short)10] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) -4529988702652453799LL)) || (((/* implicit */_Bool) (+(4529988702652453792LL))))));
                                var_45 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65517), (arr_49 [i_18 + 1] [i_7] [i_7]))))) & (max((12254554636504154335ULL), (((/* implicit */unsigned long long int) arr_34 [2] [i_7] [i_16] [i_8 + 2]))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 14; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) arr_13 [15LL] [i_8 + 1] [(short)11]))));
                            var_47 = ((/* implicit */unsigned short) arr_27 [i_7]);
                            arr_72 [(unsigned char)7] [(unsigned char)7] [i_20] [(unsigned short)8] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((var_17) >= (var_17)))))))));
                            var_48 = ((/* implicit */unsigned char) 13556883517590657569ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
