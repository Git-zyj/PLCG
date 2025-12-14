/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151126
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)27195)), ((-(((/* implicit */int) ((_Bool) 8062107342980864744ULL)))))));
        var_18 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) * ((-(max((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL))))))));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_0])), (arr_0 [i_0]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)6144)), (arr_0 [(short)2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_2 [(unsigned char)8] [i_0])) : (((/* implicit */int) (unsigned short)2233))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) -906598928656381641LL))))), ((unsigned char)3))))));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)17305)))) > ((((!(((/* implicit */_Bool) var_14)))) ? (var_5) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_15 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4 + 2] [i_4] [i_4] [i_4])) * (((/* implicit */int) (_Bool)1))));
                        arr_16 [i_4 + 1] [i_3] [6] [i_1] = 3381098000U;
                        arr_17 [i_3] [i_4] = ((/* implicit */short) arr_3 [i_3] [(short)0]);
                    }
                } 
            } 
            var_22 ^= ((/* implicit */unsigned int) arr_13 [i_2]);
        }
        for (short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
        {
            arr_22 [(unsigned short)22] [i_1] [i_1] = ((/* implicit */short) arr_19 [(short)18]);
            arr_23 [i_5] [i_5] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17861713028460527027ULL))));
        }
        for (short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
        {
            arr_26 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-26927))));
            arr_27 [7ULL] [7ULL] [i_6] = ((/* implicit */short) ((unsigned short) arr_13 [i_1]));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? ((~(((long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) (short)4)) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)132)))))))))));
    var_24 = ((/* implicit */unsigned char) (~(var_3)));
    var_25 |= ((/* implicit */short) (((-(((((/* implicit */int) var_16)) * (((/* implicit */int) var_0)))))) > (((/* implicit */int) var_10))));
}
