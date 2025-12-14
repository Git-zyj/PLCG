/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114066
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = (~(((/* implicit */int) (_Bool)1)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_15 [i_1] [i_0] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) var_14)))))) == (((/* implicit */int) ((unsigned char) (unsigned char)246)))));
                            var_16 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [(unsigned short)10]))));
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_10 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4] [i_0] [i_1])))));
                            var_17 -= ((/* implicit */signed char) (unsigned char)31);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned int) ((3817755035U) <= (((/* implicit */unsigned int) 1333722958))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_15))))) >> ((((-(((/* implicit */int) (short)32753)))) + (32784)))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (10184845901036300036ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110)))))) ? (((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)194)) < (((/* implicit */int) arr_3 [(short)19])))))));
                            var_21 = ((/* implicit */short) (~((+(((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]))) < (((((/* implicit */_Bool) (unsigned char)158)) ? (-1769284332207683415LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)92)))))));
                            arr_27 [i_0] [i_0] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-23763))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 549755813887LL);
            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (short)(-32767 - 1)))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned char)230))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned char) max((min((max((((/* implicit */long long int) (unsigned short)32)), (var_7))), (((/* implicit */long long int) arr_12 [i_9] [i_9])))), (((/* implicit */long long int) arr_25 [i_9] [i_9]))));
        arr_36 [i_9] = (unsigned char)16;
    }
    var_25 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -9)) : (var_13));
    var_26 = ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)155))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)28))))))) ? ((+(((var_14) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-92)) : (var_0)))))));
}
