/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138200
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
    var_18 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)72))));
        arr_3 [i_0] = ((/* implicit */short) (-((+(arr_2 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)14)), ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))) ^ (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4)))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [(unsigned char)18] [(unsigned char)18] [21ULL]))))));
            var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) && (((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)13)))))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]);
                        var_23 &= ((/* implicit */unsigned short) ((max((10133814228492068788ULL), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_3])))) & (((/* implicit */unsigned long long int) (~(arr_7 [i_1] [i_2] [i_1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_24 = ((var_11) > (((/* implicit */unsigned long long int) var_17)));
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */int) arr_10 [i_0] [i_0] [5ULL] [i_2] [i_3] [i_4]);
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 3; i_5 < 24; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((-7033705941309693508LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)22882)) ? (((/* implicit */int) (signed char)30)) : (-985847452)))))) : (((/* implicit */long long int) ((var_6) ? ((+(((/* implicit */int) (signed char)33)))) : (((/* implicit */int) ((_Bool) 4275502753U))))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)7157), (((/* implicit */unsigned short) arr_10 [i_0] [(unsigned short)8] [i_0] [i_5 - 1] [i_6] [i_6]))))) ? (max((((/* implicit */long long int) arr_11 [i_5 - 1] [i_5 + 1] [i_5 - 3])), (arr_7 [i_5] [i_1] [i_5 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))))))));
                        var_26 *= ((/* implicit */_Bool) max((min((((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_6]))))), (arr_12 [i_0] [i_0]))), (2223273678447595754LL)));
                        var_27 *= ((/* implicit */_Bool) (~((+(arr_8 [i_5] [i_5 + 1] [i_5 - 3] [i_5 - 3])))));
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned short) min((min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)24123)) : (((/* implicit */int) (unsigned char)35))))))), (((/* implicit */unsigned long long int) var_3))));
}
