/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183076
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) (unsigned short)32822)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))) : ((+(-1318735971446344228LL))))));
                            var_18 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (~(2042098504)))))));
                            var_19 += ((/* implicit */unsigned int) (~(-429557047)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned short) (+(((arr_14 [i_1] [i_4 - 3] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_4 + 3] [i_4 - 4])))))));
                            arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_13 [i_0] [i_1] [i_4] [i_5]))) ? (((arr_14 [i_0] [i_4] [i_4]) & (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) var_17))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5] [i_4 - 4] [i_4] [(unsigned char)3])))))));
                            var_21 = ((/* implicit */int) (+(min((((/* implicit */long long int) arr_10 [i_0] [i_4 - 4] [i_5 - 2] [i_5 + 2])), (var_3)))));
                            var_22 = ((/* implicit */long long int) max(((+(max((((/* implicit */unsigned long long int) -1330658045)), (arr_14 [i_0] [i_4 - 3] [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_4 - 2] [i_1] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)0)), (13403715921010055217ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) (unsigned short)33540)));
        var_24 = ((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned short)32006)) + (((/* implicit */int) (unsigned short)31990)))));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((arr_15 [i_6] [i_6] [i_6]) + (((/* implicit */int) var_14))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            for (short i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                for (long long int i_9 = 1; i_9 < 12; i_9 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
                        arr_28 [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_7 + 2] [i_8 + 2] [i_9 + 1]))));
                    }
                } 
            } 
        } 
        arr_29 [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32525))) > (arr_14 [i_6] [i_6] [i_6]))))));
    }
    var_26 += ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) 2064384U))))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))) > (((/* implicit */int) max((var_9), ((unsigned char)70)))))))));
    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((+(((/* implicit */int) var_1)))))) >> (((((unsigned int) -368452735)) - (3926514541U)))));
}
