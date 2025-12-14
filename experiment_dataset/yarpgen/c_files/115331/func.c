/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115331
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * ((~((~(var_6)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_5);
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (472032675)))) ? (max((((/* implicit */unsigned int) var_15)), (var_6))) : (arr_1 [i_0] [i_0]))) > (((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) / (((/* implicit */int) var_11)))) * (((/* implicit */int) var_7)))))));
        var_19 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (long long int i_1 = 4; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) var_12);
        arr_8 [i_1 - 3] [i_1] = ((/* implicit */signed char) ((unsigned char) (-(((((/* implicit */_Bool) 18407993674771805591ULL)) ? (((/* implicit */int) (signed char)-9)) : (472032699))))));
    }
    for (long long int i_2 = 4; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) 38750398937746025ULL);
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_2])))) : (((18407993674771805591ULL) % (38750398937746048ULL)))))) ? (min((((((/* implicit */_Bool) arr_9 [(unsigned short)12])) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_6 [i_2])))), (arr_4 [i_2 - 4]))) : (arr_4 [(_Bool)1])));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -472032675)) && (((/* implicit */_Bool) -472032675)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) 11106764193534959965ULL)) && (((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : ((~(-7365605881991261626LL)))));
        var_22 = ((/* implicit */signed char) (-(((arr_4 [i_2 - 4]) + (arr_4 [i_2 + 2])))));
    }
    for (long long int i_3 = 4; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) var_0);
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_27 [i_3 + 2] [i_3 - 1] [(unsigned char)23] [i_3 - 3] [i_3] = ((/* implicit */long long int) ((arr_16 [i_3 + 1]) ? (((arr_16 [i_3 + 2]) ? (((/* implicit */int) arr_10 [i_3 + 2] [i_4])) : (((/* implicit */int) arr_16 [i_3 - 3])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_3 + 2])) : (((/* implicit */int) arr_18 [i_3 + 2]))))));
                                arr_28 [i_3] [i_4] = ((/* implicit */_Bool) (~(((arr_4 [i_3]) / (((/* implicit */unsigned long long int) arr_19 [i_3]))))));
                                arr_29 [i_3] [i_4] [i_4] [i_3] [(unsigned char)12] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */int) arr_16 [i_3 + 1])), (((((/* implicit */_Bool) arr_21 [i_7] [i_5] [i_4] [i_3])) ? (472032696) : (-472032662))))));
                                var_23 = ((/* implicit */_Bool) arr_5 [i_3] [i_3]);
                                arr_30 [i_3] [(_Bool)1] [i_4] [i_4] [i_4] [i_3] [i_7] = (!(((/* implicit */_Bool) (-(arr_23 [i_3 - 4] [i_3] [22ULL] [22ULL] [i_3] [i_3 - 3])))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((2107864249U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_25 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 214807109451919077LL)) : (18407993674771805586ULL)))) ? ((-(arr_25 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) arr_23 [12LL] [i_3] [i_3 - 1] [i_3] [(signed char)2] [i_3 - 2]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_27 = -8728965370825270714LL;
            var_28 = ((/* implicit */_Bool) (+(arr_13 [i_8] [i_3 - 1])));
        }
        for (unsigned char i_9 = 1; i_9 < 23; i_9 += 4) /* same iter space */
        {
            arr_37 [i_3] [i_3] = ((/* implicit */long long int) arr_23 [i_3] [i_3] [i_3 - 2] [i_3] [i_3 - 4] [i_9 + 1]);
            var_29 = ((/* implicit */long long int) max((((/* implicit */int) var_9)), ((-(-472032698)))));
        }
        for (unsigned char i_10 = 1; i_10 < 23; i_10 += 4) /* same iter space */
        {
            var_30 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_12 [i_3 - 4] [i_10 + 1])), (min((18407993674771805591ULL), (((/* implicit */unsigned long long int) 472032697))))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(4278128386U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 472032699)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) / (((/* implicit */int) arr_40 [i_3] [i_10] [i_3])))))))) : ((-(((/* implicit */int) min((arr_9 [7ULL]), (((/* implicit */unsigned char) arr_35 [(unsigned char)9] [i_10] [(_Bool)1])))))))));
        }
        for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 4) 
        {
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_17))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) arr_10 [i_3 - 3] [i_3 - 3])))));
            var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_15 [i_3 + 2] [(unsigned char)0] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) arr_15 [i_3 - 3] [i_11] [i_11 + 1])) : (arr_25 [i_3] [i_3 - 2]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) ((signed char) arr_6 [2]));
                arr_45 [i_3] [i_11] [i_11] [i_3] = ((/* implicit */unsigned char) -472032694);
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_9))));
            }
            for (short i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_54 [i_3] [i_11] [i_3] [(unsigned char)4] [i_15] = ((/* implicit */unsigned long long int) var_3);
                            var_36 = ((/* implicit */_Bool) (+(var_14)));
                            arr_55 [i_15] [i_3] [i_3] [i_3] [i_11 - 1] [(signed char)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                arr_56 [i_3] [i_3] [(unsigned char)19] [i_13] = ((/* implicit */long long int) (+(((unsigned long long int) var_7))));
            }
        }
    }
    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))));
}
