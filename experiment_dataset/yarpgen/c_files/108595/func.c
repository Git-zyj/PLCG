/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108595
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
    var_16 = ((/* implicit */short) ((unsigned char) ((int) 0)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) arr_1 [(unsigned short)11] [i_0]);
        arr_2 [i_0] = ((/* implicit */short) 13178818131495520221ULL);
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -7934298590610549237LL)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < (var_10)))) : (((/* implicit */int) ((1987073848) < (((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) (unsigned char)224)) ? (7409798824298625664ULL) : (((/* implicit */unsigned long long int) -167178583)));
        arr_6 [i_1 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)16055))));
        arr_7 [i_1 - 1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned long long int) 20489883U)) : (5267925942214031409ULL)));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_1)))) ? ((+(((/* implicit */int) (unsigned char)147)))) : (((/* implicit */int) arr_1 [i_1] [(unsigned short)5]))))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [14] [12])) ? (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1 - 1] [(unsigned char)10])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) (~(-11)))))))));
            var_20 ^= ((/* implicit */signed char) arr_10 [16U]);
            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned char)225))) ? (min((max((arr_4 [i_1 - 1]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)2)), (3265526517U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 5267925942214031409ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17710))) : (10890621845864030169ULL)));
                            var_23 = ((/* implicit */long long int) ((-318733394) > (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            var_24 = ((/* implicit */_Bool) 11);
            arr_21 [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_6])) ^ (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_0 [i_1 - 1]))))));
            var_25 = ((/* implicit */short) min((((/* implicit */int) (!((_Bool)1)))), (var_0)));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */int) max((((/* implicit */unsigned int) (short)-17710)), ((+((-(var_1)))))));
        arr_25 [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_10 [i_7]))), ((+(((/* implicit */int) var_6))))));
    }
    var_26 = ((/* implicit */signed char) var_2);
    var_27 = ((/* implicit */unsigned short) var_0);
}
