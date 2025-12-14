/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163571
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
    var_20 = ((/* implicit */long long int) (unsigned short)12043);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]));
        var_22 |= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) < (max((arr_1 [i_0]), (((/* implicit */int) ((signed char) (unsigned short)12064)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])));
            var_24 = ((/* implicit */unsigned int) (+(arr_6 [i_2])));
            arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)187)) ? (arr_4 [19U]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)187)) : (arr_5 [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_25 = ((/* implicit */signed char) arr_4 [i_3]);
            /* LoopNest 2 */
            for (short i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) arr_9 [i_1]);
                            arr_25 [i_6] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53472)) || (((/* implicit */_Bool) arr_18 [i_1] [i_3] [i_4 - 2] [i_5 + 3]))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_14 [i_5]))));
                        }
                        var_28 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)12047))));
                        var_29 &= ((/* implicit */unsigned long long int) arr_16 [i_5 + 1] [i_5 - 1] [i_4 + 1]);
                    }
                } 
            } 
            var_30 *= ((/* implicit */short) ((arr_2 [i_3]) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_7 [i_1] [i_1] [1LL])))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (arr_19 [i_1] [i_1] [i_3] [i_3]) : (arr_15 [i_1] [i_3] [i_3])))) | (((unsigned long long int) (signed char)-39))));
        }
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        arr_35 [i_1] [i_1] [i_8] [i_9] [i_1] [4] = ((/* implicit */long long int) ((((((/* implicit */int) arr_24 [i_1] [i_8 + 1] [i_1] [i_8 - 1] [i_8 + 1] [i_8 - 1])) & (((/* implicit */int) arr_24 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1])))) == ((+(((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8 - 1]))))));
                        arr_36 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_13 [i_1] [i_7] [i_8]), ((unsigned short)12064))))))), ((signed char)-64)));
                    }
                } 
            } 
        } 
        var_32 -= arr_31 [i_1] [i_1] [i_1];
    }
}
