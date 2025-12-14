/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131599
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) (unsigned short)65392);
        var_18 = arr_0 [i_0];
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)131))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned short)65380))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (1632013736444610428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967277U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : ((-9223372036854775807LL - 1LL)))))));
        }
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (!(arr_7 [i_0] [i_2 - 3])));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((short) 1632013736444610424ULL)))));
        }
        for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((_Bool) arr_0 [i_0])))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)78)) | (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_8))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))));
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((1632013736444610423ULL), (((/* implicit */unsigned long long int) 920615482))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [(unsigned short)2])) - (((long long int) arr_0 [i_4]))))), (((((/* implicit */unsigned long long int) ((255U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (arr_6 [0] [18ULL] [i_4])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)19124)))))));
            arr_18 [(unsigned char)5] [(unsigned char)5] [i_4] = ((/* implicit */unsigned long long int) ((short) arr_10 [i_5 + 2] [i_5]));
            arr_19 [i_5] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) 3348612062237628225LL)) / (arr_6 [i_5 + 2] [i_5 + 2] [i_5 - 2])));
        }
        var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))), (((unsigned long long int) max((((/* implicit */unsigned int) 1626192458)), (237U))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    var_26 = ((((/* implicit */_Bool) ((int) arr_21 [i_4]))) ? (max((((/* implicit */unsigned int) max(((unsigned char)241), ((unsigned char)234)))), (((4294967033U) << (((var_5) + (4696624077879552640LL))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3348612062237628236LL)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned char)138))))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4] [i_6 + 2])))))));
                    var_28 = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
        var_29 = ((signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [2ULL]))) : (arr_3 [i_4]))) >> (((((/* implicit */int) var_2)) - (106)))));
    }
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) ((signed char) var_2))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7566))) != (4294967032U))) ? (((/* implicit */int) ((_Bool) 4294967025U))) : (((int) -650313530))))));
    var_31 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 5849179302219964354ULL)) ? (((/* implicit */unsigned long long int) -1876298093)) : (11097262230403807504ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) -1440477844))) << (((/* implicit */int) (_Bool)1)))))));
}
