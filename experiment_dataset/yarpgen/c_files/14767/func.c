/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14767
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - ((~(max((var_15), (((/* implicit */long long int) var_5))))))));
    var_21 = ((/* implicit */short) min((8911746471734025413LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 5756090362793147099LL))) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) == (((/* implicit */int) (unsigned short)36033))))))))));
    var_22 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) var_16);
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (unsigned short)65527))))) <= (7U)));
        }
        var_25 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_0] [i_0] [i_0]))), (((18158513697557839872ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)9829)))))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) min((var_4), (((/* implicit */short) arr_2 [i_0]))))), (min((((/* implicit */unsigned int) arr_2 [i_0])), (0U)))))) & (((max((((/* implicit */long long int) (signed char)13)), (1285833505055310590LL))) << (((max((var_18), (((/* implicit */unsigned long long int) var_17)))) - (14453283369333976716ULL))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_2] [(unsigned short)1] [i_2])), (((((/* implicit */int) arr_2 [i_2])) + (((/* implicit */int) max(((signed char)-40), ((signed char)-1))))))));
        arr_11 [i_2] = ((/* implicit */_Bool) (unsigned short)0);
        arr_12 [1] &= ((/* implicit */short) (signed char)-110);
        arr_13 [i_2] [(unsigned char)2] = ((/* implicit */long long int) arr_4 [i_2]);
    }
    var_27 = ((/* implicit */unsigned long long int) 4294967273U);
}
