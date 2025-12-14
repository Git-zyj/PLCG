/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149881
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (signed char)56))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (signed char)56);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)47)), ((+(1814677692)))))) ? (((/* implicit */int) arr_6 [i_1] [(_Bool)1])) : (((/* implicit */int) (unsigned short)24570))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) & (((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)59)) / (((/* implicit */int) (unsigned char)149))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-5)) && (((/* implicit */_Bool) (short)6710))));
                    }
                } 
            } 
        } 
        var_15 = ((((((/* implicit */_Bool) ((unsigned char) (signed char)44))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((arr_8 [i_2]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))) - (((arr_8 [i_2]) % (((/* implicit */long long int) ((/* implicit */int) var_1))))));
        var_16 -= ((/* implicit */unsigned short) (~(((int) min((((/* implicit */short) var_7)), (var_2))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_13 [i_6] [i_9] [i_8])) * (((/* implicit */int) var_7)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)255))))))))));
                            arr_27 [(unsigned char)2] [(unsigned char)2] [i_8] [i_6] [i_7] [i_6] = ((/* implicit */long long int) arr_10 [i_9] [(unsigned short)10] [(unsigned short)10]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
}
