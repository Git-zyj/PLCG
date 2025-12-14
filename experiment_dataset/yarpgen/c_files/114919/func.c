/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114919
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
    var_18 = ((/* implicit */unsigned char) (short)-3755);
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32706))) & (152012815562978848ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)41264))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24272))) & (9415787741098400381ULL)))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0])) ^ (((/* implicit */int) arr_6 [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_21 -= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_6 [i_0]))))));
                        arr_13 [i_0] [i_3] [i_2] [i_3] = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))) : (382570467189159431ULL));
                        arr_14 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_5)))) ? (((arr_7 [i_0] [i_1] [i_2]) >> (((17932236469403550747ULL) - (17932236469403550742ULL))))) : (((/* implicit */int) var_2))));
                        var_22 |= ((/* implicit */short) (unsigned char)123);
                        arr_15 [i_0] [i_1] [i_2] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (var_8) : (var_10)))));
                    }
                    for (int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)95)) < (((/* implicit */int) var_9))))) - (var_5)));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)123)) * ((-(((/* implicit */int) (_Bool)1))))));
                    }
                }
            } 
        } 
        arr_19 [i_0] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) - (15405014648553134593ULL))));
        arr_20 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3081332901U)) * (16859323613832964178ULL)));
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_24 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3775413888U)))))), ((((!(((/* implicit */_Bool) 9030956332611151235ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5])))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15827))) : (arr_0 [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_30 [7ULL] [i_6] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)133);
                    arr_31 [i_5] = ((/* implicit */unsigned int) (unsigned char)9);
                    arr_32 [i_7] [i_6] = ((max(((+(12180190885303655284ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned char)114))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2751538738U)) ? (-3782231754643522402LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(arr_34 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((~(3308204432U)))))));
                                arr_37 [i_8] [i_8] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((17185769915606229685ULL) * (((/* implicit */unsigned long long int) 2168111016U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_5] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
        arr_39 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 3428182974U)))))))) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41240))) : (3775413887U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) > (-7714258634774388684LL)))))));
    }
    for (short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) (unsigned char)130);
                        arr_50 [i_13] [i_11] [i_11] [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)213)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_10] [i_10] [i_11] [i_10]))))) : (((((/* implicit */_Bool) var_8)) ? (11950275004320845673ULL) : (((/* implicit */unsigned long long int) -5129393757003938415LL))))))));
                        var_27 = ((/* implicit */unsigned char) (-((+(arr_41 [i_11])))));
                        var_28 = ((/* implicit */_Bool) max((max((arr_43 [i_10] [i_12] [i_11]), (arr_43 [i_10] [i_11] [i_11]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_43 [i_10] [i_11] [i_11])))))));
                    }
                } 
            } 
        } 
        arr_51 [i_10] = ((/* implicit */unsigned long long int) (_Bool)0);
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_10] [i_10] [i_10] [i_10] [7U] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) : (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1107763603U)) <= (-947359735528071870LL)))))))) ? (((/* implicit */unsigned long long int) min((min((var_17), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_10] [i_10] [(signed char)0])) - (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (var_8) : (((/* implicit */unsigned long long int) arr_48 [i_10] [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) (~(4169954263489187362LL)))) : ((+(arr_9 [i_10])))))))));
        var_30 = ((/* implicit */short) (signed char)-39);
    }
}
