/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16167
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_4)) & (((/* implicit */int) (short)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_5);
    }
    var_10 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned short) (!(arr_4 [i_1 - 1] [i_2])));
            arr_10 [i_1 - 1] = ((/* implicit */long long int) max((arr_8 [i_2]), (arr_8 [i_1])));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (var_5) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((arr_0 [i_1 - 1]), (((/* implicit */signed char) arr_9 [i_1 - 1] [i_1] [i_1 - 1])))))));
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_15 [i_1] [i_3] = ((/* implicit */short) (((~(((/* implicit */int) arr_0 [i_1 - 1])))) == (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_0 [i_1 - 1])) + (123)))))));
            arr_16 [i_3] = ((/* implicit */unsigned long long int) 2147483647);
            arr_17 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_1])), (var_2)))) & (((max((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_5))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)224)) : (var_2))))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) == (((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((short) var_3)))))));
                    var_13 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) var_3)), (var_5)))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 4) 
                {
                    {
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)112))))));
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-32751))));
                    }
                } 
            } 
        } 
        arr_35 [i_6] [i_6 - 1] = ((/* implicit */signed char) var_7);
    }
    var_16 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_2) : (((/* implicit */int) var_4))))))))));
}
