/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172379
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((_Bool) arr_0 [i_3]))), (((28LL) / (arr_7 [i_0]))))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [(_Bool)1])) / (var_11))))))));
                            arr_11 [15] [3LL] [i_2] [(unsigned char)12] = ((/* implicit */signed char) max((min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (unsigned short)65423)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_17 &= ((/* implicit */signed char) min(((+(max((arr_12 [i_0] [i_0] [16LL] [16LL]), (7ULL))))), (((/* implicit */unsigned long long int) max((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (((/* implicit */long long int) var_7)))))));
                            var_18 = ((/* implicit */unsigned long long int) (((+(-75332021))) >= (((/* implicit */int) ((unsigned char) (unsigned short)16625)))));
                            var_19 *= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))));
                            arr_18 [i_0] [i_0] [i_4 - 1] [i_5] = ((/* implicit */int) ((max(((-(3792866349026545976ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) < (((/* implicit */unsigned long long int) ((max((var_1), (((/* implicit */long long int) var_3)))) * (((/* implicit */long long int) (+(1143370490)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((short) ((11661633812824054045ULL) <= (((/* implicit */unsigned long long int) 2179012025U)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-5537370211902181932LL)));
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 23; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 21; i_9 += 2) 
            {
                {
                    arr_32 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                    var_21 ^= ((/* implicit */short) ((_Bool) (_Bool)1));
                }
            } 
        } 
        arr_33 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (arr_26 [i_7] [i_7] [i_7])))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_15))))));
        arr_34 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 1971993084))) != (((/* implicit */int) arr_23 [i_7]))));
    }
    var_22 = ((/* implicit */unsigned short) var_8);
}
