/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148205
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) 13675766458674099751ULL);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_18 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((1249310633U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1412)))))), (min((13675766458674099751ULL), (((/* implicit */unsigned long long int) 1057146825)))))), (((/* implicit */unsigned long long int) min((arr_2 [i_0 - 2] [i_0 + 1] [(short)16]), ((unsigned short)65535))))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */long long int) (-(min((((/* implicit */int) (unsigned short)64123)), (-1057146825)))))), (197848424519399036LL))))));
            var_20 += ((/* implicit */_Bool) -17LL);
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((max(((+(21LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)49181)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) (_Bool)1))));
                            arr_14 [i_0] [i_0] [9U] [i_0] [(_Bool)1] = ((/* implicit */int) arr_2 [16] [i_2 + 1] [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
            {
                var_22 |= ((/* implicit */int) 13675766458674099750ULL);
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-26345))));
                    arr_19 [i_0] [i_6] [i_5] [i_6] = ((/* implicit */signed char) 6899338663148663556LL);
                }
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) (~(arr_9 [(short)5] [(short)5] [i_5] [i_7])));
                        var_25 = ((/* implicit */_Bool) ((min((min((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_8])), (4093296505U))), (((/* implicit */unsigned int) (_Bool)1)))) >> (((max((4770977615035451859ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [(signed char)16] [i_1] [(signed char)16] [i_7] [(signed char)16])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))))) - (4770977615035451847ULL)))));
                        var_26 ^= ((/* implicit */signed char) (_Bool)1);
                    }
                    for (short i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (unsigned short)16339))));
                        var_28 = ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)117)))) < (((/* implicit */int) ((unsigned short) 197848424519399036LL)))))), ((signed char)114)));
                        var_29 = ((((/* implicit */long long int) ((((/* implicit */int) max((arr_2 [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)1))))) >> (((min((arr_4 [i_0] [i_1] [i_1] [i_7]), (((/* implicit */unsigned long long int) 4294967295U)))) - (4294967265ULL)))))) | ((((+(197848424519399036LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)10)) > (((/* implicit */int) var_15)))))))));
                    }
                    arr_29 [i_0] [i_1] [i_7] = 197848424519399036LL;
                    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0 - 1] [i_0]))));
                }
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */int) 2183391530U);
                        var_32 = ((/* implicit */unsigned int) arr_35 [i_11] [i_10]);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_33 ^= ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) min((2183391525U), (((/* implicit */unsigned int) (unsigned short)65535))))), (((((/* implicit */_Bool) 713019111U)) ? (9066216321690294345LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [6ULL]))))))));
                        var_34 = ((/* implicit */_Bool) (signed char)-30);
                        var_35 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 4143772043U)) : (4770977615035451864ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-118)))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 14; i_13 += 4) 
                    {
                        arr_41 [i_0] [i_1] [(signed char)7] [i_10] [i_13] [i_0 - 2] = ((/* implicit */short) ((arr_1 [(short)3] [i_10]) << (((7074981051074726130LL) - (7074981051074726124LL)))));
                        arr_42 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)28);
                        arr_43 [13ULL] [i_1] [i_5] [i_10] [i_13] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_0 + 1] [10U] [i_0 - 1] [i_0])) : (arr_11 [i_1])));
                        arr_44 [(_Bool)1] [i_1] [i_5] [i_5] [i_10] [4LL] [i_1] = max((max((((/* implicit */unsigned long long int) arr_10 [i_13] [9ULL] [i_13 - 2] [i_13 + 3] [i_13 - 2])), (((13675766458674099741ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10] [i_1] [i_10]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((13675766458674099722ULL), (4770977615035451851ULL)))) ? (-17LL) : (6261386834594628265LL)))));
                        var_36 = 0ULL;
                    }
                    var_37 = ((/* implicit */unsigned int) (signed char)-117);
                    arr_45 [0U] [i_1] = ((/* implicit */unsigned int) (short)21774);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_48 [i_0] [i_0] [i_1] [(signed char)4] [i_14] = ((/* implicit */short) max((((/* implicit */long long int) max((arr_46 [i_0] [i_1] [i_5] [i_14] [i_5] [i_0 - 2]), (max(((signed char)-11), (((/* implicit */signed char) (_Bool)1))))))), ((+(-5526251250232751985LL)))));
                    var_38 = (_Bool)1;
                    arr_49 [i_0] [i_1] [i_1] [i_14] [i_5] [i_0] = ((/* implicit */unsigned short) ((short) arr_36 [10U] [10U] [i_1] [i_5] [12LL]));
                }
            }
            for (short i_15 = 0; i_15 < 17; i_15 += 4) /* same iter space */
            {
                arr_53 [i_1] [i_1] [5LL] = ((/* implicit */signed char) 3514682623U);
                arr_54 [i_15] [i_15] [i_15] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8082)) ? ((-9223372036854775807LL - 1LL)) : (-17LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -8637973062864277531LL)) ? (((/* implicit */long long int) arr_11 [i_0 - 2])) : (-5526251250232751985LL)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (4241254275768094606LL)))) && (((/* implicit */_Bool) (unsigned char)211))))));
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    for (unsigned short i_17 = 1; i_17 < 15; i_17 += 4) 
                    {
                        {
                            arr_61 [i_0] [i_0 + 1] [(signed char)16] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 5526251250232751984LL)), (713430070012035536ULL)));
                            var_39 += ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned long long int) min((max((-7023694141461047357LL), (arr_10 [i_15] [i_15] [i_15] [i_0] [i_0]))), (-8637973062864277531LL)));
                arr_62 [i_0] [i_0] [0LL] = ((/* implicit */unsigned long long int) (signed char)-46);
            }
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51705)) <= (((/* implicit */int) (unsigned short)10007))))), (((((((/* implicit */_Bool) 702515955291259676LL)) || (((/* implicit */_Bool) -8637973062864277540LL)))) ? (max((((/* implicit */unsigned long long int) 16777215U)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22)))))));
            arr_66 [i_0 + 1] = ((/* implicit */short) max((16068826993435376296ULL), (((/* implicit */unsigned long long int) min(((unsigned short)48881), (((/* implicit */unsigned short) (_Bool)1)))))));
        }
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 17; i_19 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */signed char) (unsigned short)51646);
            var_43 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-16))))) == (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13831))) : (7718280844733140193LL)))));
            arr_70 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1])) && (((/* implicit */_Bool) (unsigned short)51646))));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32755))) : (7718280844733140166LL)));
            arr_71 [12LL] [12LL] &= ((/* implicit */unsigned short) (+(var_10)));
        }
    }
    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) var_9))));
}
