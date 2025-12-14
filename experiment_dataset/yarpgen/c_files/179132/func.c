/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179132
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
    var_14 = ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_1))));
    var_16 = -55594116;
    var_17 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_5)) < (min((var_3), (((/* implicit */unsigned long long int) var_6)))))) && (((/* implicit */_Bool) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) % (arr_9 [i_2] [i_2] [i_1] [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_19 *= ((/* implicit */long long int) arr_11 [i_3 + 1] [15ULL]);
                        var_20 = ((/* implicit */int) ((arr_11 [i_3 + 1] [i_3 + 1]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1])))));
                        var_21 = ((/* implicit */unsigned char) arr_2 [14LL]);
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) 334472657177976213LL)))));
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        arr_26 [i_7] [i_7] [i_4] = ((/* implicit */unsigned short) ((max(((~(((/* implicit */int) arr_23 [i_7] [i_7] [i_4] [i_5] [i_4] [i_4])))), (((int) arr_25 [12ULL] [i_4] [9] [(_Bool)1])))) - (((/* implicit */int) ((signed char) 277745234)))));
                        var_23 = ((/* implicit */_Bool) var_9);
                        arr_27 [(unsigned char)3] [i_5] [i_5] [i_6 + 3] [i_4] = ((/* implicit */unsigned char) min((min((334472657177976213LL), (-3042992510609454909LL))), (((max((var_9), (((/* implicit */long long int) var_8)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4])))))));
                        arr_28 [i_4] [i_4] [3ULL] [i_7] [i_7] [i_6 + 2] = ((/* implicit */unsigned int) var_0);
                        arr_29 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16U)) ? (-1366265065) : (277745234)));
                    }
                } 
            } 
        } 
        arr_30 [4ULL] &= ((/* implicit */unsigned short) (-(((arr_25 [i_4] [12ULL] [12ULL] [i_4]) ? (((/* implicit */int) arr_25 [i_4] [4] [i_4] [(_Bool)1])) : (((/* implicit */int) arr_25 [i_4] [14U] [i_4] [14U]))))));
        /* LoopNest 3 */
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) min((var_1), (var_6)))) % (((((/* implicit */_Bool) arr_33 [i_9])) ? (((/* implicit */unsigned long long int) var_1)) : (var_3)))))));
                        var_25 = ((/* implicit */long long int) arr_25 [i_4] [i_4] [i_8 - 3] [i_10 + 2]);
                    }
                } 
            } 
        } 
        arr_40 [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_33 [i_4])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (334472657177976201LL))))))), (var_12)));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        arr_45 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) : ((~(arr_9 [i_11] [i_11] [i_11] [i_11])))));
        arr_46 [i_11] = ((/* implicit */short) var_2);
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1805975700U)) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
}
