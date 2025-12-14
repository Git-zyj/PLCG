/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153122
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((-674460348) - (var_5))), (((/* implicit */int) (short)22198)))) != (-674460345)));
        arr_5 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_10 [i_1] = min((var_9), ((short)22198));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_18 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2] = ((short) (+(((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))) : (-1572967616713112131LL)))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(arr_9 [i_2 - 1] [i_3 + 1]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_21 [i_1] [15U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_5] [i_5] [i_5] [(signed char)8])), (1572967616713112121LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : (max((((/* implicit */unsigned long long int) 1572967616713112130LL)), (8102185033604769746ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22172)))));
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) (signed char)-25)), ((short)22198)))) != ((~(((int) -7669794536518598068LL)))))))));
                            var_19 &= arr_26 [i_5] [i_5] [i_5] [i_5] [i_5];
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_1] [i_5] [i_6] [15ULL] [i_8]))))) | (1572967616713112130LL)))) ? (((long long int) max((arr_17 [i_8] [i_5] [4LL] [i_7]), (((/* implicit */unsigned char) (signed char)-67))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))));
                            var_21 += ((/* implicit */int) (short)-22198);
                        }
                    } 
                } 
            } 
            arr_30 [i_1] [i_1] = max(((!(arr_28 [i_1] [(_Bool)1] [i_5] [i_5] [i_5]))), ((!(((/* implicit */_Bool) 1649189091)))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_1] = ((/* implicit */short) min((-7103784062643306977LL), (((/* implicit */long long int) -998104383))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_16))));
            arr_34 [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((998104370) * (((((/* implicit */_Bool) (unsigned short)35534)) ? (((/* implicit */int) arr_26 [i_1] [i_1] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_32 [i_1] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)112)) ? (998104370) : (380635465)))));
        }
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_14))));
    }
    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        var_24 = ((/* implicit */int) ((arr_22 [i_10] [i_10] [i_10]) || (((/* implicit */_Bool) (signed char)-67))));
        arr_37 [i_10] = ((/* implicit */unsigned int) arr_16 [i_10] [i_10] [i_10] [(_Bool)1]);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_25 ^= ((/* implicit */unsigned char) 70677320U);
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) 582359487)), (6706256433124479386LL)))) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11] [i_11] [18ULL] [i_11])) || ((!(((/* implicit */_Bool) -7103784062643306977LL))))))))))));
    }
    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) 2173107787U)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (7669794536518598067LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22172)))))) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (signed char)1)))))));
}
