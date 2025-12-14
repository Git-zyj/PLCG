/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101105
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_7))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */long long int) (-(arr_2 [i_1] [i_0] [i_0])));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_2])))))) ? ((+(arr_0 [i_2 + 1]))) : (((/* implicit */unsigned long long int) (-(((var_15) * (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))))))))));
                            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_5 [i_2 + 1])))));
                            arr_15 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((arr_6 [i_2 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 1] [i_1])))));
                            var_19 = ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (((var_15) / (((/* implicit */long long int) var_8))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((((_Bool) min((var_2), (((/* implicit */unsigned short) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_0]))))) ? (((/* implicit */unsigned long long int) var_15)) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])));
            var_21 &= (~(((((/* implicit */_Bool) arr_16 [9U])) ? (arr_0 [i_5]) : (arr_0 [i_5]))));
        }
        for (int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) var_14);
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 15; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 18; i_8 += 4) 
                {
                    {
                        arr_26 [i_6] [i_7 - 1] [i_8 + 1] = ((/* implicit */long long int) (~(arr_10 [i_0] [i_0] [i_7] [i_7] [i_7] [11ULL])));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_6] [i_7] [i_0] [i_8 - 1])) * (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0] [i_0]))))))));
                        arr_27 [i_0] [i_0] [i_6] [i_7] [i_7] [i_8 - 1] = ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0])))))));
        }
        arr_28 [i_0] |= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_1 [i_0]))))));
        var_25 = ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) ((_Bool) arr_12 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)47690)) ? (2257020747767570179LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((arr_11 [i_0] [i_0] [7] [i_0]) ? (var_3) : (((/* implicit */int) var_2))))))));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 2; i_9 < 15; i_9 += 2) 
        {
            arr_31 [i_0] [i_0] = ((/* implicit */long long int) var_5);
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 16; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_1))))));
                            var_27 ^= ((/* implicit */unsigned long long int) var_14);
                            var_28 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_11 - 1])) ? (((/* implicit */int) arr_3 [i_11 + 1])) : (((/* implicit */int) var_0))))), (arr_21 [i_0] [i_0] [i_10] [i_0]));
                        }
                    } 
                } 
            } 
            arr_40 [i_9 + 3] [i_9] [i_9 + 3] = ((/* implicit */unsigned short) ((_Bool) min((var_9), (((/* implicit */long long int) var_2)))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            arr_43 [i_0] = ((/* implicit */unsigned char) (-(var_8)));
            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            var_30 = ((/* implicit */long long int) var_2);
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned long long int) arr_18 [i_14] [i_14] [i_0])))));
            arr_48 [18ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_13)))));
        }
    }
    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((_Bool) var_14)))));
}
