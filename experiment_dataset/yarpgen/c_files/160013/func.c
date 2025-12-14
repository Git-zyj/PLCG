/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160013
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
    var_13 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)61645)) ^ (((/* implicit */int) (unsigned char)255)))) << (((((/* implicit */int) (unsigned char)32)) - (24)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                                arr_12 [i_2] [5LL] [5LL] [i_3] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_13 [(unsigned char)0] [i_2] [(signed char)6] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)29), ((unsigned char)158))))) ^ (max((0U), (((/* implicit */unsigned int) arr_1 [i_2 + 1]))))));
                                var_16 += ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-11))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_6 = 2; i_6 < 14; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (0U)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_7] [i_7] [i_6]))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_1 [i_7]))));
        }
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_23 [i_6])));
            arr_26 [i_6] [i_8] = var_10;
        }
        var_22 = ((/* implicit */long long int) (_Bool)1);
    }
    for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((arr_29 [i_9]), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)227))))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_32 [i_10] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)173))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((arr_27 [i_10]), (((/* implicit */unsigned char) var_8))))))) : ((+((+(-1278686284060623432LL)))))));
        var_25 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_30 [i_10] [(unsigned char)16])))) > (((/* implicit */int) (unsigned char)83))));
    }
}
