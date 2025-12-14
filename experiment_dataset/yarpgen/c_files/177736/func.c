/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177736
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
    var_10 = (_Bool)1;
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)30711))))))), ((+(var_5)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 131056U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))) : (16715249765701853475ULL))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_12 [i_3] [i_0] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0]) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1]))) > (2147479552U))))))));
                        arr_15 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */long long int) (+(-1)));
                        var_13 = ((/* implicit */_Bool) ((int) var_3));
                    }
                } 
            } 
        }
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                arr_23 [i_4] [i_4] = ((/* implicit */unsigned short) (-((~(((arr_18 [i_4]) / (((/* implicit */int) var_6))))))));
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_31 [i_4] [i_6] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (arr_18 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_7 + 3] [i_7 + 2] [i_7 + 3]))) ^ (arr_24 [i_8] [i_7] [i_4])))) : (((((((/* implicit */_Bool) arr_22 [i_4] [i_8])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-7630785276800604196LL))))))));
                                var_14 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16036)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
