/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125372
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
    var_12 = ((/* implicit */_Bool) 434073660U);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(var_9))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned char) var_2);
            arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61562)) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_9 [i_1] [i_2])))) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2]))));
            var_14 = ((/* implicit */unsigned char) (unsigned short)3972);
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned short)61562))));
            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (unsigned short)3974);
            var_16 = (-(((/* implicit */int) arr_7 [(unsigned short)6] [i_3])));
            arr_15 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1] [i_3]))));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_17 = ((/* implicit */int) (unsigned short)3445);
            arr_18 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [11ULL])) : (var_9))))));
            var_19 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1] [i_4]))));
            arr_19 [(_Bool)0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((/* implicit */int) arr_2 [i_1] [i_4]))));
        }
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned short)62090)) - (62060))))))));
        var_21 ^= ((/* implicit */int) arr_1 [i_1] [i_1]);
        var_22 = ((/* implicit */short) 3167958100U);
        arr_20 [i_1] = ((/* implicit */unsigned int) arr_2 [(_Bool)1] [(_Bool)1]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 567453553048682496ULL)) ? (((((var_9) != (((/* implicit */unsigned long long int) var_11)))) ? (arr_13 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) (~(var_11)))))))));
            var_24 ^= ((/* implicit */unsigned int) max((((unsigned char) var_4)), (((unsigned char) (~(var_8))))));
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) var_6)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
            arr_25 [i_6] [i_6] = var_8;
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_29 [i_7] [(unsigned short)5] [i_5] |= ((_Bool) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8234))));
            arr_30 [i_7] &= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65535))));
            arr_31 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_7 + 1] [i_7 + 1])) ? (var_11) : (((/* implicit */int) arr_7 [4ULL] [4ULL]))));
            var_27 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_22 [i_5])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))))));
        }
        arr_32 [i_5] = ((/* implicit */unsigned char) var_1);
    }
}
