/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11269
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((-(arr_0 [(signed char)14]))) / ((-(((((/* implicit */_Bool) var_8)) ? (arr_0 [(unsigned short)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))))));
        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max(((unsigned short)3899), ((unsigned short)30272)))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) 461234583))))))))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (+((+(((/* implicit */int) var_4)))));
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53498))) > (17562816154269109060ULL)));
    }
    for (short i_2 = 3; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2 + 2]))) : (var_11))) <= (((var_5) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3903)))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) (+((-(((/* implicit */int) arr_1 [i_2] [i_2]))))))) <= ((+(((((/* implicit */_Bool) arr_6 [11U] [(unsigned char)1])) ? (var_7) : (arr_0 [6U])))))));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 11; i_3 += 3) 
        {
            for (int i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                for (short i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((+(((/* implicit */int) arr_12 [i_3 + 3] [i_3] [i_5 - 1] [i_3])))) * ((-(((/* implicit */int) (unsigned char)252)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 4; i_6 < 10; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((short) arr_7 [i_2 - 1])))));
                            var_22 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_12 [i_2] [i_3] [i_5] [i_6])))) << (((((/* implicit */int) arr_11 [i_2] [i_3])) - (190)))));
                        }
                        for (long long int i_7 = 2; i_7 < 13; i_7 += 2) 
                        {
                            arr_23 [i_7] [i_4] [i_7] |= ((/* implicit */int) var_8);
                            var_23 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_2] [i_3] [i_5])) : ((((~(var_0))) % (((var_12) & (((/* implicit */int) arr_12 [(unsigned short)7] [i_3] [i_4] [i_5])))))));
                            var_24 = arr_19 [i_2] [i_7 - 1] [13U] [i_4 - 1] [i_5 + 1];
                            var_25 = var_2;
                        }
                        var_26 = ((/* implicit */int) ((unsigned char) (+(max((var_6), (-762195704))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_2] [i_4 - 1] [i_2 - 3] [(unsigned char)9])) | (((((/* implicit */_Bool) arr_18 [i_2 - 3] [i_2] [i_2] [i_2])) ? (-762195688) : (var_6))))) / (var_14))))));
                        var_28 = ((/* implicit */int) ((signed char) min((((((/* implicit */_Bool) var_4)) ? (3250082459U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_5] [i_3])) != (((/* implicit */int) arr_11 [i_2] [2U]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_8 = 2; i_8 < 13; i_8 += 2) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 1; i_10 < 12; i_10 += 2) 
                {
                    {
                        var_29 *= ((/* implicit */short) (unsigned char)245);
                        arr_31 [i_8] [i_8] [i_9 - 1] [i_8] |= ((/* implicit */long long int) 762195686);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_35 [i_2 - 1] [i_8 + 1] [i_9] [i_9] [i_11] = arr_3 [i_2] [i_8 - 2];
                            var_30 = ((/* implicit */unsigned char) arr_9 [(short)1] [i_8] [i_10]);
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_10 + 1] [i_8 - 2] [i_8 - 1] [i_2 - 2] [i_2 - 1])) | (arr_29 [i_10 + 1] [i_9] [i_8 - 2] [i_2 + 3])));
                            var_32 = ((/* implicit */long long int) var_0);
                        }
                        arr_36 [i_2] [i_2] [i_2] [i_9] = ((/* implicit */signed char) ((long long int) arr_34 [i_9] [12] [i_9] [i_10] [i_10]));
                        arr_37 [7] [i_9] = ((/* implicit */short) (-((-(((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_10] [i_9] [i_9] [i_8] [i_2 + 1] [i_9]))) ^ (3008247512463407218LL)))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */signed char) (~((-(-762195704)))));
    }
    /* LoopSeq 1 */
    for (int i_12 = 4; i_12 < 23; i_12 += 4) 
    {
        var_34 = ((/* implicit */int) arr_39 [i_12]);
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 949446929)) ? (((/* implicit */int) ((signed char) arr_38 [i_12 - 3]))) : (((/* implicit */int) (unsigned short)36655))));
    }
}
