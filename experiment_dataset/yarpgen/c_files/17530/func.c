/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17530
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_11 &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-38)))))))) != (((((/* implicit */_Bool) (+(var_10)))) ? (((int) var_3)) : (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (unsigned short)12264))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [19U] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)-1)))) ? (18028907893219619896ULL) : (((/* implicit */unsigned long long int) ((unsigned int) var_5))))) > (((/* implicit */unsigned long long int) (~(var_8))))));
                        var_12 = ((/* implicit */signed char) (short)-3080);
                        arr_12 [i_3] [10] [i_1] [i_3] = ((/* implicit */short) max((var_7), ((~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53272))) : (7466008225493828124ULL)))))));
                        var_13 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) < ((+(9979532919929987240ULL)))));
                        arr_13 [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)24643)) / (((/* implicit */int) (short)-27662))))));
                    }
                } 
            } 
        } 
    }
    var_14 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (signed char)-1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))));
    var_15 = ((/* implicit */int) var_7);
}
