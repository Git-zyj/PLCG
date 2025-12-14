/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141603
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
    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-547767537) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned long long int) var_6)), (var_1))) : (((/* implicit */unsigned long long int) ((2336364617U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6233))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 547767550)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) var_0);
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (arr_5 [i_1] [18ULL]))))) != (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) arr_5 [5ULL] [i_1])) : (arr_4 [i_0] [i_0] [i_1])))))) : (((/* implicit */int) arr_1 [i_0]))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (signed char)-81);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [18ULL] = ((/* implicit */long long int) ((((((unsigned long long int) arr_5 [i_0] [i_3])) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (2147483647)))) == (((((/* implicit */_Bool) var_5)) ? (464954670) : (((/* implicit */int) arr_9 [i_1]))))))) : (((/* implicit */int) arr_12 [i_3] [(signed char)13] [i_0] [i_0] [i_0] [i_0]))));
                        var_20 = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) 564491133)) ? (((/* implicit */int) arr_0 [i_0])) : (464954665))))), (((/* implicit */int) arr_6 [i_1] [i_1]))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_21 += ((/* implicit */unsigned int) min(((signed char)(-127 - 1)), ((signed char)78)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    {
                        arr_25 [i_0] [(_Bool)1] [4] [i_0] = ((/* implicit */int) (signed char)3);
                        var_22 *= ((/* implicit */unsigned long long int) var_6);
                    }
                } 
            } 
            arr_26 [i_0] [i_4] = ((((/* implicit */_Bool) (+(3353137362136628631ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_0] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [4U] [i_0]))) : (arr_16 [i_0])))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((464954678), (((/* implicit */int) (unsigned short)43119))))))));
        }
        for (unsigned int i_7 = 4; i_7 < 20; i_7 += 4) 
        {
            arr_30 [(unsigned char)8] [(unsigned char)8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2677784743U))) ? ((-(((/* implicit */int) ((signed char) arr_3 [i_0]))))) : (min((1345503048), (((((/* implicit */_Bool) arr_15 [(signed char)16] [17ULL])) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (_Bool)1))))))));
            var_23 = ((/* implicit */unsigned int) arr_21 [0ULL] [0ULL] [i_0] [i_7 + 1]);
            arr_31 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) var_7);
        }
        /* vectorizable */
        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            var_24 = ((/* implicit */signed char) var_5);
            var_25 += ((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((((int) var_13)) - (128)))));
            arr_35 [i_0] [i_0] = ((/* implicit */short) arr_6 [i_0] [i_8 - 2]);
        }
    }
}
