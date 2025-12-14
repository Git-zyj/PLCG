/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119377
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) 4783130655707149321LL))));
                        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_0])))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-4783130655707149321LL) < (arr_3 [(unsigned char)0]))))) : ((-(arr_12 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) ((signed char) var_12));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) -8398855421894144596LL));
                        var_16 = ((unsigned long long int) ((arr_12 [i_6 + 1] [i_6] [i_6] [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) max((max((((((/* implicit */_Bool) 9860347649009197285ULL)) ? (2939151203U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)87))))) ? ((-(((/* implicit */int) var_2)))) : ((+(var_4))))))));
    }
    /* LoopNest 3 */
    for (short i_7 = 1; i_7 < 10; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (short i_9 = 3; i_9 < 9; i_9 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) (-((~(((/* implicit */int) arr_7 [i_9] [4ULL] [i_7]))))));
                    arr_29 [i_9] [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((-(var_12)))));
                    arr_30 [i_8] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max(((unsigned short)33159), (((/* implicit */unsigned short) var_11))))) ? (((((/* implicit */int) var_7)) + (var_4))) : ((-(((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_1 [i_7 - 1]), (((/* implicit */unsigned int) var_4))))) < (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (var_5))))))));
                }
            } 
        } 
    } 
}
