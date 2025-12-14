/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153035
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
    var_14 = ((int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [17] [i_0] = ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [i_0]));
        var_15 = ((/* implicit */unsigned short) 503316480);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 503316480)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((unsigned long long int) arr_2 [i_0]))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) min((arr_3 [i_1]), (((/* implicit */int) (short)13065))))), (-1788432095515438667LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((503316484), (((/* implicit */int) arr_7 [i_1] [i_1])))))))))));
        var_18 = min((var_0), (((/* implicit */int) (short)4012)));
        arr_8 [i_1] = ((/* implicit */short) min(((+(arr_2 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((15049567402329789735ULL) | (((/* implicit */unsigned long long int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (unsigned short)6)))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_13 [i_2] [i_2] = (-(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (155906328U))))));
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [i_1]))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_18 [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))))) ? (min((10256983559325806193ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_3]))))))) : (((/* implicit */unsigned long long int) var_9))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_20 *= arr_21 [i_3] [i_4];
            arr_23 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)17] [i_3])) ? (min((var_8), (((/* implicit */long long int) (unsigned short)40815)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_9 [i_3]))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((arr_21 [i_3] [i_3]), (((/* implicit */short) arr_0 [i_4]))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (-569120548) : (arr_17 [i_4])))), (min((((/* implicit */long long int) arr_9 [i_3])), (var_8)))))));
            var_21 = (+(min((var_6), (((/* implicit */int) arr_21 [i_3] [i_4])))));
            arr_24 [i_4] [4] [i_3] = ((/* implicit */short) 8189760514383745452ULL);
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            arr_27 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_14 [i_3]))))), (((((/* implicit */_Bool) 8189760514383745464ULL)) ? (((/* implicit */int) (short)-4132)) : (arr_17 [i_5])))))), ((((((_Bool)0) ? (8189760514383745423ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23142))))) >> (((/* implicit */int) min(((unsigned short)65529), (((/* implicit */unsigned short) arr_0 [(short)24])))))))));
            var_22 ^= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_3]))))), (min((arr_22 [i_3] [i_3] [i_5]), (arr_3 [(short)12])))));
        }
        for (int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            arr_31 [i_3] [i_3] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_13)), (arr_14 [i_6]))), (((/* implicit */unsigned long long int) 1084754431))));
            /* LoopSeq 2 */
            for (short i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                var_23 *= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_3] [1U])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10)))) < (arr_11 [i_7] [7] [i_7 + 2]))))));
                arr_34 [(short)10] [i_3] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16118))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25189))) : (arr_28 [i_3] [i_3])))) ? (((((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_9 [i_3])))) + (2147483647))) << ((((~(4206518614U))) - (88448681U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) arr_16 [i_7]))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_32 [i_3] [(short)4] [(short)4] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3]))))) : (((/* implicit */unsigned int) max((var_13), (arr_3 [(short)0])))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_4)))) - ((-(((/* implicit */int) var_12)))))))));
                var_25 = var_7;
            }
            for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    var_26 ^= ((/* implicit */unsigned short) var_7);
                    arr_39 [9U] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_3])) * (var_2)));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_3] [i_6] [i_8] [i_10])) & (((/* implicit */int) arr_43 [i_3] [i_6] [i_8] [i_8]))));
                    arr_44 [i_10] [i_3] [i_8] [i_3] = ((int) 2624924668U);
                    var_28 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -1084754405)))) || (((/* implicit */_Bool) arr_30 [i_3] [i_3]))));
                    arr_45 [(short)8] [(short)8] [i_8] [i_8] [i_10] = ((/* implicit */short) arr_40 [i_3] [i_8] [i_10]);
                }
                for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_29 = ((((/* implicit */int) min((max(((unsigned short)65531), (((/* implicit */unsigned short) (short)26363)))), (((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)29525))))))) == (((((/* implicit */_Bool) var_12)) ? (((0) >> (((((/* implicit */int) (short)29525)) - (29500))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_3])), ((unsigned short)6)))))));
                    arr_49 [i_3] [i_6] [i_11] &= ((/* implicit */unsigned short) ((arr_32 [i_11] [i_8] [(short)7] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6])))));
                    var_30 ^= ((/* implicit */int) min((((/* implicit */long long int) arr_6 [i_3] [i_6])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 105563789U)) ? (var_9) : (((/* implicit */int) arr_7 [i_8] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) != (arr_28 [i_8] [i_8]))))) : (min((arr_48 [i_3] [i_6] [i_8]), (arr_48 [i_3] [i_3] [i_3])))))));
                    arr_50 [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_3] [3LL])), (arr_5 [18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((arr_0 [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8]))) : (8189760514383745444ULL)))));
                }
                arr_51 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_22 [i_3] [i_6] [i_8])))) ? (((((/* implicit */_Bool) max((arr_6 [i_3] [i_8]), (((/* implicit */unsigned short) (short)0))))) ? (min((var_3), (var_3))) : (min((((/* implicit */long long int) (unsigned short)65535)), (arr_48 [i_8] [i_6] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                var_31 = ((/* implicit */int) min((((min((((/* implicit */long long int) arr_35 [i_3] [i_6] [i_3])), (-8596305825695241606LL))) & (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4U)))))));
            }
            arr_52 [i_3] [i_3] = (-(((/* implicit */int) ((8189760514383745418ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)9585)) != (((/* implicit */int) arr_25 [i_6] [i_3]))))))))));
            var_32 *= ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_22 [2] [i_6] [i_3])) : (8189760514383745412ULL)))))) ? (((((/* implicit */_Bool) arr_47 [i_3] [i_3] [(unsigned short)8] [i_6] [(signed char)1])) ? (((/* implicit */unsigned long long int) arr_33 [i_3] [i_3] [i_6] [i_3])) : (var_2))) : ((+(10256983559325806193ULL))));
            arr_53 [i_3] [i_3] [i_6] = ((/* implicit */_Bool) var_2);
        }
        var_33 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(short)14])) ? (((((/* implicit */_Bool) var_10)) ? (min((3177116900556963438ULL), (((/* implicit */unsigned long long int) (short)32766)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_5))))))) : (((/* implicit */unsigned long long int) max((arr_10 [i_3]), (arr_10 [i_3]))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_57 [i_12] [i_12] = ((/* implicit */signed char) arr_55 [i_12]);
        arr_58 [11LL] = ((/* implicit */int) (short)-1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            arr_62 [i_12] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (short)19661)))));
            arr_63 [8U] [i_13] [i_13] = ((/* implicit */unsigned short) (-(arr_59 [i_12] [i_12])));
            var_34 = ((/* implicit */_Bool) (-(-1152510383)));
        }
    }
    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_14])) ? (((/* implicit */int) arr_0 [i_14])) : (arr_3 [i_14])))) ? (min((((/* implicit */int) arr_64 [i_14] [i_14])), (min((arr_3 [i_14]), (var_10))))) : (((/* implicit */int) (short)19661)));
        arr_67 [i_14] = ((/* implicit */int) (-(((arr_2 [i_14]) % (arr_2 [i_14])))));
        arr_68 [(_Bool)1] [i_14] = ((/* implicit */int) (short)-1);
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_36 ^= ((/* implicit */unsigned short) ((int) min((arr_2 [i_14]), (((/* implicit */long long int) (short)-12670)))));
            var_37 *= ((/* implicit */int) 0ULL);
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 20; i_16 += 3) 
        {
            arr_74 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_66 [i_16])) / (((arr_0 [i_14]) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) arr_70 [i_14] [i_14]))))));
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                var_38 = ((/* implicit */int) (unsigned short)7);
                var_39 -= var_4;
            }
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    {
                        var_40 ^= ((/* implicit */short) arr_72 [i_14] [i_16]);
                        var_41 = ((/* implicit */unsigned long long int) arr_72 [i_14] [(unsigned short)0]);
                        var_42 = ((/* implicit */short) arr_71 [i_14] [i_14]);
                    }
                } 
            } 
        }
        arr_82 [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_14])))))));
    }
}
