/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138576
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
    var_19 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 526306449453279849ULL))))), (min((((/* implicit */unsigned short) (signed char)-104)), ((unsigned short)16128)))))), (max((((/* implicit */unsigned int) (unsigned char)255)), (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_14 [0U] [(unsigned char)14] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((_Bool) var_4)) ? (6164932937563761230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75)))));
                            arr_15 [(_Bool)1] [3U] [(signed char)0] [i_3] [(unsigned char)8] [(signed char)6] = ((/* implicit */unsigned char) arr_1 [i_1]);
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (signed char)-103)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (max((((((/* implicit */_Bool) 4559100100262028309ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))), (((/* implicit */unsigned int) ((var_5) && (((/* implicit */_Bool) 9285475749027779832ULL))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)7168)) <= (((/* implicit */int) var_7))))))));
                            arr_18 [i_2] |= ((/* implicit */signed char) min((((/* implicit */unsigned char) min((arr_12 [i_0] [14U] [i_1] [i_2] [i_3] [(_Bool)1]), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-98)) == (((/* implicit */int) arr_7 [(signed char)14] [i_1] [9ULL] [(unsigned short)10] [i_5])))))))), (var_7)));
                            var_22 = ((((/* implicit */int) arr_7 [i_5] [i_3] [i_2] [i_1] [i_0])) >= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_2] [i_2]))))));
                            arr_19 [i_0] [i_2] [2U] [(unsigned char)13] [4U] [11ULL] [i_5] = ((/* implicit */unsigned char) arr_8 [(unsigned short)15] [1U]);
                        }
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            arr_22 [(signed char)3] [i_1] [(unsigned char)7] [i_1] [i_1] [i_1] [14ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) ((arr_17 [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)8190), (((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [0ULL] [i_6] [(signed char)7]))))))))))))));
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)87)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) 6682138338560814247ULL);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2909181626U)) ? (((/* implicit */unsigned long long int) 3915587420U)) : (arr_8 [i_2] [i_7]))))));
                            arr_26 [i_0] [i_1] [15ULL] [(unsigned short)14] [i_7] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) arr_2 [(unsigned char)15] [(signed char)0]);
                            var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 166521789U)) ? (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)14511))))))) ? (max((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7]))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) / (((/* implicit */int) arr_7 [i_7] [i_3] [i_2] [i_1] [(unsigned char)10])))))));
                        }
                        arr_27 [15U] [i_1] [2U] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4128445506U)) ? (((/* implicit */unsigned long long int) ((((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1])) >= (((/* implicit */int) arr_21 [(signed char)11] [i_1] [i_2] [i_3] [i_2] [i_0]))))) : (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)42))))))) : (max((((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [i_1] [i_2] [i_3] [i_3])), (var_0)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_28 |= ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (15792200740237664752ULL))) * (max((4602678819172646912ULL), (4034846151445627645ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)97)), ((unsigned char)255)))), (arr_20 [(_Bool)1] [(unsigned char)1] [(unsigned short)0] [14U] [i_8] [i_1] [(unsigned char)14])))))));
                            arr_31 [i_0] [i_1] [i_2] [1U] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(var_6))) ? (max((4128445506U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_18), (((/* implicit */unsigned short) var_1))))))))) ? (((((/* implicit */_Bool) ((arr_24 [(unsigned short)13] [i_1] [(_Bool)1] [i_2] [i_3] [i_8]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78)))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (!(var_13)))))))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)16))));
                        }
                        arr_32 [(unsigned short)4] [(_Bool)1] [i_0] [(_Bool)1] [i_2] [i_3] &= ((/* implicit */_Bool) min((min((arr_16 [i_0] [i_0] [i_2] [i_1] [6U] [(unsigned char)12] [i_3]), (min((var_16), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) var_2))));
                        arr_33 [14U] [(_Bool)1] [(signed char)1] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_3] [i_2] [11U] [(unsigned char)3])), (((((/* implicit */int) arr_9 [i_0] [10ULL] [(signed char)15] [i_3])) * (((/* implicit */int) var_13))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_38 [i_9] [(signed char)1] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)8179));
            arr_39 [i_9] = ((/* implicit */unsigned int) arr_35 [i_0] [(unsigned char)9] [i_9]);
        }
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            arr_42 [6ULL] [i_10] = ((/* implicit */unsigned char) var_3);
            var_30 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_10)), (arr_1 [i_0]))), (min((arr_1 [i_10]), (((/* implicit */unsigned int) var_2))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-98))))))) | (min((((/* implicit */unsigned long long int) (signed char)91)), (13844065254536904705ULL)))));
                var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (max((var_0), (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))));
                arr_45 [i_10] = ((((/* implicit */_Bool) (-((+(arr_16 [(_Bool)1] [i_10] [i_10] [(unsigned short)8] [(_Bool)1] [i_10] [2U])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_10] [i_11]))))) : ((-(((var_1) ? (2813812307U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_10] [(_Bool)1]))))))));
                arr_46 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_17 [i_10])))) ? (((/* implicit */int) ((_Bool) arr_20 [i_0] [i_0] [(_Bool)1] [(unsigned char)5] [i_0] [i_0] [i_0]))) : ((((+(((/* implicit */int) (unsigned short)65535)))) * (((/* implicit */int) var_12))))));
            }
        }
        var_33 = ((/* implicit */unsigned char) (~(((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0])))))));
        arr_47 [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_12)))), ((-(((/* implicit */int) (_Bool)0))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_50 [i_12] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned char) arr_11 [i_12] [i_12])), (arr_36 [(unsigned char)10] [i_12] [i_12]))));
        arr_51 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3916791087053457300ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) >= (((((/* implicit */_Bool) (signed char)30)) ? (4128445510U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */int) (unsigned short)57345))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_54 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (10511318345418467044ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_16))))));
        arr_55 [i_13] [12ULL] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((1481154982U), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (((var_17) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_52 [i_13])))))));
    }
    var_34 = ((/* implicit */unsigned int) ((var_11) && (((/* implicit */_Bool) ((min((1193366675U), (((/* implicit */unsigned int) var_8)))) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (var_11))))))))));
}
