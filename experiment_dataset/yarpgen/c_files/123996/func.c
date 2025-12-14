/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123996
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)14336))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_10);
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_11 [i_3 + 2] [i_4 - 1] [i_4 + 1] [i_1])) / (290191741))));
                        arr_16 [i_1] [i_3] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3748)) ? (((/* implicit */int) arr_8 [i_1] [7ULL] [i_1])) : (290191745)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) << (((/* implicit */int) var_9)))))))) * (((((/* implicit */int) min(((short)-19522), (((/* implicit */short) (unsigned char)183))))) & (((/* implicit */int) (unsigned short)43339))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3748)) ? (((/* implicit */int) arr_8 [i_1] [7ULL] [i_1])) : (290191745)))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_1])) + (2147483647))) << (((((/* implicit */int) var_9)) - (1))))))))) * (((((/* implicit */int) min(((short)-19522), (((/* implicit */short) (unsigned char)183))))) & (((/* implicit */int) (unsigned short)43339)))))));
                        arr_17 [i_1] = ((/* implicit */_Bool) (signed char)53);
                        var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)43317), (((/* implicit */unsigned short) arr_9 [i_4 - 1] [i_3 + 3]))))) ? (((/* implicit */int) ((var_7) == (((/* implicit */int) arr_9 [i_4 - 1] [i_3 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 1] [i_3 + 3])))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_3)))))))) : (min(((-(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))));
    }
    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) & (((/* implicit */int) (unsigned short)3744))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (unsigned short)11392);
                        arr_28 [i_5] = arr_25 [i_5] [i_5] [i_5] [i_5];
                        arr_29 [i_5] [(short)5] [i_5] = ((/* implicit */signed char) arr_23 [i_5] [i_5] [i_7]);
                        arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) & ((~(((/* implicit */int) arr_11 [i_5] [(unsigned short)17] [10ULL] [i_5]))))))), (((((var_10) < (((/* implicit */int) arr_20 [i_5] [i_5] [9U])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_0), ((unsigned short)55345))))) : (-157501823072335229LL)))));
                    }
                } 
            } 
        } 
    }
    var_17 -= ((/* implicit */signed char) max((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_12)))))))), (((((/* implicit */int) (signed char)56)) - (((/* implicit */int) (short)3336))))));
}
