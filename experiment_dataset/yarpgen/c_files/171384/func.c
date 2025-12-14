/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171384
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
    var_10 = ((/* implicit */short) var_1);
    var_11 = (!(((((/* implicit */_Bool) ((unsigned char) var_5))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 374349301)) + (arr_3 [i_0] [i_1] [i_2]))) & (arr_4 [i_0] [i_2])));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)25))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)-25)) & (((/* implicit */int) (short)16987)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2077934163)) ? (374349316) : (((/* implicit */int) (signed char)-117)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -4399513827342855273LL))));
        var_14 = ((/* implicit */short) (-(((arr_7 [(unsigned char)12] [i_4] [i_4] [i_4] [(short)8]) >> (((arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]) - (2035021913)))))));
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)236)))))));
    }
}
