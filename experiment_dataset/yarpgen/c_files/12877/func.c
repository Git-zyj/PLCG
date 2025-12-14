/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12877
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) & ((-(var_9)))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) 2147483647))));
    var_12 = 146611206845356034ULL;
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned short) 1982466650U));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((var_4) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_3 + 3] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_3 + 2] [i_0 - 4]))))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 16010354298982456694ULL))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (signed char)63))));
        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3]))) >= (arr_7 [i_0 - 2]))) ? (6964453565958834489LL) : (((long long int) ((int) 178384223)))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 4; i_4 < 19; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) -2037804374);
        arr_15 [5LL] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 3] [i_4 - 4]))));
        var_19 = ((/* implicit */unsigned char) arr_13 [(unsigned char)16]);
    }
    /* vectorizable */
    for (unsigned short i_5 = 4; i_5 < 19; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            var_20 = ((/* implicit */short) (~(((int) 18446744073709551593ULL))));
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(-1476607682956456148LL)));
        }
        var_21 = ((/* implicit */unsigned long long int) (unsigned short)11);
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5 - 3] [i_5 - 1] [i_5 - 4]))) ^ (arr_7 [i_5])));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (unsigned short i_8 = 3; i_8 < 20; i_8 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) ((((_Bool) arr_26 [i_7] [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15956))) : (((long long int) var_8))));
                    var_24 = ((/* implicit */long long int) -496794024);
                }
                arr_29 [i_7] [i_8] &= (!(((/* implicit */_Bool) arr_26 [i_8] [i_8 - 2] [i_8 - 1])));
            }
        } 
    } 
}
