/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135242
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
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) : (var_11)))) ? (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 2])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */int) var_19)) / (var_12))) : ((+(((/* implicit */int) var_19))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 2])) >= ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) (unsigned short)26234)) ? (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0 - 3]))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_3 [i_1])), ((~((~(0ULL)))))));
        var_22 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_4 [3U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1))))))), (((/* implicit */unsigned long long int) var_7))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_23 = ((/* implicit */_Bool) ((min((((int) (unsigned char)224)), (((arr_7 [i_2]) & (((/* implicit */int) (short)15721)))))) * (((/* implicit */int) var_10))));
        arr_8 [i_2] = ((/* implicit */signed char) ((_Bool) ((int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL)))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) var_17))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                    {
                        var_25 &= (+(((arr_0 [i_6 + 1] [i_6 + 1]) ? (var_5) : (((/* implicit */int) arr_0 [i_6 + 1] [i_6 + 1])))));
                        arr_21 [i_3] [i_4 - 1] [i_3] [i_6] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_20 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])))) << (((((/* implicit */int) max((arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_20 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])))) + (25469)))));
                        arr_22 [(short)9] [i_4 - 1] [i_4] [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_4 - 1] [i_6 + 1]) ? (((/* implicit */int) arr_0 [i_4 + 1] [i_6 + 1])) : (((/* implicit */int) arr_0 [i_4 - 1] [i_6 + 1]))))) ? (((/* implicit */int) (!(arr_0 [i_4 - 1] [i_6 + 1])))) : (((arr_0 [i_4 - 1] [i_6 - 1]) ? (((/* implicit */int) arr_0 [i_4 + 1] [i_6 + 1])) : (((/* implicit */int) (signed char)114))))));
                    }
                    for (int i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) var_1);
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((arr_11 [i_4]) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)162))))))))));
                    }
                    var_28 ^= ((/* implicit */short) var_1);
                    var_29 = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_19)))) / (-1639618647))));
                }
            } 
        } 
        arr_25 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) ? (((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-20211)))) & (arr_7 [i_3]))) : ((~(var_5))));
        var_30 = ((/* implicit */int) (unsigned char)255);
    }
    var_31 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (max((var_13), (var_13))) : (((/* implicit */unsigned long long int) (-(var_12))))))));
    var_32 = ((/* implicit */unsigned int) (unsigned short)6);
    var_33 -= ((/* implicit */int) var_0);
    var_34 = min((var_5), (((int) min((var_5), (((/* implicit */int) var_15))))));
}
