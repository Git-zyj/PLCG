/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156305
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_19 -= ((/* implicit */unsigned long long int) (-(max((((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_1])))), (((/* implicit */int) max(((unsigned char)118), ((unsigned char)192))))))));
            arr_6 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        }
        var_20 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) var_3))), (((arr_5 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_0] = ((unsigned long long int) ((unsigned short) ((var_14) >> (((((/* implicit */int) (unsigned char)118)) - (116))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1284304424334780377ULL)) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((+(var_18))))), (((/* implicit */unsigned long long int) ((((long long int) (unsigned short)56635)) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
                var_22 -= ((/* implicit */long long int) ((unsigned short) ((unsigned short) (unsigned char)255)));
            }
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_23 -= ((/* implicit */unsigned char) max((((unsigned short) (unsigned short)56648)), ((unsigned short)56635)));
                arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_16 [i_0])))) ? (((1284304424334780362ULL) / (max((((/* implicit */unsigned long long int) (unsigned short)35604)), (arr_10 [i_0] [i_0] [i_4]))))) : (7694398958642412715ULL)));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_22 [10ULL] [(unsigned short)2] [i_4] [i_5] [2ULL] [i_2] [i_4] &= ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned short)21932))))), (arr_19 [i_0] [i_2] [i_5] [i_5]))) + (var_7));
                            var_24 -= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : (2464676817972180347LL)))) ? (((/* implicit */int) ((unsigned char) (signed char)-50))) : (((((/* implicit */int) (signed char)63)) | (((/* implicit */int) arr_7 [i_2] [i_4] [i_6]))))))), (((((/* implicit */_Bool) max(((unsigned short)36747), ((unsigned short)18140)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-57))))) : (min((5387590190970257791ULL), (575661351822560961ULL))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(var_17))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) var_12);
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            var_27 += ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned short)56642), (((/* implicit */unsigned short) (signed char)56)))))));
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9094004159363295752LL)) ? (((/* implicit */int) (unsigned short)64645)) : (((/* implicit */int) var_8))))))))));
                            var_29 = var_5;
                        }
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            arr_33 [7ULL] [(unsigned char)10] [i_0] [(unsigned char)10] [i_10] = ((/* implicit */signed char) ((unsigned short) var_17));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((536870784ULL), (((/* implicit */unsigned long long int) (unsigned short)11939)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)38408)) : (((/* implicit */int) var_12)))))))) ? ((((~(((/* implicit */int) (unsigned short)18135)))) | (((/* implicit */int) var_9)))) : (((/* implicit */int) var_10))));
                            var_31 ^= ((/* implicit */signed char) min((((min((var_17), (((/* implicit */unsigned long long int) (unsigned short)47395)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_2)))))))), (((/* implicit */unsigned long long int) (unsigned short)8916))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (max((((arr_16 [i_2]) - (((arr_20 [i_0] [6LL] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 22ULL))) | (((/* implicit */int) (unsigned short)18166)))))))));
                        }
                    }
                } 
            } 
            var_33 = ((unsigned long long int) 8748539419894945850ULL);
        }
        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
        {
            arr_36 [i_11] [i_0] [i_0] = ((unsigned long long int) max((max((arr_20 [i_0] [(unsigned short)8] [i_11]), (((/* implicit */unsigned long long int) (unsigned char)116)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0))))));
            arr_37 [i_0] [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0]));
            var_34 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)14)) || (((/* implicit */_Bool) (unsigned char)5))))), (((27021597764222976LL) >> (((18446744073172680831ULL) - (18446744073172680806ULL)))))));
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
        {
            arr_42 [i_0] = ((/* implicit */unsigned char) ((max((max((15418479839970055183ULL), (((/* implicit */unsigned long long int) (unsigned short)15164)))), (max((var_14), (var_17))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-34)), (var_10)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10800))) <= (arr_32 [i_0] [i_12] [i_0] [9ULL] [9ULL] [i_12] [i_0])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))));
            var_35 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 9218868437227405312ULL))) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 288230376147517440ULL))))))));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((signed char) arr_5 [(unsigned char)2])), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (arr_19 [i_0] [i_0] [i_12] [i_12]))))))), ((-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_4)))))))))));
        }
        arr_43 [0ULL] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_4))))) ? (min((min((((/* implicit */unsigned long long int) var_8)), (var_6))), (((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) arr_18 [i_0]))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                {
                    var_37 = ((unsigned short) ((30064771072LL) / (33776997205278720LL)));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) (unsigned char)225)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))))))))) ^ (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)11)), (-1LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3145728ULL)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) : (var_7)))))));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_48 [(unsigned short)7] [i_13])) <= (((/* implicit */int) (signed char)-11)))) && (((/* implicit */_Bool) arr_50 [(unsigned char)0] [(unsigned short)4] [(unsigned short)4])))))) < (((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_11))))) | (arr_49 [i_14] [i_15] [i_15])))));
                    var_40 = ((/* implicit */unsigned short) (signed char)-24);
                    arr_52 [i_13] = ((/* implicit */long long int) (signed char)61);
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57939)) == (((/* implicit */int) (unsigned short)8188))))), (-9223372036854775804LL)))));
        var_42 = ((/* implicit */unsigned short) var_6);
    }
    var_43 -= ((/* implicit */unsigned short) var_1);
    var_44 -= var_7;
    var_45 = ((/* implicit */unsigned short) max((var_7), (max((var_1), (((/* implicit */unsigned long long int) var_5))))));
}
