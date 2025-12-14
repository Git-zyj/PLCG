/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169619
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) ((unsigned short) 914968638295887212LL));
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_9);
    }
    for (short i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((unsigned short) ((unsigned int) arr_3 [i_1 + 2])));
        var_11 = ((/* implicit */_Bool) (unsigned short)4210);
    }
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_12 = ((/* implicit */_Bool) (short)32763);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                arr_14 [i_2 + 2] [i_2] [i_4] = ((/* implicit */signed char) (((-(((/* implicit */int) var_9)))) % ((-(((/* implicit */int) max(((short)32767), (((/* implicit */short) arr_10 [i_2 - 1] [i_3] [i_4 + 2])))))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_18 [i_2] [i_2] [i_2] [(_Bool)0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((arr_9 [i_4]) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)-8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 2])))))) : (var_1))));
                    arr_19 [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (((((/* implicit */_Bool) ((long long int) (signed char)14))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (((/* implicit */int) (signed char)-28)) : (var_3)))) : (((8241897679306104759LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))))))));
                    arr_20 [i_2] [i_3] [i_4] = ((/* implicit */long long int) arr_11 [i_3]);
                    arr_21 [i_2] [i_3] [15LL] = ((/* implicit */_Bool) var_2);
                }
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                {
                    var_13 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                    arr_25 [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)28)), ((-(((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 2] [i_2] [i_4 + 2]))))));
                    var_14 = ((/* implicit */short) max((((/* implicit */long long int) (signed char)15)), ((+(((arr_15 [i_2 + 1] [i_3] [i_4] [i_6]) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2 + 2])))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */signed char) ((unsigned short) 4294967295U));
                    arr_28 [i_2] [i_2] [i_3] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) arr_26 [i_2] [i_2] [i_3] [i_4 - 1] [i_7]);
                }
            }
        }
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2])), ((signed char)15)))) ? (((/* implicit */int) ((short) var_1))) : ((-(((/* implicit */int) (signed char)-34))))));
    }
    for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        arr_31 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_8]) & (arr_0 [i_8])))) ? (((/* implicit */int) ((unsigned short) (signed char)23))) : (((/* implicit */int) ((unsigned short) arr_0 [i_8])))));
        arr_32 [i_8] = ((/* implicit */unsigned short) ((((_Bool) (-(4294967295U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_8] [i_8]) : (((/* implicit */int) (signed char)-20))))) : (max((max((((/* implicit */unsigned int) (unsigned short)23792)), (arr_16 [i_8] [i_8] [(_Bool)1] [i_8] [i_8]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)15))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-15)), (var_9)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)27))))) : (var_1))) : ((~(arr_3 [i_8])))));
        arr_33 [i_8] = ((18446744073709551615ULL) > (max(((~(13659992495622901240ULL))), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_8] [i_8])))));
    }
    for (long long int i_9 = 2; i_9 < 15; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                {
                    arr_42 [i_9] [i_9 - 1] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)492))))) ? (((((/* implicit */int) (_Bool)0)) | (arr_39 [i_9 - 2] [i_9 - 2]))) : (((int) var_4))));
                    var_18 = ((/* implicit */signed char) (!(((_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (unsigned short)61042)) : (((/* implicit */int) (short)2)))))));
                }
            } 
        } 
        arr_43 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) (signed char)43))) ? (((int) (short)-32524)) : (((((/* implicit */_Bool) arr_41 [i_9 + 1] [i_9] [i_9 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))) > ((-(((/* implicit */int) (signed char)15))))));
        arr_44 [i_9] [i_9] = ((/* implicit */signed char) (unsigned short)30857);
    }
    var_19 = ((/* implicit */long long int) var_6);
    var_20 = ((/* implicit */unsigned short) var_0);
}
