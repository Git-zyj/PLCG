/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164579
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (8ULL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)22159))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_12)))))));
                        var_14 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_0] [i_3]);
                        var_15 = ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) 100017741)), (arr_8 [7] [7] [i_2 + 1])))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43376))) < (var_1))) ? (((9ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3851108887950002017LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) (+(((arr_8 [i_0] [i_1] [i_2]) - (4179162512U)))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) ((int) 18446744073709551609ULL));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_3 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) & (min((((/* implicit */long long int) 991631564)), (-3851108887950002010LL)))));
        var_18 += ((/* implicit */signed char) ((((unsigned long long int) (short)-32752)) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_23 [i_4] [i_5] [9LL] [i_7] = ((arr_22 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4]) == (((((/* implicit */int) (unsigned short)43377)) | (var_0))));
                            arr_24 [i_4] [i_5] [i_6 + 1] [i_7 + 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)43363)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)82))))))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */int) var_5)), ((((-(var_6))) / ((-(((/* implicit */int) (unsigned short)45062)))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((((arr_4 [i_4] [i_4 - 1]) & (arr_4 [11] [i_4 - 1]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_19 [i_4])))));
            }
        } 
    } 
}
