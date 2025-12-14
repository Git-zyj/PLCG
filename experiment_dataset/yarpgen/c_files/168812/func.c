/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168812
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) min((((var_4) % (var_10))), (((/* implicit */long long int) ((unsigned short) (_Bool)1))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (max((1354118900), (1354118900))))) ^ ((-(((/* implicit */int) arr_1 [(unsigned short)9]))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0])) : (((((/* implicit */int) (_Bool)1)) >> (((arr_2 [i_0]) - (1474963847U)))))))) ? ((-(((((/* implicit */_Bool) 1354118926)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_1 [i_0 - 1])))))) : (((/* implicit */int) var_9)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1354118901)) ? (-1354118900) : (((int) 822056343))));
                        var_22 = (!((_Bool)0));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (((((_Bool)1) ? (17749425468260158866ULL) : (((/* implicit */unsigned long long int) 1354118918)))) & (((/* implicit */unsigned long long int) arr_9 [(unsigned char)2] [i_5] [(unsigned char)2]))));
                        var_24 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_5 - 1])) <= (((/* implicit */int) arr_1 [i_5 - 1])))) ? ((+(((/* implicit */int) arr_1 [i_5 - 1])))) : (max((arr_13 [i_4 - 1]), (-1039590163)))));
                    }
                } 
            } 
        } 
        arr_22 [(signed char)8] &= ((/* implicit */_Bool) arr_10 [i_4] [i_4]);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 4) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) arr_20 [i_4 - 1] [i_8 + 1] [i_9] [i_8])) / (((/* implicit */int) var_6))))))), (min((((/* implicit */long long int) max((((/* implicit */short) var_12)), ((short)-31873)))), (((((/* implicit */long long int) -1354118950)) / (var_10))))))))));
                    var_27 = ((/* implicit */unsigned char) arr_7 [i_4]);
                    var_28 = ((/* implicit */unsigned short) (!(((_Bool) max((-2LL), (((/* implicit */long long int) arr_24 [i_4] [i_4])))))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_26 [i_4] [21ULL] [i_4 - 1] [i_9 - 1])) / (((unsigned long long int) arr_2 [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -852861943)) ? (((/* implicit */int) ((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4])))))) : (((/* implicit */int) ((_Bool) arr_9 [i_9] [i_8] [(unsigned short)13])))))) : ((-((+(arr_9 [i_4 - 1] [i_8] [i_4 - 1])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_29 [i_10] [6]))))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) ((unsigned char) arr_15 [i_10] [(_Bool)1]));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_10] [i_11] [i_12 + 1] [i_13] [i_12 + 1] [i_13])) ? (((/* implicit */int) arr_18 [22ULL] [i_12 + 1] [i_12 - 1] [i_12 - 1])) : ((+(33554431)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        var_33 = (+((-(arr_2 [(_Bool)1]))));
                        arr_42 [i_10] [0LL] [2U] [i_10] = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_12 + 1] [i_12] [i_12 - 2]));
                        var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_13] [(unsigned char)12] [(signed char)21])) || (((/* implicit */_Bool) var_10)))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0))))));
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_12 - 1] [i_11] [i_12] [i_11] [(unsigned char)11] [i_13] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_21 [i_10] [i_12 - 3] [i_13] [i_13] [(unsigned char)21] [i_13]))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_36 = ((((/* implicit */_Bool) 1043422367)) ? (((/* implicit */int) (_Bool)1)) : (33554431));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) var_0))));
                    }
                    var_38 = ((/* implicit */int) ((var_8) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))))));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) var_11))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (-822056343) : (((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */int) ((((/* implicit */int) (short)31873)) <= (((/* implicit */int) (_Bool)1))));
                        var_42 = (+(arr_16 [i_12 - 3]));
                        var_43 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(signed char)6] [0U] [i_16] [i_17]))) ^ (((var_15) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        var_44 ^= ((/* implicit */unsigned char) ((((long long int) arr_20 [i_17] [i_12] [i_11] [i_10])) > (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_16] [i_11])))))));
                    }
                    var_45 = ((/* implicit */unsigned char) var_0);
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    var_46 = ((/* implicit */_Bool) (signed char)-86);
                    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (~(var_15))))));
                    arr_56 [i_10] [0] [11] [i_18 + 1] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) var_2))));
                }
                arr_57 [i_10] [0] = ((/* implicit */unsigned long long int) arr_9 [i_10] [i_12 - 1] [(unsigned char)1]);
                var_48 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
                var_49 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_10] [i_11] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_33 [i_10] [i_11] [i_12 - 2])));
            }
            for (int i_19 = 0; i_19 < 13; i_19 += 1) 
            {
                var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_1 [i_19])) - (216)))));
                arr_60 [(unsigned short)3] [i_10] [(_Bool)1] [7] = ((/* implicit */signed char) arr_29 [i_10] [i_10]);
                var_51 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967295U)) ? (4478620320686714586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_19] [i_19]))))) > (((/* implicit */unsigned long long int) ((-129000511) * (((/* implicit */int) (_Bool)1)))))));
            }
        }
        arr_61 [i_10] = ((/* implicit */int) 3381194078204468239ULL);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 11; i_20 += 1) 
    {
        var_52 = ((1354118883) > (((/* implicit */int) (_Bool)0)));
        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [(_Bool)1] [i_20] [i_20])) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_11 [(unsigned short)6]))) : (((/* implicit */unsigned int) 0)))))));
    }
}
