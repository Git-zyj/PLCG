/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187908
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [14] [14])) / (var_13))))) + (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned char) min((((long long int) arr_1 [i_0])), (((/* implicit */long long int) ((signed char) arr_2 [i_0])))));
    }
    var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) (+(((/* implicit */int) var_6)))))), (min((((/* implicit */unsigned int) var_8)), (var_2)))));
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_22 = ((/* implicit */signed char) (+(min((max((8487195051829505145LL), (((/* implicit */long long int) (short)-32533)))), (((/* implicit */long long int) 502450513U))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) max((-8487195051829505146LL), (8487195051829505150LL)))))))));
        var_24 ^= ((/* implicit */unsigned short) ((max((max((((/* implicit */int) var_8)), (var_14))), (((/* implicit */int) (short)-32747)))) >= (((/* implicit */int) ((_Bool) (+(arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_25 ^= ((/* implicit */unsigned int) ((short) arr_4 [i_2] [i_2]));
        arr_7 [i_2] = ((/* implicit */_Bool) (~(var_2)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_12 [(_Bool)1] [i_3] = ((/* implicit */signed char) max((3792516782U), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_1 [i_3])))))))));
        var_26 ^= ((/* implicit */short) arr_5 [i_3] [5]);
        arr_13 [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((502450522U), (((/* implicit */unsigned int) (unsigned char)63))))), (((unsigned long long int) arr_3 [i_3])))), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)59)), ((short)-1924)))) ? (max((((/* implicit */unsigned long long int) 1253601908U)), (var_4))) : (((/* implicit */unsigned long long int) max((1412615111U), (((/* implicit */unsigned int) (short)-4734)))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 4; i_5 < 9; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_27 = arr_16 [i_4];
                            arr_27 [i_8] [i_4] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((long long int) var_1))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_5 + 3] [i_5]))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_9])) ? (((((/* implicit */unsigned int) var_13)) ^ (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
            var_30 = ((/* implicit */unsigned char) ((unsigned int) (+(var_1))));
            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)116))));
            arr_30 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) var_5)))));
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_41 [i_12] [i_4] [(short)3] [i_4] [i_4] = ((/* implicit */unsigned short) (signed char)109);
                            var_32 = ((/* implicit */int) ((unsigned long long int) var_12));
                        }
                    } 
                } 
                var_33 = (!(((/* implicit */_Bool) ((int) var_6))));
            }
            for (short i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 9; i_14 += 4) 
                {
                    for (short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        {
                            arr_48 [i_4] [8U] [i_9] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14] [i_4])) && (((/* implicit */_Bool) arr_24 [i_4]))));
                            var_34 = ((/* implicit */int) max((var_34), ((+(((/* implicit */int) (short)31025))))));
                            var_35 = ((/* implicit */unsigned short) ((arr_4 [i_14 + 3] [i_14 + 3]) & (arr_4 [i_14 - 1] [i_15])));
                        }
                    } 
                } 
                var_36 ^= ((((((/* implicit */_Bool) arr_22 [i_9] [i_9] [(short)2] [i_9])) && (((/* implicit */_Bool) 0)))) ? (arr_4 [i_4] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1253601893U)) && (((/* implicit */_Bool) arr_33 [i_4])))))));
            }
            for (short i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
            {
                var_37 ^= ((/* implicit */long long int) ((short) arr_38 [i_16] [i_9] [i_16] [9] [i_4] [i_16] [i_9]));
                var_38 = ((/* implicit */unsigned short) ((signed char) arr_45 [i_4] [i_9] [i_4]));
            }
        }
        var_39 += ((/* implicit */short) var_12);
    }
    for (signed char i_17 = 1; i_17 < 17; i_17 += 3) 
    {
        arr_55 [i_17 + 2] = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) 3041365397U))));
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            for (short i_19 = 1; i_19 < 16; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    {
                        arr_65 [(short)14] [(short)6] [i_19 + 3] [i_18] [i_19 + 1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) ((var_15) - (16777215))))), (max((max((var_11), (((/* implicit */unsigned int) arr_2 [(signed char)0])))), (((/* implicit */unsigned int) min((arr_2 [i_17 + 2]), (var_5))))))));
                        arr_66 [i_17 + 2] [i_18] [i_17 + 2] [i_20] [i_18] = min((max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (arr_52 [i_18]))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) arr_62 [i_18] [i_18]))))))), (max((min((((/* implicit */unsigned long long int) (signed char)100)), (arr_4 [i_17] [i_18]))), (((/* implicit */unsigned long long int) arr_62 [i_17] [i_18])))));
                        var_40 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_54 [12U] [i_17 - 1])) ? (((/* implicit */unsigned int) arr_54 [i_17 + 2] [i_19 - 1])) : (502450501U))), (((/* implicit */unsigned int) arr_59 [i_18] [14] [14]))));
                    }
                } 
            } 
        } 
        arr_67 [i_17] = ((/* implicit */unsigned long long int) ((long long int) max((arr_62 [i_17 + 2] [12]), (arr_62 [i_17 + 1] [10]))));
        /* LoopSeq 1 */
        for (signed char i_21 = 2; i_21 < 17; i_21 += 2) 
        {
            arr_71 [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) 67108860))) & (((/* implicit */int) ((3041365400U) == (var_11)))))) & (((/* implicit */int) ((signed char) max((var_16), (((/* implicit */unsigned int) arr_0 [i_17] [i_17]))))))));
            arr_72 [i_17] [i_17] [i_21 - 1] = ((/* implicit */short) max((67108860), (32767)));
            arr_73 [i_17] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)23855))))), (arr_60 [i_17] [(signed char)6] [i_21])));
        }
    }
}
