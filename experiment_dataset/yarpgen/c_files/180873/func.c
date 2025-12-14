/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180873
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) var_0);
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((5818536216286367920ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned short)17563))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */short) var_9);
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        var_16 *= ((/* implicit */unsigned int) (unsigned short)33904);
        var_17 = ((/* implicit */short) ((int) ((((/* implicit */int) arr_12 [i_4])) == (((/* implicit */int) (unsigned short)65535)))));
        arr_13 [i_4] [24ULL] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (unsigned short)17563)) > (((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        var_18 = ((/* implicit */short) (+(arr_11 [i_5 - 1])));
        arr_16 [i_5] [i_5 - 1] = ((/* implicit */short) (+(((/* implicit */int) (short)-32746))));
    }
    var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)47972)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17563))) : (4294967295U))) < (var_4))) ? (var_5) : (max((min((((/* implicit */unsigned long long int) var_4)), (5012808866616995599ULL))), (((/* implicit */unsigned long long int) var_6))))));
}
