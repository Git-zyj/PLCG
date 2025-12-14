/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102686
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */short) var_5))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) var_12)), (var_2)))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) arr_0 [i_0]);
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_20 |= max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-110))))), (((((-1) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))));
                            var_21 = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_5 = 3; i_5 < 14; i_5 += 3) 
            {
                for (short i_6 = 1; i_6 < 12; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) 13);
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_1] [i_1]))) - (arr_17 [i_1] [i_1] [i_1] [i_6] [i_1] [9LL] [i_1])))))) ? (((/* implicit */long long int) var_6)) : (((((arr_9 [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [2ULL] [(short)1] [i_0]))))) / (arr_5 [i_5 - 2] [i_5 + 1] [i_6 + 2])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((min((15ULL), (15ULL))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [14ULL])))))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (((var_17) - (((/* implicit */long long int) ((((/* implicit */_Bool) 387041963983100839ULL)) ? (arr_10 [i_0] [i_8] [(signed char)9] [0ULL] [(signed char)4] [i_0]) : (((/* implicit */int) (_Bool)0))))))))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((((((/* implicit */_Bool) arr_18 [i_0] [7] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (7ULL))) >> (((((((/* implicit */int) arr_20 [(signed char)0])) | (((/* implicit */int) var_16)))) - (62385))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_8] [i_8] [(unsigned short)7])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_8] [6]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_10 [9LL] [i_8] [i_8] [(_Bool)1] [9LL] [i_8]))));
                        var_28 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [(short)10] [4U])) % (max((((/* implicit */int) arr_14 [6LL] [(unsigned short)12] [i_9] [8])), (arr_19 [i_0])))))), ((+(8490615894074630195ULL)))));
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */int) ((var_14) >> (((9956128179634921401ULL) - (9956128179634921356ULL)))));
        arr_28 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9956128179634921407ULL))));
    }
    var_30 = ((/* implicit */_Bool) max((var_30), (var_16)));
    var_31 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned short)32397)))), (((/* implicit */int) var_13))));
    var_32 = ((_Bool) min((min((((/* implicit */unsigned long long int) var_8)), (15ULL))), (((/* implicit */unsigned long long int) var_10))));
    var_33 = ((/* implicit */unsigned int) var_5);
}
