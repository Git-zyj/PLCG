/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159548
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
    var_12 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-8279637671996721031LL))) / (((/* implicit */long long int) arr_1 [i_0] [(_Bool)1]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [(unsigned char)5] = ((/* implicit */int) (~(((arr_6 [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        arr_9 [i_1] [2LL] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((-107158664) % (-107158685)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(-107158665))) == (((((-2026145562) + (2147483647))) >> (((arr_18 [(signed char)11]) - (3118004202U))))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_10 [i_2])) | (arr_16 [i_3] [8])))) ? (arr_16 [i_3] [i_3]) : (((/* implicit */unsigned int) ((-107158677) / (((/* implicit */int) arr_17 [i_2] [i_4] [i_3] [i_2])))))))));
                        arr_19 [i_2] [i_3] [i_3] [i_4] [i_5 + 1] = (+(((/* implicit */int) (((~(var_9))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2] = 107158676;
    }
}
