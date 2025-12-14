/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140374
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -8063443796060483481LL)) : (var_5)))) ? (var_15) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_15)) ? (var_8) : (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) & (var_11))))) : (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_14)), (var_1))))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_7 [i_0] [10] [10] [i_0])) % (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))));
                            var_18 = ((/* implicit */int) (unsigned short)46162);
                        }
                    } 
                } 
            } 
            var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)82)), (7534104851394159021LL)))) >= (var_10)))), (min((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (~(arr_3 [i_1] [i_0])))))));
        }
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_15 [i_0] [(short)8] [(short)8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9)))) ? (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) arr_6 [i_0] [(short)10] [i_0] [i_5])) : (((/* implicit */int) var_7))))) : ((-(var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0] [i_5])))));
        }
        var_21 -= ((/* implicit */int) arr_14 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (arr_10 [i_6] [(unsigned short)9] [i_6 - 1] [i_6] [i_6] [i_6 - 2]) : (arr_10 [i_6] [(unsigned char)10] [i_6 - 1] [i_6] [i_6] [i_6 - 1])))));
            var_23 = ((/* implicit */unsigned int) var_8);
        }
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((((/* implicit */_Bool) ((var_10) >> (((/* implicit */int) var_6))))) ? (((long long int) arr_25 [(signed char)4])) : (((((/* implicit */_Bool) var_5)) ? (-578642051327002844LL) : (((/* implicit */long long int) var_9)))));
                            var_25 = ((/* implicit */unsigned char) var_1);
                        }
                        var_26 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [13LL] [i_10] [13LL] [i_9] [i_7] [i_7] [(unsigned short)18])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5233))) : (var_8))) % (((/* implicit */long long int) arr_25 [i_7]))));
                    }
                } 
            } 
        } 
        arr_30 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(short)14] [i_7]))));
    }
    var_27 = ((/* implicit */long long int) var_9);
    var_28 = ((/* implicit */long long int) var_6);
    var_29 = ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_7))))), (var_9))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)26))))));
    var_30 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((long long int) -3395553170242246831LL))) * (min((var_10), (((/* implicit */unsigned long long int) var_12))))))));
}
