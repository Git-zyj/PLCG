/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173415
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-((+(((/* implicit */int) (short)30439)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) (-((+(((9223372036854775795LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))))));
                        arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-23)) & ((-(((/* implicit */int) (short)-16136))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)896))) > (1987213179U)))) < (((/* implicit */int) (signed char)23))))) : ((~((~(((/* implicit */int) (unsigned char)12))))))));
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)23)))))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-24)) ? (max((((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned char)241)))), (((/* implicit */int) (signed char)23)))) : ((+((-(((/* implicit */int) (unsigned short)13242))))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((3933876631188013462ULL), (14512867442521538162ULL))))))));
    var_25 = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 3933876631188013454ULL))))))) << (((var_16) - (12513845213932812117ULL)))));
}
