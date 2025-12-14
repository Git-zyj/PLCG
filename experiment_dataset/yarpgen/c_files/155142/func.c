/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155142
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_5))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2098821301))));
                            var_22 *= ((/* implicit */signed char) (~(((/* implicit */int) (short)19906))));
                            var_23 = arr_7 [i_0] [i_1] [i_2];
                        }
                        for (long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((((unsigned char) (!(((/* implicit */_Bool) 13915505653058266359ULL))))), (((/* implicit */unsigned char) min((arr_8 [i_5 - 2] [i_5 + 1]), (arr_8 [i_5 + 3] [i_5 - 2]))))));
                            var_25 += ((/* implicit */short) ((var_11) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_0] [i_1] [i_1] [i_3] [i_5] [i_2])))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_1] [i_0]))) / (4294967295U))))))));
                            var_26 = ((/* implicit */long long int) (((~((~(var_11))))) * (((/* implicit */unsigned long long int) (~(arr_14 [i_5 - 2] [i_3] [i_3] [i_3] [i_0]))))));
                            var_27 = var_3;
                            arr_16 [i_5] [i_5 + 1] [i_3] [i_2] [i_1] [i_1] [i_0] |= (+(((/* implicit */int) (((!(((/* implicit */_Bool) -906920985561759395LL)))) || (((/* implicit */_Bool) var_4))))));
                        }
                    }
                } 
            } 
            var_28 &= ((/* implicit */int) min(((!(((((/* implicit */int) (short)-19905)) >= (((/* implicit */int) var_10)))))), (((arr_2 [i_0]) >= (var_7)))));
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_29 |= ((/* implicit */long long int) (((~((~(((/* implicit */int) var_15)))))) ^ (((((/* implicit */int) (short)-19928)) ^ (((/* implicit */int) (short)-19895))))));
            arr_20 [i_0] [i_0] = ((/* implicit */short) var_12);
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (long long int i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_30 = ((/* implicit */short) 4531238420651285256ULL);
                        arr_25 [i_0] [i_6] [i_7] [i_0] [i_8 - 1] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)19927)) >= (((/* implicit */int) (short)-19928)))))))) * (((((/* implicit */_Bool) (short)-19923)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_6)))));
                    }
                } 
            } 
        }
        arr_26 [i_0] = ((/* implicit */unsigned char) (unsigned short)13);
        arr_27 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)28721))));
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_19 [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0])))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (arr_19 [i_0] [18] [i_0]) : (arr_19 [i_0] [i_0] [i_0]))))))));
    }
    for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    {
                        arr_36 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1226)) ? (15978577019654841263ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                        var_32 = ((/* implicit */int) arr_28 [i_11]);
                    }
                } 
            } 
        } 
        var_33 = ((((/* implicit */_Bool) -6778860571282945815LL)) ? (((/* implicit */long long int) min((((/* implicit */int) ((signed char) var_8))), ((-(((/* implicit */int) (signed char)31))))))) : (((((/* implicit */long long int) min((arr_18 [3ULL] [i_9] [i_9]), (((/* implicit */int) (short)14))))) / (min((((/* implicit */long long int) var_1)), (6072484176402087435LL))))));
    }
    var_34 = 5110085255714469963LL;
}
