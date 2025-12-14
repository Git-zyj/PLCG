/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167550
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */int) max(((((-(0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)177)))))))), ((!(((/* implicit */_Bool) 536870656))))));
                        arr_15 [i_0] [i_1] [i_2] [18LL] = ((/* implicit */unsigned char) arr_13 [10LL] [(short)8] [10] [(short)8]);
                        var_11 = ((/* implicit */unsigned long long int) (-((~((~(((/* implicit */int) (short)-24626))))))));
                        var_12 ^= ((/* implicit */short) (+((~(12293527677149826646ULL)))));
                        var_13 = ((/* implicit */_Bool) arr_0 [i_0]);
                    }
                } 
            } 
        } 
        arr_16 [8ULL] [i_0] = ((/* implicit */long long int) arr_3 [(unsigned char)15]);
        var_14 *= arr_12 [(short)0];
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */long long int) arr_17 [i_4]);
        var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_3 [i_4])), (2855812732724084638LL))) % (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
        var_16 = (-(((/* implicit */int) (unsigned char)102)));
    }
    var_17 = ((/* implicit */unsigned short) (-(2855812732724084638LL)));
    var_18 ^= ((/* implicit */unsigned short) var_5);
}
