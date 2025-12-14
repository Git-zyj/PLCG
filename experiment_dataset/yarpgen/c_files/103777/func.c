/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103777
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
    var_18 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */short) ((unsigned char) ((arr_1 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned char)171)) - (170)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) (!(arr_4 [i_1])));
            arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3977491473U), (((/* implicit */unsigned int) (unsigned char)43))))) ? (((arr_8 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_4 [i_1])))))))) ? (((-3211903514235851393LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))))) : (((/* implicit */long long int) (((((~(((/* implicit */int) arr_4 [i_1])))) + (2147483647))) >> (((((arr_8 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))) - (3031568494U)))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
        {
            arr_13 [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_1] [i_3] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (arr_8 [i_1])))) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) : ((+(((/* implicit */int) arr_4 [i_1])))))));
            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) arr_5 [i_1 + 1]))), (((unsigned long long int) arr_7 [i_1 + 1]))));
            var_21 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) arr_8 [i_1 + 2])));
            var_22 = ((/* implicit */short) arr_5 [i_3]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */_Bool) (((-(arr_8 [i_4]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_23 [i_6] [i_6 + 4] [i_6 - 1] [i_6] [i_6] [i_6 + 2] [i_6 + 1])) : (((((/* implicit */_Bool) 839721337U)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)254)))))))));
                            var_24 &= arr_7 [i_6];
                            arr_24 [i_6] [i_4] [i_4] = arr_22 [i_7] [i_6] [i_5] [i_1] [i_4] [i_1] [i_1];
                            arr_25 [i_4] [i_7] [i_6] [i_5] [i_4] [i_4] |= ((/* implicit */unsigned short) arr_12 [i_4] [i_4] [i_4]);
                        }
                    } 
                } 
            } 
            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_20 [i_4])) != (arr_11 [i_1]))))))) ? (((/* implicit */unsigned long long int) min((arr_8 [i_1]), (((/* implicit */unsigned int) ((short) arr_8 [i_1])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_1])), (arr_5 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1])), (arr_6 [i_1]))))) : (((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_4]))) : (arr_10 [i_1] [i_1] [i_1])))))));
        }
        arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) arr_20 [i_1 + 2]));
    }
    var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44552)) ? (-3211903514235851393LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)96)))))));
}
