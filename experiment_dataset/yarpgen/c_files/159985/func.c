/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159985
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
    var_10 = ((((/* implicit */_Bool) (short)15025)) ? (((/* implicit */int) (short)15032)) : (((/* implicit */int) (short)15062)));
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */int) (+(((long long int) (short)15062))));
            arr_5 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) (short)-15033))))));
            var_12 = ((/* implicit */long long int) min((var_12), ((((!(((/* implicit */_Bool) (short)15080)))) ? ((~(arr_2 [i_0 + 1] [i_0] [i_0 + 1]))) : (((/* implicit */long long int) ((unsigned int) arr_2 [i_0 + 2] [i_0] [i_0 + 1])))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned int) (short)15047))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) ((_Bool) var_9)))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((unsigned char) ((arr_6 [(unsigned short)2] [i_0 + 2] [i_2] [i_0]) != (arr_1 [i_1])))))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-15033))))))) ? (min((arr_2 [i_4 - 1] [i_4] [i_4 - 1]), (((/* implicit */long long int) ((short) (short)15032))))) : ((+(var_9)))));
            var_16 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_4] [i_0] [i_4]))) < (var_9)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [10U] [i_0 + 1])))))));
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)15025))))), (var_2))) >> ((((+(((((/* implicit */_Bool) (short)-15027)) ? (((/* implicit */int) (short)15032)) : (((/* implicit */int) (short)15032)))))) - (15024)))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)-15036)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) min(((short)-15033), ((short)-15060)))) ^ (((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_5] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_0])))))))));
            arr_19 [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((int) arr_3 [i_0 - 1]))) && (((/* implicit */_Bool) arr_18 [i_5] [i_0 - 1])))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_29 [i_0] [i_6] [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) (short)-15027)))));
                        var_18 |= ((/* implicit */unsigned char) ((signed char) arr_22 [i_6] [i_0 + 2] [4]));
                    }
                } 
            } 
            arr_30 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)15014)) ? (((/* implicit */int) (short)15028)) : (((/* implicit */int) (short)-15042)))));
        }
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) (short)-15036))))) ? ((-(((/* implicit */int) (short)-15033)))) : (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1] [i_0])) != (((/* implicit */int) arr_23 [i_0 + 2] [i_0] [i_0 + 1]))))))))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned short) (short)-15000);
                        var_21 += ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) var_1))), (((((/* implicit */int) (short)15032)) % (((/* implicit */int) (short)15014))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) % (((var_4) >> ((((~(((/* implicit */int) (short)-15032)))) - (15015)))))));
}
