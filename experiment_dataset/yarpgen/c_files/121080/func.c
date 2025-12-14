/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121080
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
    var_19 = ((/* implicit */int) var_2);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [(short)5] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-120)), (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_20 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) == (1240060585))))) * (((max((((/* implicit */unsigned int) arr_5 [(unsigned short)12])), (var_7))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 18318334023570790430ULL))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((3677797506U) ^ (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) min((arr_8 [i_2]), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 12848951668946165021ULL))))))) / (((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_3] [i_2] [i_1]), (((/* implicit */int) (unsigned char)228))))) || (((/* implicit */_Bool) max((18318334023570790430ULL), (((/* implicit */unsigned long long int) (short)6144))))))))));
                        var_22 ^= ((/* implicit */int) (~(min((min((((/* implicit */unsigned long long int) var_4)), (18318334023570790430ULL))), (((/* implicit */unsigned long long int) ((signed char) var_0)))))));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 2533358329U)) ? (((/* implicit */int) (short)-1026)) : (((/* implicit */int) (unsigned char)49))));
                        var_24 = ((/* implicit */signed char) ((66846720) & (((/* implicit */int) ((unsigned char) -1040994176)))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((5597792404763386595ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) * (min((((/* implicit */int) var_14)), (arr_11 [i_2])))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_26 *= ((/* implicit */short) var_1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            arr_22 [i_6] = ((/* implicit */unsigned long long int) var_4);
            var_27 *= ((/* implicit */_Bool) ((signed char) 12848951668946165021ULL));
        }
        var_28 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) arr_14 [i_5])), (var_4))) != (((/* implicit */unsigned int) arr_16 [i_5]))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_14 [i_7])) ? (arr_18 [i_7] [i_7]) : (arr_14 [i_7])))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 18; i_10 += 4) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((_Bool) ((((arr_28 [i_9]) ^ (((/* implicit */int) var_16)))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) < (((/* implicit */int) arr_27 [i_10] [(signed char)15]))))))));
                        arr_35 [(signed char)6] [(signed char)6] [(signed char)6] [(signed char)6] [2] [i_9] = ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned int) var_6);
    var_31 = var_17;
    var_32 = ((/* implicit */signed char) min(((~((~(var_12))))), (((/* implicit */unsigned int) ((unsigned char) var_0)))));
}
