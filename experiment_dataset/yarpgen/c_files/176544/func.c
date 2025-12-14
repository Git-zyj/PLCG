/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176544
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
    var_16 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_3);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) (_Bool)1);
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_9 [0LL] [0LL] [0LL] [i_3] [i_3] [i_3]))));
                                arr_15 [i_0] [i_0] [i_2] [(unsigned short)2] [i_2] = ((/* implicit */long long int) (_Bool)1);
                                var_20 = ((/* implicit */short) -1630452354809688490LL);
                                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_0] [i_1]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [2LL] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [(short)8] [(short)8] [i_0])), (((int) ((((/* implicit */_Bool) var_3)) ? (135107988821114880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_22 = ((/* implicit */long long int) (~(((13460144174542498585ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44485)))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_23 += ((/* implicit */unsigned short) ((long long int) (+(var_14))));
                        var_24 ^= ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)14335))))) == (arr_24 [i_5] [i_5] [(_Bool)1] [i_5] [(unsigned char)4] [12]));
                    }
                } 
            } 
        } 
    }
}
