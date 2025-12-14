/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182244
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
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2 - 1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35243)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)2567)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7)))))))));
                    var_15 = (!(((/* implicit */_Bool) 3492799318U)));
                    var_16 = ((/* implicit */unsigned short) min((arr_6 [i_0] [i_0] [i_1] [(unsigned char)15]), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)24540)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((var_3) | (((/* implicit */long long int) (-2147483647 - 1)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_12 [5] [i_6])))));
                        arr_19 [i_4] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4])) * (((/* implicit */int) (unsigned char)224)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            arr_23 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-85)) | (((/* implicit */int) (signed char)-4))));
            var_19 = ((/* implicit */long long int) var_11);
        }
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) min((-4687406845565482215LL), (((/* implicit */long long int) 3U)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_24 [(signed char)11])), (var_6))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)3125))))), (104960812548061526ULL)))));
                            var_21 += ((/* implicit */unsigned long long int) arr_13 [i_3 + 2] [i_8] [(unsigned char)10] [i_10]);
                        }
                    } 
                } 
                arr_33 [(unsigned char)3] [i_3] [i_9] = ((/* implicit */unsigned int) (unsigned char)106);
            }
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1]))) <= (-4647552280148354764LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        {
                            arr_41 [i_3] [12] [i_12] [12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3 - 1] [i_13 - 2]))));
                            var_23 |= ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                            arr_42 [i_13] [i_3] = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */int) ((unsigned short) (unsigned char)72));
                arr_46 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (var_1))))));
                var_25 = ((/* implicit */unsigned char) var_5);
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 840214843)) ? (28LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)54281))))));
                var_27 = ((((/* implicit */long long int) min((var_1), (var_1)))) >= ((+(var_4))));
            }
            var_28 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) 4842607066417230920LL))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -8769358571178337611LL)) : (var_11)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                for (unsigned char i_17 = 1; i_17 < 11; i_17 += 4) 
                {
                    for (int i_18 = 2; i_18 < 10; i_18 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_18] [i_17 + 2] [i_16] [i_8] [i_3])))))));
                            var_30 = ((/* implicit */long long int) max(((-((~(arr_38 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 1]))))), (((/* implicit */unsigned long long int) min((((unsigned short) (_Bool)1)), ((unsigned short)65518))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (short)22891)) / (974551932)))));
        }
        var_32 -= min(((-(((((/* implicit */_Bool) arr_15 [i_3])) ? (9106700307834212932ULL) : (((/* implicit */unsigned long long int) 3812428261U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1250137369)) ? (((/* implicit */int) (signed char)-97)) : (-648846348)))));
    }
}
