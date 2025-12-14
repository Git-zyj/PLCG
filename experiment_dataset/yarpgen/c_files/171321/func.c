/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171321
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
    var_18 &= ((/* implicit */unsigned short) var_11);
    var_19 = ((/* implicit */unsigned short) (~(min(((~(8882645668696234714ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)178)), (var_10)))), (((((/* implicit */long long int) (-(var_1)))) - (max((((/* implicit */long long int) var_1)), (var_8)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(var_12))))));
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) (-(var_11)));
        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) (unsigned short)0))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_13)))) * ((((-(((/* implicit */int) (unsigned short)0)))) & (max((67108862), (((/* implicit */int) arr_3 [i_1]))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_24 &= ((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) var_6))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) == ((+(var_3))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) << (((-900119219) + (900119249)))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_13))) == (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) / (var_2))))), (((_Bool) arr_6 [i_2]))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 393738234)) && (((/* implicit */_Bool) (short)-21338))));
            arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-112))))) ? (-1460242586) : (arr_1 [i_1]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
        {
            arr_13 [i_1] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */unsigned char) (~(var_11)));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_3])) << (((/* implicit */int) arr_6 [i_1]))));
            var_27 ^= ((/* implicit */_Bool) (signed char)105);
            var_28 = ((/* implicit */unsigned int) (~(arr_11 [i_1] [i_1] [i_1])));
        }
        arr_14 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-14377))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4]))))) & (((((/* implicit */_Bool) (unsigned short)3403)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_0 [i_4]))))));
        arr_18 [i_4] [i_4] = (+(((/* implicit */int) min((arr_17 [i_4] [i_4]), ((unsigned char)71)))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_15 [i_4]), (arr_15 [i_4])))) / (((/* implicit */int) max((arr_15 [i_4]), (arr_15 [i_4]))))));
    }
    var_30 = ((/* implicit */unsigned short) var_5);
}
